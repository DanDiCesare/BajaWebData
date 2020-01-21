/* Generated code for Python module 'urllib3.poolmanager'
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

/* The "_module_urllib3$poolmanager" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$poolmanager;
PyDictObject *moduledict_urllib3$poolmanager;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
extern PyObject *const_str_plain__fields;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_get_redirect_location;
extern PyObject *const_str_plain_ProxyManager;
extern PyObject *const_str_plain_cert_file;
static PyObject *const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple;
extern PyObject *const_str_plain_Retry;
static PyObject *const_str_digest_eb89dd95343c4834c13975c4510db133;
extern PyObject *const_str_plain_urljoin;
extern PyObject *const_str_plain_proxy;
extern PyObject *const_str_plain_exc_type;
extern PyObject *const_str_plain_cert_reqs;
extern PyObject *const_str_plain_u;
static PyObject *const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple;
static PyObject *const_str_plain_headers_;
static PyObject *const_str_plain_override;
static PyObject *const_list_8cc344de1d0e6b94d2846b0b3d67f4e3_list;
extern PyObject *const_str_plain_connection_from_url;
extern PyObject *const_str_plain_retries;
extern PyObject *const_str_plain_netloc;
extern PyObject *const_str_plain_pool_kwargs;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_digest_e68800bfc0da117494aca4ca9d48e152;
static PyObject *const_str_plain__merge_pool_kwargs;
extern PyObject *const_str_plain_proxy_headers;
extern PyObject *const_tuple_int_pos_10_none_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_str_plain_port_by_scheme_tuple;
extern PyObject *const_str_digest_7741b0d6f36d833f0a39c4030e21e701;
static PyObject *const_str_digest_69168908e1e5c7a88a50867458762f21;
extern PyObject *const_str_plain_exc_val;
extern PyObject *const_str_plain_RecentlyUsedContainer;
static PyObject *const_str_plain__key_fields;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_10f2d9fa157e6874affd346577388952_tuple;
static PyObject *const_str_plain__new_pool;
extern PyObject *const_str_plain_GET;
static PyObject *const_str_plain__set_proxy_headers;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_HTTPConnectionPool;
static PyObject *const_tuple_str_plain_p_tuple;
extern PyObject *const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085;
extern PyObject *const_str_plain_ProxySchemeUnknown;
extern PyObject *const_str_plain_http;
static PyObject *const_tuple_225e5979f0cd15282bedc54998c3135c_tuple;
extern PyObject *const_str_plain_ssl_version;
extern PyObject *const_str_plain_parse_url;
extern PyObject *const_str_plain__proxy;
extern PyObject *const_str_plain_https;
extern PyObject *const_str_plain_from_int;
extern PyObject *const_str_plain_num_pools;
extern PyObject *const_str_plain_conn;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_method;
static PyObject *const_str_plain_socket_opts;
static PyObject *const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce;
extern PyObject *const_int_pos_80;
extern PyObject *const_str_plain_ca_certs;
static PyObject *const_tuple_none_str_plain_http_none_tuple;
extern PyObject *const_str_plain__pool;
extern PyObject *const_int_pos_10;
static PyObject *const_tuple_7fbb1e226a0f60145d06316129872f5a_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_plain_dispose_func;
static PyObject *const_str_plain_key_class;
extern PyObject *const_str_plain_is_same_host;
static PyObject *const_str_digest_1552d535bdde2b752b496af3502874b7;
static PyObject *const_tuple_4427e5a5c9624d49672357f16db77b9e_tuple;
extern PyObject *const_tuple_str_plain_RequestMethods_tuple;
extern PyObject *const_str_plain_HTTPSConnectionPool;
static PyObject *const_str_plain_connection_from_pool_key;
extern PyObject *const_str_plain_partial;
static PyObject *const_tuple_f4c1b0d1c3513014a5c692939df7d64d_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_connection_from_host;
static PyObject *const_str_digest_098e3f66a1f5f66607f5ce5928065db6;
extern PyObject *const_str_plain_MaxRetryError;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_PoolManager;
extern PyObject *const_str_plain_request_uri;
extern PyObject *const_str_plain_raise_on_redirect;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_8af5e725dd02cb9d6b081e0759f2b386;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_exc_tb;
static PyObject *const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
static PyObject *const_str_digest_bf5dbefb2977de40599b057ababf6d11;
static PyObject *const_str_plain_base_pool_kwargs;
extern PyObject *const_str_digest_994b331706f7b8213e511b4daaa43bc4;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_lock;
static PyObject *const_str_digest_b65382343add153bfe7a0e41b1f6dadd;
extern PyObject *const_str_plain_connection_pool_kw;
static PyObject *const_tuple_ff3b4fc27b7f7cf07ef92f607b11a160_tuple;
extern PyObject *const_str_plain__collections;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_increment;
extern PyObject *const_str_plain_value;
extern PyObject *const_int_pos_303;
static PyObject *const_tuple_201dcfa097f09c0e8a946e8bd2d7f3c8_tuple;
extern PyObject *const_str_plain_Accept;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain__proxy_headers;
static PyObject *const_tuple_str_plain_http_str_plain_https_tuple;
extern PyObject *const_str_plain_Host;
extern PyObject *const_str_plain_info;
static PyObject *const_str_plain_request_context;
static PyObject *const_str_plain_pools;
static PyObject *const_str_plain_pool_key;
extern PyObject *const_str_plain_functools;
extern PyObject *const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple;
extern PyObject *const_str_plain__socks_options;
extern PyObject *const_str_plain_redirect;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_pool;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_SSL_KEYWORDS;
extern PyObject *const_str_plain___enter__;
static PyObject *const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple;
static PyObject *const_str_plain_connection_from_context;
static PyObject *const_str_digest_a8258c43e85755a08fc604877b816c69;
extern PyObject *const_str_plain_collections;
extern PyObject *const_str_plain_connectionpool;
extern PyObject *const_str_plain_LocationValueError;
extern PyObject *const_str_plain_redirect_location;
static PyObject *const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple;
extern PyObject *const_str_plain__replace;
static PyObject *const_str_digest_1445abaa24d4d64feabd13541f367d4c;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_pool_cls;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_remove_headers_on_redirect;
static PyObject *const_str_digest_707a5a9b156f542056749b61f0d359c1;
extern PyObject *const_tuple_str_plain_HTTPConnectionPool_str_plain_HTTPSConnectionPool_tuple;
static PyObject *const_str_digest_4464f0d3b4f3a9ab6e85c70a22b1e12e;
extern PyObject *const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple;
static PyObject *const_str_digest_7656b16d642bbe814d26b601fd9549aa;
extern PyObject *const_str_plain_pool_classes_by_scheme;
extern PyObject *const_str_plain_log;
static PyObject *const_str_plain_key_fn_by_scheme;
static PyObject *const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple;
extern PyObject *const_str_plain_port_by_scheme;
extern PyObject *const_str_plain_kw;
extern PyObject *const_str_plain_RequestMethods;
extern PyObject *const_str_plain_assert_same_host;
static PyObject *const_tuple_str_plain_url_str_plain_kw_tuple;
static PyObject *const_tuple_int_pos_10_none_none_tuple;
static PyObject *const_str_digest_13018ed62f3da7cc2adaa4292e149ff3;
extern PyObject *const_str_plain_ca_cert_dir;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_clear;
extern PyObject *const_str_digest_b63d90f3cfd130d49db0ff722bf44a6a;
static PyObject *const_str_plain__default_key_normalizer;
extern PyObject *const_str_plain_False;
extern PyObject *const_tuple_str_plain_Retry_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_parse_url_tuple;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_pool_key_constructor;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_port;
static PyObject *const_tuple_str_plain_urljoin_tuple;
static PyObject *const_str_digest_25eb4d20eeeb3591b633871959692d99;
extern PyObject *const_str_plain_proxy_url;
extern PyObject *const_str_plain_host;
static PyObject *const_tuple_str_plain_socket_options_tuple;
static PyObject *const_tuple_47cdc2b58290a1cc72fe3302c5a4db47_tuple;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_plain_key_;
extern PyObject *const_str_plain_proxy_from_url;
static PyObject *const_str_plain_PoolKey;
extern PyObject *const_str_plain_namedtuple;
static PyObject *const_tuple_c53cff22b092b8d7532d73e3369484b7_tuple;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_socket_options;
extern PyObject *const_str_plain_header;
extern PyObject *const_str_plain_key_file;
static PyObject *const_tuple_str_plain_retries_tuple;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_urlopen;
extern PyObject *const_str_plain_response;
static PyObject *const_tuple_c8157e33b484d3cedeeeac9e24a31ee1_tuple;
static PyObject *const_tuple_6f1e1a1473ea583521d7806eef124a45_tuple;
extern PyObject *const_str_plain_field;
static PyObject *const_tuple_d37da750a51ed0e0927da7743fa8464c_tuple;
static PyObject *const_str_digest_505fec576d13a443afa582b42f7eb689;
static PyObject *const_str_digest_c4d8d0af35cb6430f76f59b3d9c2397a;
extern PyObject *const_str_plain_ssl_context;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_tuple_str_plain_RecentlyUsedContainer_tuple;
static PyObject *const_tuple_4cf48c6347fa39e3c2d821fb8828821b_tuple;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple, 0, const_str_plain_headers); Py_INCREF(const_str_plain_headers);
    PyTuple_SET_ITEM(const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple, 1, const_str_plain__proxy_headers); Py_INCREF(const_str_plain__proxy_headers);
    PyTuple_SET_ITEM(const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple, 2, const_str_plain__socks_options); Py_INCREF(const_str_plain__socks_options);
    const_str_digest_eb89dd95343c4834c13975c4510db133 = UNSTREAM_STRING(&constant_bin[ 1162353 ], 397, 0);
    const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple, 1, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple, 2, const_str_plain_pool_kwargs); Py_INCREF(const_str_plain_pool_kwargs);
    PyTuple_SET_ITEM(const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple, 3, const_str_plain_u); Py_INCREF(const_str_plain_u);
    const_str_plain_headers_ = UNSTREAM_STRING(&constant_bin[ 682236 ], 8, 1);
    const_str_plain_override = UNSTREAM_STRING(&constant_bin[ 200346 ], 8, 1);
    const_list_8cc344de1d0e6b94d2846b0b3d67f4e3_list = PyList_New(3);
    PyList_SET_ITEM(const_list_8cc344de1d0e6b94d2846b0b3d67f4e3_list, 0, const_str_plain_PoolManager); Py_INCREF(const_str_plain_PoolManager);
    PyList_SET_ITEM(const_list_8cc344de1d0e6b94d2846b0b3d67f4e3_list, 1, const_str_plain_ProxyManager); Py_INCREF(const_str_plain_ProxyManager);
    PyList_SET_ITEM(const_list_8cc344de1d0e6b94d2846b0b3d67f4e3_list, 2, const_str_plain_proxy_from_url); Py_INCREF(const_str_plain_proxy_from_url);
    const_str_plain__merge_pool_kwargs = UNSTREAM_STRING(&constant_bin[ 1162750 ], 18, 1);
    const_tuple_str_plain_port_by_scheme_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_port_by_scheme_tuple, 0, const_str_plain_port_by_scheme); Py_INCREF(const_str_plain_port_by_scheme);
    const_str_digest_69168908e1e5c7a88a50867458762f21 = UNSTREAM_STRING(&constant_bin[ 1162768 ], 180, 0);
    const_str_plain__key_fields = UNSTREAM_STRING(&constant_bin[ 80327 ], 11, 1);
    const_tuple_10f2d9fa157e6874affd346577388952_tuple = PyTuple_New(8);
    PyTuple_SET_ITEM(const_tuple_10f2d9fa157e6874affd346577388952_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_10f2d9fa157e6874affd346577388952_tuple, 1, const_str_plain_proxy_url); Py_INCREF(const_str_plain_proxy_url);
    PyTuple_SET_ITEM(const_tuple_10f2d9fa157e6874affd346577388952_tuple, 2, const_str_plain_num_pools); Py_INCREF(const_str_plain_num_pools);
    PyTuple_SET_ITEM(const_tuple_10f2d9fa157e6874affd346577388952_tuple, 3, const_str_plain_headers); Py_INCREF(const_str_plain_headers);
    PyTuple_SET_ITEM(const_tuple_10f2d9fa157e6874affd346577388952_tuple, 4, const_str_plain_proxy_headers); Py_INCREF(const_str_plain_proxy_headers);
    PyTuple_SET_ITEM(const_tuple_10f2d9fa157e6874affd346577388952_tuple, 5, const_str_plain_connection_pool_kw); Py_INCREF(const_str_plain_connection_pool_kw);
    PyTuple_SET_ITEM(const_tuple_10f2d9fa157e6874affd346577388952_tuple, 6, const_str_plain_proxy); Py_INCREF(const_str_plain_proxy);
    PyTuple_SET_ITEM(const_tuple_10f2d9fa157e6874affd346577388952_tuple, 7, const_str_plain_port); Py_INCREF(const_str_plain_port);
    const_str_plain__new_pool = UNSTREAM_STRING(&constant_bin[ 1162948 ], 9, 1);
    const_str_plain__set_proxy_headers = UNSTREAM_STRING(&constant_bin[ 1162957 ], 18, 1);
    const_tuple_str_plain_p_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_p_tuple, 0, const_str_plain_p); Py_INCREF(const_str_plain_p);
    const_tuple_225e5979f0cd15282bedc54998c3135c_tuple = PyTuple_New(11);
    PyTuple_SET_ITEM(const_tuple_225e5979f0cd15282bedc54998c3135c_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_225e5979f0cd15282bedc54998c3135c_tuple, 1, const_str_plain_method); Py_INCREF(const_str_plain_method);
    PyTuple_SET_ITEM(const_tuple_225e5979f0cd15282bedc54998c3135c_tuple, 2, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_225e5979f0cd15282bedc54998c3135c_tuple, 3, const_str_plain_redirect); Py_INCREF(const_str_plain_redirect);
    PyTuple_SET_ITEM(const_tuple_225e5979f0cd15282bedc54998c3135c_tuple, 4, const_str_plain_kw); Py_INCREF(const_str_plain_kw);
    PyTuple_SET_ITEM(const_tuple_225e5979f0cd15282bedc54998c3135c_tuple, 5, const_str_plain_retries); Py_INCREF(const_str_plain_retries);
    PyTuple_SET_ITEM(const_tuple_225e5979f0cd15282bedc54998c3135c_tuple, 6, const_str_plain_response); Py_INCREF(const_str_plain_response);
    PyTuple_SET_ITEM(const_tuple_225e5979f0cd15282bedc54998c3135c_tuple, 7, const_str_plain_header); Py_INCREF(const_str_plain_header);
    PyTuple_SET_ITEM(const_tuple_225e5979f0cd15282bedc54998c3135c_tuple, 8, const_str_plain_redirect_location); Py_INCREF(const_str_plain_redirect_location);
    PyTuple_SET_ITEM(const_tuple_225e5979f0cd15282bedc54998c3135c_tuple, 9, const_str_plain_u); Py_INCREF(const_str_plain_u);
    PyTuple_SET_ITEM(const_tuple_225e5979f0cd15282bedc54998c3135c_tuple, 10, const_str_plain_conn); Py_INCREF(const_str_plain_conn);
    const_str_plain_socket_opts = UNSTREAM_STRING(&constant_bin[ 1162975 ], 11, 1);
    const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce, const_str_plain_Accept, const_str_digest_994b331706f7b8213e511b4daaa43bc4);
    assert(PyDict_Size(const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce) == 1);
    const_tuple_none_str_plain_http_none_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_none_str_plain_http_none_tuple, 0, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_none_str_plain_http_none_tuple, 1, const_str_plain_http); Py_INCREF(const_str_plain_http);
    PyTuple_SET_ITEM(const_tuple_none_str_plain_http_none_tuple, 2, Py_None); Py_INCREF(Py_None);
    const_tuple_7fbb1e226a0f60145d06316129872f5a_tuple = PyTuple_New(8);
    PyTuple_SET_ITEM(const_tuple_7fbb1e226a0f60145d06316129872f5a_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_7fbb1e226a0f60145d06316129872f5a_tuple, 1, const_str_plain_scheme); Py_INCREF(const_str_plain_scheme);
    PyTuple_SET_ITEM(const_tuple_7fbb1e226a0f60145d06316129872f5a_tuple, 2, const_str_plain_host); Py_INCREF(const_str_plain_host);
    PyTuple_SET_ITEM(const_tuple_7fbb1e226a0f60145d06316129872f5a_tuple, 3, const_str_plain_port); Py_INCREF(const_str_plain_port);
    const_str_plain_request_context = UNSTREAM_STRING(&constant_bin[ 1162986 ], 15, 1);
    PyTuple_SET_ITEM(const_tuple_7fbb1e226a0f60145d06316129872f5a_tuple, 4, const_str_plain_request_context); Py_INCREF(const_str_plain_request_context);
    const_str_plain_pool_cls = UNSTREAM_STRING(&constant_bin[ 1163001 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_7fbb1e226a0f60145d06316129872f5a_tuple, 5, const_str_plain_pool_cls); Py_INCREF(const_str_plain_pool_cls);
    PyTuple_SET_ITEM(const_tuple_7fbb1e226a0f60145d06316129872f5a_tuple, 6, const_str_plain_kw); Py_INCREF(const_str_plain_kw);
    PyTuple_SET_ITEM(const_tuple_7fbb1e226a0f60145d06316129872f5a_tuple, 7, const_str_plain_key); Py_INCREF(const_str_plain_key);
    const_str_plain_key_class = UNSTREAM_STRING(&constant_bin[ 1163009 ], 9, 1);
    const_str_digest_1552d535bdde2b752b496af3502874b7 = UNSTREAM_STRING(&constant_bin[ 1163018 ], 64, 0);
    const_tuple_4427e5a5c9624d49672357f16db77b9e_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_4427e5a5c9624d49672357f16db77b9e_tuple, 0, const_str_plain_key_class); Py_INCREF(const_str_plain_key_class);
    PyTuple_SET_ITEM(const_tuple_4427e5a5c9624d49672357f16db77b9e_tuple, 1, const_str_plain_request_context); Py_INCREF(const_str_plain_request_context);
    PyTuple_SET_ITEM(const_tuple_4427e5a5c9624d49672357f16db77b9e_tuple, 2, const_str_plain_context); Py_INCREF(const_str_plain_context);
    PyTuple_SET_ITEM(const_tuple_4427e5a5c9624d49672357f16db77b9e_tuple, 3, const_str_plain_field); Py_INCREF(const_str_plain_field);
    PyTuple_SET_ITEM(const_tuple_4427e5a5c9624d49672357f16db77b9e_tuple, 4, const_str_plain_socket_opts); Py_INCREF(const_str_plain_socket_opts);
    PyTuple_SET_ITEM(const_tuple_4427e5a5c9624d49672357f16db77b9e_tuple, 5, const_str_plain_key); Py_INCREF(const_str_plain_key);
    const_str_plain_connection_from_pool_key = UNSTREAM_STRING(&constant_bin[ 1163082 ], 24, 1);
    const_tuple_f4c1b0d1c3513014a5c692939df7d64d_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_f4c1b0d1c3513014a5c692939df7d64d_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_f4c1b0d1c3513014a5c692939df7d64d_tuple, 1, const_str_plain_host); Py_INCREF(const_str_plain_host);
    PyTuple_SET_ITEM(const_tuple_f4c1b0d1c3513014a5c692939df7d64d_tuple, 2, const_str_plain_port); Py_INCREF(const_str_plain_port);
    PyTuple_SET_ITEM(const_tuple_f4c1b0d1c3513014a5c692939df7d64d_tuple, 3, const_str_plain_scheme); Py_INCREF(const_str_plain_scheme);
    PyTuple_SET_ITEM(const_tuple_f4c1b0d1c3513014a5c692939df7d64d_tuple, 4, const_str_plain_pool_kwargs); Py_INCREF(const_str_plain_pool_kwargs);
    const_str_plain_connection_from_host = UNSTREAM_STRING(&constant_bin[ 1163106 ], 20, 1);
    const_str_digest_098e3f66a1f5f66607f5ce5928065db6 = UNSTREAM_STRING(&constant_bin[ 1163126 ], 22, 0);
    const_str_digest_8af5e725dd02cb9d6b081e0759f2b386 = UNSTREAM_STRING(&constant_bin[ 1163148 ], 470, 0);
    const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple, 0, const_str_plain_scheme); Py_INCREF(const_str_plain_scheme);
    PyTuple_SET_ITEM(const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple, 1, const_str_plain_host); Py_INCREF(const_str_plain_host);
    PyTuple_SET_ITEM(const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple, 2, const_str_plain_port); Py_INCREF(const_str_plain_port);
    const_str_digest_bf5dbefb2977de40599b057ababf6d11 = UNSTREAM_STRING(&constant_bin[ 1163618 ], 888, 0);
    const_str_plain_base_pool_kwargs = UNSTREAM_STRING(&constant_bin[ 1164506 ], 16, 1);
    const_str_digest_b65382343add153bfe7a0e41b1f6dadd = UNSTREAM_STRING(&constant_bin[ 1164522 ], 10, 0);
    const_tuple_ff3b4fc27b7f7cf07ef92f607b11a160_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_ff3b4fc27b7f7cf07ef92f607b11a160_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_ff3b4fc27b7f7cf07ef92f607b11a160_tuple, 1, const_str_plain_num_pools); Py_INCREF(const_str_plain_num_pools);
    PyTuple_SET_ITEM(const_tuple_ff3b4fc27b7f7cf07ef92f607b11a160_tuple, 2, const_str_plain_headers); Py_INCREF(const_str_plain_headers);
    PyTuple_SET_ITEM(const_tuple_ff3b4fc27b7f7cf07ef92f607b11a160_tuple, 3, const_str_plain_connection_pool_kw); Py_INCREF(const_str_plain_connection_pool_kw);
    const_tuple_201dcfa097f09c0e8a946e8bd2d7f3c8_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_201dcfa097f09c0e8a946e8bd2d7f3c8_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_201dcfa097f09c0e8a946e8bd2d7f3c8_tuple, 1, const_str_plain_method); Py_INCREF(const_str_plain_method);
    PyTuple_SET_ITEM(const_tuple_201dcfa097f09c0e8a946e8bd2d7f3c8_tuple, 2, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_201dcfa097f09c0e8a946e8bd2d7f3c8_tuple, 3, const_str_plain_redirect); Py_INCREF(const_str_plain_redirect);
    PyTuple_SET_ITEM(const_tuple_201dcfa097f09c0e8a946e8bd2d7f3c8_tuple, 4, const_str_plain_kw); Py_INCREF(const_str_plain_kw);
    PyTuple_SET_ITEM(const_tuple_201dcfa097f09c0e8a946e8bd2d7f3c8_tuple, 5, const_str_plain_headers); Py_INCREF(const_str_plain_headers);
    PyTuple_SET_ITEM(const_tuple_201dcfa097f09c0e8a946e8bd2d7f3c8_tuple, 6, const_str_plain_u); Py_INCREF(const_str_plain_u);
    const_tuple_str_plain_http_str_plain_https_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_http_str_plain_https_tuple, 0, const_str_plain_http); Py_INCREF(const_str_plain_http);
    PyTuple_SET_ITEM(const_tuple_str_plain_http_str_plain_https_tuple, 1, const_str_plain_https); Py_INCREF(const_str_plain_https);
    const_str_plain_pools = UNSTREAM_STRING(&constant_bin[ 1037682 ], 5, 1);
    const_str_plain_pool_key = UNSTREAM_STRING(&constant_bin[ 1163098 ], 8, 1);
    const_str_plain_SSL_KEYWORDS = UNSTREAM_STRING(&constant_bin[ 80252 ], 12, 1);
    const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, 1, const_str_plain_host); Py_INCREF(const_str_plain_host);
    PyTuple_SET_ITEM(const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, 2, const_str_plain_port); Py_INCREF(const_str_plain_port);
    PyTuple_SET_ITEM(const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, 3, const_str_plain_scheme); Py_INCREF(const_str_plain_scheme);
    PyTuple_SET_ITEM(const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, 4, const_str_plain_pool_kwargs); Py_INCREF(const_str_plain_pool_kwargs);
    PyTuple_SET_ITEM(const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, 5, const_str_plain_request_context); Py_INCREF(const_str_plain_request_context);
    const_str_plain_connection_from_context = UNSTREAM_STRING(&constant_bin[ 1164532 ], 23, 1);
    const_str_digest_a8258c43e85755a08fc604877b816c69 = UNSTREAM_STRING(&constant_bin[ 1164555 ], 251, 0);
    const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple, 0, const_str_plain_key_file); Py_INCREF(const_str_plain_key_file);
    PyTuple_SET_ITEM(const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple, 1, const_str_plain_cert_file); Py_INCREF(const_str_plain_cert_file);
    PyTuple_SET_ITEM(const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple, 2, const_str_plain_cert_reqs); Py_INCREF(const_str_plain_cert_reqs);
    PyTuple_SET_ITEM(const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple, 3, const_str_plain_ca_certs); Py_INCREF(const_str_plain_ca_certs);
    PyTuple_SET_ITEM(const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple, 4, const_str_plain_ssl_version); Py_INCREF(const_str_plain_ssl_version);
    PyTuple_SET_ITEM(const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple, 5, const_str_plain_ca_cert_dir); Py_INCREF(const_str_plain_ca_cert_dir);
    PyTuple_SET_ITEM(const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple, 6, const_str_plain_ssl_context); Py_INCREF(const_str_plain_ssl_context);
    const_str_digest_1445abaa24d4d64feabd13541f367d4c = UNSTREAM_STRING(&constant_bin[ 1164806 ], 349, 0);
    const_str_digest_707a5a9b156f542056749b61f0d359c1 = UNSTREAM_STRING(&constant_bin[ 1165155 ], 28, 0);
    const_str_digest_4464f0d3b4f3a9ab6e85c70a22b1e12e = UNSTREAM_STRING(&constant_bin[ 1165183 ], 279, 0);
    const_str_digest_7656b16d642bbe814d26b601fd9549aa = UNSTREAM_STRING(&constant_bin[ 1165462 ], 144, 0);
    const_str_plain_key_fn_by_scheme = UNSTREAM_STRING(&constant_bin[ 80207 ], 16, 1);
    const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple, 0, const_str_digest_901e90eee70586f15ff5cd8bfbf848b6); Py_INCREF(const_str_digest_901e90eee70586f15ff5cd8bfbf848b6);
    const_tuple_str_plain_url_str_plain_kw_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_url_str_plain_kw_tuple, 0, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_str_plain_url_str_plain_kw_tuple, 1, const_str_plain_kw); Py_INCREF(const_str_plain_kw);
    const_tuple_int_pos_10_none_none_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_int_pos_10_none_none_tuple, 0, const_int_pos_10); Py_INCREF(const_int_pos_10);
    PyTuple_SET_ITEM(const_tuple_int_pos_10_none_none_tuple, 1, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_int_pos_10_none_none_tuple, 2, Py_None); Py_INCREF(Py_None);
    const_str_digest_13018ed62f3da7cc2adaa4292e149ff3 = UNSTREAM_STRING(&constant_bin[ 1165606 ], 759, 0);
    const_str_plain__default_key_normalizer = UNSTREAM_STRING(&constant_bin[ 80360 ], 23, 1);
    const_str_plain_pool_key_constructor = UNSTREAM_STRING(&constant_bin[ 1166365 ], 20, 1);
    const_tuple_str_plain_urljoin_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_urljoin_tuple, 0, const_str_plain_urljoin); Py_INCREF(const_str_plain_urljoin);
    const_str_digest_25eb4d20eeeb3591b633871959692d99 = UNSTREAM_STRING(&constant_bin[ 1166385 ], 439, 0);
    const_tuple_str_plain_socket_options_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_socket_options_tuple, 0, const_str_plain_socket_options); Py_INCREF(const_str_plain_socket_options);
    const_tuple_47cdc2b58290a1cc72fe3302c5a4db47_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_47cdc2b58290a1cc72fe3302c5a4db47_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_47cdc2b58290a1cc72fe3302c5a4db47_tuple, 1, const_str_plain_request_context); Py_INCREF(const_str_plain_request_context);
    PyTuple_SET_ITEM(const_tuple_47cdc2b58290a1cc72fe3302c5a4db47_tuple, 2, const_str_plain_scheme); Py_INCREF(const_str_plain_scheme);
    PyTuple_SET_ITEM(const_tuple_47cdc2b58290a1cc72fe3302c5a4db47_tuple, 3, const_str_plain_pool_key); Py_INCREF(const_str_plain_pool_key);
    PyTuple_SET_ITEM(const_tuple_47cdc2b58290a1cc72fe3302c5a4db47_tuple, 4, const_str_plain_pool_key_constructor); Py_INCREF(const_str_plain_pool_key_constructor);
    const_str_plain_key_ = UNSTREAM_STRING(&constant_bin[ 13302 ], 4, 1);
    const_str_plain_PoolKey = UNSTREAM_STRING(&constant_bin[ 80405 ], 7, 1);
    const_tuple_c53cff22b092b8d7532d73e3369484b7_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_c53cff22b092b8d7532d73e3369484b7_tuple, 0, const_str_plain_LocationValueError); Py_INCREF(const_str_plain_LocationValueError);
    PyTuple_SET_ITEM(const_tuple_c53cff22b092b8d7532d73e3369484b7_tuple, 1, const_str_plain_MaxRetryError); Py_INCREF(const_str_plain_MaxRetryError);
    PyTuple_SET_ITEM(const_tuple_c53cff22b092b8d7532d73e3369484b7_tuple, 2, const_str_plain_ProxySchemeUnknown); Py_INCREF(const_str_plain_ProxySchemeUnknown);
    const_tuple_str_plain_retries_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_retries_tuple, 0, const_str_plain_retries); Py_INCREF(const_str_plain_retries);
    const_tuple_c8157e33b484d3cedeeeac9e24a31ee1_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_c8157e33b484d3cedeeeac9e24a31ee1_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_c8157e33b484d3cedeeeac9e24a31ee1_tuple, 1, const_str_plain_pool_key); Py_INCREF(const_str_plain_pool_key);
    PyTuple_SET_ITEM(const_tuple_c8157e33b484d3cedeeeac9e24a31ee1_tuple, 2, const_str_plain_request_context); Py_INCREF(const_str_plain_request_context);
    PyTuple_SET_ITEM(const_tuple_c8157e33b484d3cedeeeac9e24a31ee1_tuple, 3, const_str_plain_host); Py_INCREF(const_str_plain_host);
    PyTuple_SET_ITEM(const_tuple_c8157e33b484d3cedeeeac9e24a31ee1_tuple, 4, const_str_plain_scheme); Py_INCREF(const_str_plain_scheme);
    PyTuple_SET_ITEM(const_tuple_c8157e33b484d3cedeeeac9e24a31ee1_tuple, 5, const_str_plain_port); Py_INCREF(const_str_plain_port);
    PyTuple_SET_ITEM(const_tuple_c8157e33b484d3cedeeeac9e24a31ee1_tuple, 6, const_str_plain_pool); Py_INCREF(const_str_plain_pool);
    const_tuple_6f1e1a1473ea583521d7806eef124a45_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 1166824 ], 451);
    const_tuple_d37da750a51ed0e0927da7743fa8464c_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_d37da750a51ed0e0927da7743fa8464c_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_d37da750a51ed0e0927da7743fa8464c_tuple, 1, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_d37da750a51ed0e0927da7743fa8464c_tuple, 2, const_str_plain_headers); Py_INCREF(const_str_plain_headers);
    PyTuple_SET_ITEM(const_tuple_d37da750a51ed0e0927da7743fa8464c_tuple, 3, const_str_plain_netloc); Py_INCREF(const_str_plain_netloc);
    PyTuple_SET_ITEM(const_tuple_d37da750a51ed0e0927da7743fa8464c_tuple, 4, const_str_plain_headers_); Py_INCREF(const_str_plain_headers_);
    const_str_digest_505fec576d13a443afa582b42f7eb689 = UNSTREAM_STRING(&constant_bin[ 1167275 ], 804, 0);
    const_str_digest_c4d8d0af35cb6430f76f59b3d9c2397a = UNSTREAM_STRING(&constant_bin[ 1168079 ], 226, 0);
    const_tuple_str_plain_RecentlyUsedContainer_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_RecentlyUsedContainer_tuple, 0, const_str_plain_RecentlyUsedContainer); Py_INCREF(const_str_plain_RecentlyUsedContainer);
    const_tuple_4cf48c6347fa39e3c2d821fb8828821b_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_4cf48c6347fa39e3c2d821fb8828821b_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_4cf48c6347fa39e3c2d821fb8828821b_tuple, 1, const_str_plain_override); Py_INCREF(const_str_plain_override);
    PyTuple_SET_ITEM(const_tuple_4cf48c6347fa39e3c2d821fb8828821b_tuple, 2, const_str_plain_value); Py_INCREF(const_str_plain_value);
    PyTuple_SET_ITEM(const_tuple_4cf48c6347fa39e3c2d821fb8828821b_tuple, 3, const_str_plain_base_pool_kwargs); Py_INCREF(const_str_plain_base_pool_kwargs);
    PyTuple_SET_ITEM(const_tuple_4cf48c6347fa39e3c2d821fb8828821b_tuple, 4, const_str_plain_key); Py_INCREF(const_str_plain_key);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$poolmanager(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c4e203c1d2f51a0d543fa4ef36d77f94;
static PyCodeObject *codeobj_5d796292aa45c666168c9a46a8c7df9f;
static PyCodeObject *codeobj_9be4a3f02fe45902401af2c81523ab81;
static PyCodeObject *codeobj_35a23ccc8d8ae2d7d862304e0fc65130;
static PyCodeObject *codeobj_651b0cebdba31fd54955bff9cde2e224;
static PyCodeObject *codeobj_9cfcb39782abd89081f451a1b8ae2e1f;
static PyCodeObject *codeobj_6b166e5a41a6d6ec93f46dd3343de56a;
static PyCodeObject *codeobj_20a0f5a52b5372bc19401da265256b17;
static PyCodeObject *codeobj_525fd67cda02bde607f65348f1bd8b90;
static PyCodeObject *codeobj_f2479b456d6bcc5c4c0e30ebf284a70c;
static PyCodeObject *codeobj_1c6c4510ee8e572458eea343e08c961f;
static PyCodeObject *codeobj_ca57a9cd6d944a3bba26b77862278b58;
static PyCodeObject *codeobj_d58f4757f515865683669840addb5cf6;
static PyCodeObject *codeobj_345552b61447e903033ff56909a548eb;
static PyCodeObject *codeobj_73be0345e77d6daca31ed36cf1f6627b;
static PyCodeObject *codeobj_13594b33f705dbafd41fe006b8bbbffa;
static PyCodeObject *codeobj_6a25835295433e71113d29bc2d81c18f;
static PyCodeObject *codeobj_ed621d996cb03427a1bfb1c8c9df9f64;
static PyCodeObject *codeobj_26a194e280b24da7fdb9a4fbdf4f2315;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_098e3f66a1f5f66607f5ce5928065db6);
    codeobj_c4e203c1d2f51a0d543fa4ef36d77f94 = MAKE_CODEOBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_angle_lambda, const_tuple_str_plain_p_tuple, 1, 0, 0);
    codeobj_5d796292aa45c666168c9a46a8c7df9f = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_digest_707a5a9b156f542056749b61f0d359c1, const_tuple_empty, 0, 0, 0);
    codeobj_9be4a3f02fe45902401af2c81523ab81 = MAKE_CODEOBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain___enter__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_35a23ccc8d8ae2d7d862304e0fc65130 = MAKE_CODEOBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain___exit__, const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple, 4, 0, 0);
    codeobj_651b0cebdba31fd54955bff9cde2e224 = MAKE_CODEOBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain___init__, const_tuple_ff3b4fc27b7f7cf07ef92f607b11a160_tuple, 3, 0, 0);
    codeobj_9cfcb39782abd89081f451a1b8ae2e1f = MAKE_CODEOBJECT(module_filename_obj, 389, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain___init__, const_tuple_10f2d9fa157e6874affd346577388952_tuple, 5, 0, 0);
    codeobj_6b166e5a41a6d6ec93f46dd3343de56a = MAKE_CODEOBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain__default_key_normalizer, const_tuple_4427e5a5c9624d49672357f16db77b9e_tuple, 2, 0, 0);
    codeobj_20a0f5a52b5372bc19401da265256b17 = MAKE_CODEOBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain__merge_pool_kwargs, const_tuple_4cf48c6347fa39e3c2d821fb8828821b_tuple, 2, 0, 0);
    codeobj_525fd67cda02bde607f65348f1bd8b90 = MAKE_CODEOBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain__new_pool, const_tuple_7fbb1e226a0f60145d06316129872f5a_tuple, 5, 0, 0);
    codeobj_f2479b456d6bcc5c4c0e30ebf284a70c = MAKE_CODEOBJECT(module_filename_obj, 420, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain__set_proxy_headers, const_tuple_d37da750a51ed0e0927da7743fa8464c_tuple, 3, 0, 0);
    codeobj_1c6c4510ee8e572458eea343e08c961f = MAKE_CODEOBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_clear, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_ca57a9cd6d944a3bba26b77862278b58 = MAKE_CODEOBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_connection_from_context, const_tuple_47cdc2b58290a1cc72fe3302c5a4db47_tuple, 2, 0, 0);
    codeobj_d58f4757f515865683669840addb5cf6 = MAKE_CODEOBJECT(module_filename_obj, 412, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_connection_from_host, const_tuple_f4c1b0d1c3513014a5c692939df7d64d_tuple, 5, 0, 0);
    codeobj_345552b61447e903033ff56909a548eb = MAKE_CODEOBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_connection_from_host, const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, 5, 0, 0);
    codeobj_73be0345e77d6daca31ed36cf1f6627b = MAKE_CODEOBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_connection_from_pool_key, const_tuple_c8157e33b484d3cedeeeac9e24a31ee1_tuple, 3, 0, 0);
    codeobj_13594b33f705dbafd41fe006b8bbbffa = MAKE_CODEOBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_connection_from_url, const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple, 3, 0, 0);
    codeobj_6a25835295433e71113d29bc2d81c18f = MAKE_CODEOBJECT(module_filename_obj, 449, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_proxy_from_url, const_tuple_str_plain_url_str_plain_kw_tuple, 1, 0, 0);
    codeobj_ed621d996cb03427a1bfb1c8c9df9f64 = MAKE_CODEOBJECT(module_filename_obj, 435, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_urlopen, const_tuple_201dcfa097f09c0e8a946e8bd2d7f3c8_tuple, 4, 0, 0);
    codeobj_26a194e280b24da7fdb9a4fbdf4f2315 = MAKE_CODEOBJECT(module_filename_obj, 302, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_urlopen, const_tuple_225e5979f0cd15282bedc54998c3135c_tuple, 4, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_10_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_11_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_10_connection_from_url(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_11__merge_pool_kwargs();


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_12_urlopen(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_13___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_14_connection_from_host(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_15__set_proxy_headers(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_16_urlopen(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_17_proxy_from_url();


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_1__default_key_normalizer();


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_2___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_2___init__$$$function_1_lambda();


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_3___enter__();


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_4___exit__();


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_5__new_pool(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_6_clear();


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_7_connection_from_host(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_8_connection_from_context();


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_9_connection_from_pool_key(PyObject *defaults);


// The module function definitions.
static PyObject *impl_urllib3$poolmanager$$$function_1__default_key_normalizer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key_class = python_pars[0];
    PyObject *par_request_context = python_pars[1];
    PyObject *var_context = NULL;
    PyObject *var_field = NULL;
    PyObject *var_socket_opts = NULL;
    PyObject *var_key = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_6b166e5a41a6d6ec93f46dd3343de56a;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6b166e5a41a6d6ec93f46dd3343de56a = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_6b166e5a41a6d6ec93f46dd3343de56a, codeobj_6b166e5a41a6d6ec93f46dd3343de56a, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_6b166e5a41a6d6ec93f46dd3343de56a = cache_frame_6b166e5a41a6d6ec93f46dd3343de56a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6b166e5a41a6d6ec93f46dd3343de56a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6b166e5a41a6d6ec93f46dd3343de56a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_request_context);
        tmp_called_instance_1 = par_request_context;
        frame_6b166e5a41a6d6ec93f46dd3343de56a->m_frame.f_lineno = 79;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_copy);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_context == NULL);
        var_context = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_context);
        tmp_subscribed_name_1 = var_context;
        tmp_subscript_name_1 = const_str_plain_scheme;
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_6b166e5a41a6d6ec93f46dd3343de56a->m_frame.f_lineno = 80;
        tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_lower);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_context);
        tmp_ass_subscribed_1 = var_context;
        tmp_ass_subscript_1 = const_str_plain_scheme;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_context);
        tmp_subscribed_name_2 = var_context;
        tmp_subscript_name_2 = const_str_plain_host;
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_6b166e5a41a6d6ec93f46dd3343de56a->m_frame.f_lineno = 81;
        tmp_ass_subvalue_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_lower);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_context);
        tmp_ass_subscribed_2 = var_context;
        tmp_ass_subscript_2 = const_str_plain_host;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        assert(!(tmp_assign_source_2 == NULL));
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
                type_description_1 = "oooooo";
                exception_lineno = 84;
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
            PyObject *old = var_key;
            var_key = tmp_assign_source_4;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(var_key);
        tmp_compexpr_left_1 = var_key;
        CHECK_OBJECT(var_context);
        tmp_compexpr_right_1 = var_context;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_context);
        tmp_subscribed_name_3 = var_context;
        CHECK_OBJECT(var_key);
        tmp_subscript_name_3 = var_key;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_and_right_value_1 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_2);
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
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_frozenset_arg_1;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT(var_context);
            tmp_subscribed_name_4 = var_context;
            CHECK_OBJECT(var_key);
            tmp_subscript_name_4 = var_key;
            tmp_called_instance_4 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_4, tmp_subscript_name_4);
            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            frame_6b166e5a41a6d6ec93f46dd3343de56a->m_frame.f_lineno = 86;
            tmp_frozenset_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_items);
            Py_DECREF(tmp_called_instance_4);
            if (tmp_frozenset_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_ass_subvalue_3 = PyFrozenSet_New(tmp_frozenset_arg_1);
            Py_DECREF(tmp_frozenset_arg_1);
            if (tmp_ass_subvalue_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_context);
            tmp_ass_subscribed_3 = var_context;
            CHECK_OBJECT(var_key);
            tmp_ass_subscript_3 = var_key;
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
        }
        branch_no_1:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 84;
        type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_context);
        tmp_called_instance_5 = var_context;
        frame_6b166e5a41a6d6ec93f46dd3343de56a->m_frame.f_lineno = 90;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_socket_options_tuple, 0));

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_socket_opts == NULL);
        var_socket_opts = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var_socket_opts);
        tmp_compexpr_left_3 = var_socket_opts;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_tuple_arg_1;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            CHECK_OBJECT(var_socket_opts);
            tmp_tuple_arg_1 = var_socket_opts;
            tmp_ass_subvalue_4 = PySequence_Tuple(tmp_tuple_arg_1);
            if (tmp_ass_subvalue_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_context);
            tmp_ass_subscribed_4 = var_context;
            tmp_ass_subscript_4 = const_str_plain_socket_options;
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_context);
        tmp_called_instance_6 = var_context;
        frame_6b166e5a41a6d6ec93f46dd3343de56a->m_frame.f_lineno = 96;
        tmp_list_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, const_str_plain_keys);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_2 = PySequence_List(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 96;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_8 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_8;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(var_context);
        tmp_called_instance_7 = var_context;
        CHECK_OBJECT(var_key);
        tmp_args_element_name_1 = var_key;
        frame_6b166e5a41a6d6ec93f46dd3343de56a->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_ass_subvalue_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_pop, call_args);
        }

        if (tmp_ass_subvalue_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_context);
        tmp_ass_subscribed_5 = var_context;
        tmp_left_name_1 = const_str_plain_key_;
        CHECK_OBJECT(var_key);
        tmp_right_name_1 = var_key;
        tmp_ass_subscript_5 = BINARY_OPERATION_ADD_STR_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_ass_subscript_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_5);

            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subscript_5);
        Py_DECREF(tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_key_class);
        tmp_source_name_1 = par_key_class;
        tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__fields);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 100;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_11 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_field;
            var_field = tmp_assign_source_11;
            Py_INCREF(var_field);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(var_field);
        tmp_compexpr_left_4 = var_field;
        CHECK_OBJECT(var_context);
        tmp_compexpr_right_4 = var_context;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = Py_None;
            CHECK_OBJECT(var_context);
            tmp_ass_subscribed_6 = var_context;
            CHECK_OBJECT(var_field);
            tmp_ass_subscript_6 = var_field;
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
        }
        branch_no_3:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 100;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
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

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;

    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(par_key_class);
        tmp_dircall_arg1_1 = par_key_class;
        CHECK_OBJECT(var_context);
        tmp_dircall_arg2_1 = var_context;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___internal__$$$function_3_complex_call_helper_star_dict(dir_call_args);
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

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b166e5a41a6d6ec93f46dd3343de56a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b166e5a41a6d6ec93f46dd3343de56a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b166e5a41a6d6ec93f46dd3343de56a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b166e5a41a6d6ec93f46dd3343de56a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_6b166e5a41a6d6ec93f46dd3343de56a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b166e5a41a6d6ec93f46dd3343de56a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6b166e5a41a6d6ec93f46dd3343de56a,
        type_description_1,
        par_key_class,
        par_request_context,
        var_context,
        var_field,
        var_socket_opts,
        var_key
    );


    // Release cached frame.
    if (frame_6b166e5a41a6d6ec93f46dd3343de56a == cache_frame_6b166e5a41a6d6ec93f46dd3343de56a) {
        Py_DECREF(frame_6b166e5a41a6d6ec93f46dd3343de56a);
    }
    cache_frame_6b166e5a41a6d6ec93f46dd3343de56a = NULL;

    assertFrameObject(frame_6b166e5a41a6d6ec93f46dd3343de56a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_1__default_key_normalizer);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_context);
    Py_DECREF(var_context);
    var_context = NULL;

    Py_XDECREF(var_field);
    var_field = NULL;

    CHECK_OBJECT((PyObject *)var_socket_opts);
    Py_DECREF(var_socket_opts);
    var_socket_opts = NULL;

    Py_XDECREF(var_key);
    var_key = NULL;

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

    Py_XDECREF(var_context);
    var_context = NULL;

    Py_XDECREF(var_field);
    var_field = NULL;

    Py_XDECREF(var_socket_opts);
    var_socket_opts = NULL;

    Py_XDECREF(var_key);
    var_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_1__default_key_normalizer);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key_class);
    Py_DECREF(par_key_class);
    CHECK_OBJECT(par_request_context);
    Py_DECREF(par_request_context);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key_class);
    Py_DECREF(par_key_class);
    CHECK_OBJECT(par_request_context);
    Py_DECREF(par_request_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_num_pools = python_pars[1];
    PyObject *par_headers = python_pars[2];
    PyObject *par_connection_pool_kw = python_pars[3];
    struct Nuitka_FrameObject *frame_651b0cebdba31fd54955bff9cde2e224;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_651b0cebdba31fd54955bff9cde2e224 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_651b0cebdba31fd54955bff9cde2e224, codeobj_651b0cebdba31fd54955bff9cde2e224, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_651b0cebdba31fd54955bff9cde2e224 = cache_frame_651b0cebdba31fd54955bff9cde2e224;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_651b0cebdba31fd54955bff9cde2e224);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_651b0cebdba31fd54955bff9cde2e224) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_RequestMethods);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestMethods);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 76997 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 153;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT(par_headers);
        tmp_args_element_name_2 = par_headers;
        frame_651b0cebdba31fd54955bff9cde2e224->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain___init__, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_connection_pool_kw);
        tmp_assattr_name_1 = par_connection_pool_kw;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_connection_pool_kw, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_RecentlyUsedContainer);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RecentlyUsedContainer);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 80093 ], 50, 0);
            exception_tb = NULL;

            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT(par_num_pools);
        tmp_tuple_element_1 = par_num_pools;
        tmp_args_name_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_value_1 = MAKE_FUNCTION_urllib3$poolmanager$$$function_2___init__$$$function_1_lambda();



        tmp_dict_key_1 = const_str_plain_dispose_func;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_651b0cebdba31fd54955bff9cde2e224->m_frame.f_lineno = 155;
        tmp_assattr_name_2 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_pools, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_pool_classes_by_scheme);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_pool_classes_by_scheme);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 80143 ], 51, 0);
            exception_tb = NULL;

            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_pool_classes_by_scheme, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_key_fn_by_scheme);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_key_fn_by_scheme);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 80194 ], 45, 0);
            exception_tb = NULL;

            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        frame_651b0cebdba31fd54955bff9cde2e224->m_frame.f_lineno = 161;
        tmp_assattr_name_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_copy);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_key_fn_by_scheme, tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_651b0cebdba31fd54955bff9cde2e224);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_651b0cebdba31fd54955bff9cde2e224);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_651b0cebdba31fd54955bff9cde2e224, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_651b0cebdba31fd54955bff9cde2e224->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_651b0cebdba31fd54955bff9cde2e224, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_651b0cebdba31fd54955bff9cde2e224,
        type_description_1,
        par_self,
        par_num_pools,
        par_headers,
        par_connection_pool_kw
    );


    // Release cached frame.
    if (frame_651b0cebdba31fd54955bff9cde2e224 == cache_frame_651b0cebdba31fd54955bff9cde2e224) {
        Py_DECREF(frame_651b0cebdba31fd54955bff9cde2e224);
    }
    cache_frame_651b0cebdba31fd54955bff9cde2e224 = NULL;

    assertFrameObject(frame_651b0cebdba31fd54955bff9cde2e224);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_2___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_connection_pool_kw);
    Py_DECREF(par_connection_pool_kw);
    CHECK_OBJECT(par_num_pools);
    Py_DECREF(par_num_pools);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_connection_pool_kw);
    Py_DECREF(par_connection_pool_kw);
    CHECK_OBJECT(par_num_pools);
    Py_DECREF(par_num_pools);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_2___init__$$$function_1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[0];
    struct Nuitka_FrameObject *frame_c4e203c1d2f51a0d543fa4ef36d77f94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c4e203c1d2f51a0d543fa4ef36d77f94 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_c4e203c1d2f51a0d543fa4ef36d77f94, codeobj_c4e203c1d2f51a0d543fa4ef36d77f94, module_urllib3$poolmanager, sizeof(void *));
    frame_c4e203c1d2f51a0d543fa4ef36d77f94 = cache_frame_c4e203c1d2f51a0d543fa4ef36d77f94;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c4e203c1d2f51a0d543fa4ef36d77f94);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c4e203c1d2f51a0d543fa4ef36d77f94) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_p);
        tmp_called_instance_1 = par_p;
        frame_c4e203c1d2f51a0d543fa4ef36d77f94->m_frame.f_lineno = 156;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_close);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c4e203c1d2f51a0d543fa4ef36d77f94);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c4e203c1d2f51a0d543fa4ef36d77f94);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c4e203c1d2f51a0d543fa4ef36d77f94);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c4e203c1d2f51a0d543fa4ef36d77f94, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c4e203c1d2f51a0d543fa4ef36d77f94->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c4e203c1d2f51a0d543fa4ef36d77f94, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c4e203c1d2f51a0d543fa4ef36d77f94,
        type_description_1,
        par_p
    );


    // Release cached frame.
    if (frame_c4e203c1d2f51a0d543fa4ef36d77f94 == cache_frame_c4e203c1d2f51a0d543fa4ef36d77f94) {
        Py_DECREF(frame_c4e203c1d2f51a0d543fa4ef36d77f94);
    }
    cache_frame_c4e203c1d2f51a0d543fa4ef36d77f94 = NULL;

    assertFrameObject(frame_c4e203c1d2f51a0d543fa4ef36d77f94);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_2___init__$$$function_1_lambda);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_3___enter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_3___enter__);
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


static PyObject *impl_urllib3$poolmanager$$$function_4___exit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_type = python_pars[1];
    PyObject *par_exc_val = python_pars[2];
    PyObject *par_exc_tb = python_pars[3];
    struct Nuitka_FrameObject *frame_35a23ccc8d8ae2d7d862304e0fc65130;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_35a23ccc8d8ae2d7d862304e0fc65130 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_35a23ccc8d8ae2d7d862304e0fc65130, codeobj_35a23ccc8d8ae2d7d862304e0fc65130, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_35a23ccc8d8ae2d7d862304e0fc65130 = cache_frame_35a23ccc8d8ae2d7d862304e0fc65130;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_35a23ccc8d8ae2d7d862304e0fc65130);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_35a23ccc8d8ae2d7d862304e0fc65130) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_35a23ccc8d8ae2d7d862304e0fc65130->m_frame.f_lineno = 167;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_clear);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35a23ccc8d8ae2d7d862304e0fc65130);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35a23ccc8d8ae2d7d862304e0fc65130);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_35a23ccc8d8ae2d7d862304e0fc65130, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_35a23ccc8d8ae2d7d862304e0fc65130->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35a23ccc8d8ae2d7d862304e0fc65130, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35a23ccc8d8ae2d7d862304e0fc65130,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_val,
        par_exc_tb
    );


    // Release cached frame.
    if (frame_35a23ccc8d8ae2d7d862304e0fc65130 == cache_frame_35a23ccc8d8ae2d7d862304e0fc65130) {
        Py_DECREF(frame_35a23ccc8d8ae2d7d862304e0fc65130);
    }
    cache_frame_35a23ccc8d8ae2d7d862304e0fc65130 = NULL;

    assertFrameObject(frame_35a23ccc8d8ae2d7d862304e0fc65130);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_4___exit__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_tb);
    Py_DECREF(par_exc_tb);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_val);
    Py_DECREF(par_exc_val);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_tb);
    Py_DECREF(par_exc_tb);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_val);
    Py_DECREF(par_exc_val);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_5__new_pool(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_scheme = python_pars[1];
    PyObject *par_host = python_pars[2];
    PyObject *par_port = python_pars[3];
    PyObject *par_request_context = python_pars[4];
    PyObject *var_pool_cls = NULL;
    PyObject *var_kw = NULL;
    PyObject *var_key = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_525fd67cda02bde607f65348f1bd8b90;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_525fd67cda02bde607f65348f1bd8b90 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_525fd67cda02bde607f65348f1bd8b90, codeobj_525fd67cda02bde607f65348f1bd8b90, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_525fd67cda02bde607f65348f1bd8b90 = cache_frame_525fd67cda02bde607f65348f1bd8b90;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_525fd67cda02bde607f65348f1bd8b90);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_525fd67cda02bde607f65348f1bd8b90) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_pool_classes_by_scheme);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_scheme);
        tmp_subscript_name_1 = par_scheme;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pool_cls == NULL);
        var_pool_cls = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_request_context);
        tmp_compexpr_left_1 = par_request_context;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_connection_pool_kw);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_525fd67cda02bde607f65348f1bd8b90->m_frame.f_lineno = 183;
            tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_copy);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_request_context;
                assert(old != NULL);
                par_request_context = tmp_assign_source_2;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        assert(!(tmp_assign_source_3 == NULL));
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
                type_description_1 = "oooooooo";
                exception_lineno = 189;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_5;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_request_context);
        tmp_called_instance_2 = par_request_context;
        CHECK_OBJECT(var_key);
        tmp_args_element_name_1 = var_key;
        tmp_args_element_name_2 = Py_None;
        frame_525fd67cda02bde607f65348f1bd8b90->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain_pop, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 189;
        type_description_1 = "oooooooo";
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_scheme);
        tmp_compexpr_left_2 = par_scheme;
        tmp_compexpr_right_2 = const_str_plain_http;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_SSL_KEYWORDS);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SSL_KEYWORDS);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 80239 ], 41, 0);
                exception_tb = NULL;

                exception_lineno = 193;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_2 = tmp_mvar_value_1;
            tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_for_loop_2__for_iterator == NULL);
            tmp_for_loop_2__for_iterator = tmp_assign_source_6;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_for_loop_2__for_iterator);
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_7 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooo";
                    exception_lineno = 193;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_for_loop_2__iter_value);
            tmp_assign_source_8 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_kw;
                var_kw = tmp_assign_source_8;
                Py_INCREF(var_kw);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT(par_request_context);
            tmp_called_instance_3 = par_request_context;
            CHECK_OBJECT(var_kw);
            tmp_args_element_name_3 = var_kw;
            tmp_args_element_name_4 = Py_None;
            frame_525fd67cda02bde607f65348f1bd8b90->m_frame.f_lineno = 194;
            {
                PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, const_str_plain_pop, call_args);
            }

            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            Py_DECREF(tmp_call_result_2);
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
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

        Py_XDECREF(tmp_for_loop_2__iter_value);
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
        Py_DECREF(tmp_for_loop_2__for_iterator);
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        Py_XDECREF(tmp_for_loop_2__iter_value);
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
        Py_DECREF(tmp_for_loop_2__for_iterator);
        tmp_for_loop_2__for_iterator = NULL;

        branch_no_2:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(var_pool_cls);
        tmp_dircall_arg1_1 = var_pool_cls;
        CHECK_OBJECT(par_host);
        tmp_tuple_element_1 = par_host;
        tmp_dircall_arg2_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_port);
        tmp_tuple_element_1 = par_port;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_request_context);
        tmp_dircall_arg3_1 = par_request_context;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_10_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_525fd67cda02bde607f65348f1bd8b90);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_525fd67cda02bde607f65348f1bd8b90);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_525fd67cda02bde607f65348f1bd8b90);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_525fd67cda02bde607f65348f1bd8b90, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_525fd67cda02bde607f65348f1bd8b90->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_525fd67cda02bde607f65348f1bd8b90, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_525fd67cda02bde607f65348f1bd8b90,
        type_description_1,
        par_self,
        par_scheme,
        par_host,
        par_port,
        par_request_context,
        var_pool_cls,
        var_kw,
        var_key
    );


    // Release cached frame.
    if (frame_525fd67cda02bde607f65348f1bd8b90 == cache_frame_525fd67cda02bde607f65348f1bd8b90) {
        Py_DECREF(frame_525fd67cda02bde607f65348f1bd8b90);
    }
    cache_frame_525fd67cda02bde607f65348f1bd8b90 = NULL;

    assertFrameObject(frame_525fd67cda02bde607f65348f1bd8b90);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_5__new_pool);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_pool_cls);
    Py_DECREF(var_pool_cls);
    var_pool_cls = NULL;

    Py_XDECREF(var_kw);
    var_kw = NULL;

    Py_XDECREF(var_key);
    var_key = NULL;

    CHECK_OBJECT((PyObject *)par_request_context);
    Py_DECREF(par_request_context);
    par_request_context = NULL;

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

    Py_XDECREF(var_pool_cls);
    var_pool_cls = NULL;

    Py_XDECREF(var_kw);
    var_kw = NULL;

    Py_XDECREF(var_key);
    var_key = NULL;

    Py_XDECREF(par_request_context);
    par_request_context = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_5__new_pool);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_6_clear(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1c6c4510ee8e572458eea343e08c961f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1c6c4510ee8e572458eea343e08c961f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_1c6c4510ee8e572458eea343e08c961f, codeobj_1c6c4510ee8e572458eea343e08c961f, module_urllib3$poolmanager, sizeof(void *));
    frame_1c6c4510ee8e572458eea343e08c961f = cache_frame_1c6c4510ee8e572458eea343e08c961f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1c6c4510ee8e572458eea343e08c961f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1c6c4510ee8e572458eea343e08c961f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_pools);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1c6c4510ee8e572458eea343e08c961f->m_frame.f_lineno = 205;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_clear);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c6c4510ee8e572458eea343e08c961f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c6c4510ee8e572458eea343e08c961f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c6c4510ee8e572458eea343e08c961f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1c6c4510ee8e572458eea343e08c961f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c6c4510ee8e572458eea343e08c961f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c6c4510ee8e572458eea343e08c961f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_1c6c4510ee8e572458eea343e08c961f == cache_frame_1c6c4510ee8e572458eea343e08c961f) {
        Py_DECREF(frame_1c6c4510ee8e572458eea343e08c961f);
    }
    cache_frame_1c6c4510ee8e572458eea343e08c961f = NULL;

    assertFrameObject(frame_1c6c4510ee8e572458eea343e08c961f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_6_clear);
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


static PyObject *impl_urllib3$poolmanager$$$function_7_connection_from_host(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_scheme = python_pars[3];
    PyObject *par_pool_kwargs = python_pars[4];
    PyObject *var_request_context = NULL;
    struct Nuitka_FrameObject *frame_345552b61447e903033ff56909a548eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_345552b61447e903033ff56909a548eb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_345552b61447e903033ff56909a548eb, codeobj_345552b61447e903033ff56909a548eb, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_345552b61447e903033ff56909a548eb = cache_frame_345552b61447e903033ff56909a548eb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_345552b61447e903033ff56909a548eb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_345552b61447e903033ff56909a548eb) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_host);
        tmp_operand_name_1 = par_host;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooo";
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_LocationValueError);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LocationValueError);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 66893 ], 47, 0);
                exception_tb = NULL;

                exception_lineno = 219;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_345552b61447e903033ff56909a548eb->m_frame.f_lineno = 219;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_1, &PyTuple_GET_ITEM(const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple, 0));

            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 219;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_pool_kwargs);
        tmp_args_element_name_1 = par_pool_kwargs;
        frame_345552b61447e903033ff56909a548eb->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__merge_pool_kwargs, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_request_context == NULL);
        var_request_context = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_scheme);
        tmp_or_left_value_1 = par_scheme;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = const_str_plain_http;
        tmp_ass_subvalue_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_ass_subvalue_1 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(var_request_context);
        tmp_ass_subscribed_1 = var_request_context;
        tmp_ass_subscript_1 = const_str_plain_scheme;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(par_port);
        tmp_operand_name_2 = par_port;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
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
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_port_by_scheme);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_port_by_scheme);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 77527 ], 43, 0);
                exception_tb = NULL;

                exception_lineno = 224;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_get);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_request_context);
            tmp_subscribed_name_1 = var_request_context;
            tmp_subscript_name_1 = const_str_plain_scheme;
            tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 224;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_345552b61447e903033ff56909a548eb->m_frame.f_lineno = 224;
            tmp_args_element_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_lower);
            Py_DECREF(tmp_called_instance_2);
            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 224;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = const_int_pos_80;
            frame_345552b61447e903033ff56909a548eb->m_frame.f_lineno = 224;
            {
                PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
            }

            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_port;
                assert(old != NULL);
                par_port = tmp_assign_source_2;
                Py_DECREF(old);
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_port);
        tmp_ass_subvalue_2 = par_port;
        CHECK_OBJECT(var_request_context);
        tmp_ass_subscribed_2 = var_request_context;
        tmp_ass_subscript_2 = const_str_plain_port;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(par_host);
        tmp_ass_subvalue_3 = par_host;
        CHECK_OBJECT(var_request_context);
        tmp_ass_subscribed_3 = var_request_context;
        tmp_ass_subscript_3 = const_str_plain_host;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_request_context);
        tmp_args_element_name_4 = var_request_context;
        frame_345552b61447e903033ff56909a548eb->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = {tmp_args_element_name_4};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_connection_from_context, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_345552b61447e903033ff56909a548eb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_345552b61447e903033ff56909a548eb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_345552b61447e903033ff56909a548eb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_345552b61447e903033ff56909a548eb, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_345552b61447e903033ff56909a548eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_345552b61447e903033ff56909a548eb, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_345552b61447e903033ff56909a548eb,
        type_description_1,
        par_self,
        par_host,
        par_port,
        par_scheme,
        par_pool_kwargs,
        var_request_context
    );


    // Release cached frame.
    if (frame_345552b61447e903033ff56909a548eb == cache_frame_345552b61447e903033ff56909a548eb) {
        Py_DECREF(frame_345552b61447e903033ff56909a548eb);
    }
    cache_frame_345552b61447e903033ff56909a548eb = NULL;

    assertFrameObject(frame_345552b61447e903033ff56909a548eb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_7_connection_from_host);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_request_context);
    Py_DECREF(var_request_context);
    var_request_context = NULL;

    CHECK_OBJECT((PyObject *)par_port);
    Py_DECREF(par_port);
    par_port = NULL;

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

    Py_XDECREF(var_request_context);
    var_request_context = NULL;

    Py_XDECREF(par_port);
    par_port = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_7_connection_from_host);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_pool_kwargs);
    Py_DECREF(par_pool_kwargs);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pool_kwargs);
    Py_DECREF(par_pool_kwargs);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_8_connection_from_context(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request_context = python_pars[1];
    PyObject *var_scheme = NULL;
    PyObject *var_pool_key = NULL;
    PyObject *var_pool_key_constructor = NULL;
    struct Nuitka_FrameObject *frame_ca57a9cd6d944a3bba26b77862278b58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ca57a9cd6d944a3bba26b77862278b58 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_ca57a9cd6d944a3bba26b77862278b58, codeobj_ca57a9cd6d944a3bba26b77862278b58, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_ca57a9cd6d944a3bba26b77862278b58 = cache_frame_ca57a9cd6d944a3bba26b77862278b58;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ca57a9cd6d944a3bba26b77862278b58);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ca57a9cd6d944a3bba26b77862278b58) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_request_context);
        tmp_subscribed_name_1 = par_request_context;
        tmp_subscript_name_1 = const_str_plain_scheme;
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ca57a9cd6d944a3bba26b77862278b58->m_frame.f_lineno = 237;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_lower);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_scheme == NULL);
        var_scheme = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_key_fn_by_scheme);
        if (tmp_subscribed_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_scheme);
        tmp_subscript_name_2 = var_scheme;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_subscribed_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pool_key_constructor == NULL);
        var_pool_key_constructor = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_pool_key_constructor);
        tmp_called_name_1 = var_pool_key_constructor;
        CHECK_OBJECT(par_request_context);
        tmp_args_element_name_1 = par_request_context;
        frame_ca57a9cd6d944a3bba26b77862278b58->m_frame.f_lineno = 239;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pool_key == NULL);
        var_pool_key = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_connection_from_pool_key);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pool_key);
        tmp_tuple_element_1 = var_pool_key;
        tmp_args_name_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_request_context);
        tmp_dict_value_1 = par_request_context;
        tmp_dict_key_1 = const_str_plain_request_context;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_ca57a9cd6d944a3bba26b77862278b58->m_frame.f_lineno = 241;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ca57a9cd6d944a3bba26b77862278b58);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ca57a9cd6d944a3bba26b77862278b58);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ca57a9cd6d944a3bba26b77862278b58);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ca57a9cd6d944a3bba26b77862278b58, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ca57a9cd6d944a3bba26b77862278b58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ca57a9cd6d944a3bba26b77862278b58, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ca57a9cd6d944a3bba26b77862278b58,
        type_description_1,
        par_self,
        par_request_context,
        var_scheme,
        var_pool_key,
        var_pool_key_constructor
    );


    // Release cached frame.
    if (frame_ca57a9cd6d944a3bba26b77862278b58 == cache_frame_ca57a9cd6d944a3bba26b77862278b58) {
        Py_DECREF(frame_ca57a9cd6d944a3bba26b77862278b58);
    }
    cache_frame_ca57a9cd6d944a3bba26b77862278b58 = NULL;

    assertFrameObject(frame_ca57a9cd6d944a3bba26b77862278b58);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_8_connection_from_context);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_scheme);
    Py_DECREF(var_scheme);
    var_scheme = NULL;

    CHECK_OBJECT((PyObject *)var_pool_key);
    Py_DECREF(var_pool_key);
    var_pool_key = NULL;

    CHECK_OBJECT((PyObject *)var_pool_key_constructor);
    Py_DECREF(var_pool_key_constructor);
    var_pool_key_constructor = NULL;

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

    Py_XDECREF(var_scheme);
    var_scheme = NULL;

    Py_XDECREF(var_pool_key);
    var_pool_key = NULL;

    Py_XDECREF(var_pool_key_constructor);
    var_pool_key_constructor = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_8_connection_from_context);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_request_context);
    Py_DECREF(par_request_context);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_request_context);
    Py_DECREF(par_request_context);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_9_connection_from_pool_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_pool_key = python_pars[1];
    PyObject *par_request_context = python_pars[2];
    PyObject *var_host = NULL;
    PyObject *var_scheme = NULL;
    PyObject *var_port = NULL;
    PyObject *var_pool = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_73be0345e77d6daca31ed36cf1f6627b;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_73be0345e77d6daca31ed36cf1f6627b = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_73be0345e77d6daca31ed36cf1f6627b, codeobj_73be0345e77d6daca31ed36cf1f6627b, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_73be0345e77d6daca31ed36cf1f6627b = cache_frame_73be0345e77d6daca31ed36cf1f6627b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_73be0345e77d6daca31ed36cf1f6627b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_73be0345e77d6daca31ed36cf1f6627b) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_pools);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_lock);
        Py_DECREF(tmp_source_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_source_name_3 = tmp_with_1__source;
        tmp_assign_source_2 = LOOKUP_SPECIAL(tmp_source_name_3, const_str_plain___exit__);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_source_name_4 = tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL(tmp_source_name_4, const_str_plain___enter__);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_73be0345e77d6daca31ed36cf1f6627b->m_frame.f_lineno = 251;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_pools);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_pool_key);
        tmp_args_element_name_1 = par_pool_key;
        frame_73be0345e77d6daca31ed36cf1f6627b->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(var_pool == NULL);
        var_pool = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_pool);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_pool);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT(var_pool);
        tmp_return_value = var_pool;
        Py_INCREF(tmp_return_value);
        goto try_return_handler_3;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_request_context);
        tmp_subscribed_name_1 = par_request_context;
        tmp_subscript_name_1 = const_str_plain_scheme;
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(var_scheme == NULL);
        var_scheme = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_request_context);
        tmp_subscribed_name_2 = par_request_context;
        tmp_subscript_name_2 = const_str_plain_host;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(var_host == NULL);
        var_host = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(par_request_context);
        tmp_subscribed_name_3 = par_request_context;
        tmp_subscript_name_3 = const_str_plain_port;
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(var_port == NULL);
        var_port = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__new_pool);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_scheme);
        tmp_tuple_element_1 = var_scheme;
        tmp_args_name_1 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_host);
        tmp_tuple_element_1 = var_host;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_port);
        tmp_tuple_element_1 = var_port;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_request_context);
        tmp_dict_value_1 = par_request_context;
        tmp_dict_key_1 = const_str_plain_request_context;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_73be0345e77d6daca31ed36cf1f6627b->m_frame.f_lineno = 262;
        tmp_assign_source_9 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_pool;
            assert(old != NULL);
            var_pool = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_pool);
        tmp_ass_subvalue_1 = var_pool;
        CHECK_OBJECT(par_self);
        tmp_source_name_7 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_pools);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_pool_key);
        tmp_ass_subscript_1 = par_pool_key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooo";
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_73be0345e77d6daca31ed36cf1f6627b);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_73be0345e77d6daca31ed36cf1f6627b, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_73be0345e77d6daca31ed36cf1f6627b, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            nuitka_bool tmp_assign_source_10;
            tmp_assign_source_10 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_10;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT(tmp_with_1__exit);
            tmp_called_name_3 = tmp_with_1__exit;
            tmp_args_element_name_2 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_3 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_4 = EXC_TRACEBACK(PyThreadState_GET());
            frame_73be0345e77d6daca31ed36cf1f6627b->m_frame.f_lineno = 263;
            {
                PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
            }

            if (tmp_operand_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            Py_DECREF(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 263;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_73be0345e77d6daca31ed36cf1f6627b->m_frame) frame_73be0345e77d6daca31ed36cf1f6627b->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 251;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_73be0345e77d6daca31ed36cf1f6627b->m_frame) frame_73be0345e77d6daca31ed36cf1f6627b->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
        branch_end_2:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_9_connection_from_pool_key);
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_3:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_4 = tmp_with_1__exit;
        frame_73be0345e77d6daca31ed36cf1f6627b->m_frame.f_lineno = 263;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, &PyTuple_GET_ITEM(const_tuple_none_none_none_tuple, 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_return_handler_2;
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

    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT(tmp_with_1__exit);
            tmp_called_name_5 = tmp_with_1__exit;
            frame_73be0345e77d6daca31ed36cf1f6627b->m_frame.f_lineno = 263;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_5, &PyTuple_GET_ITEM(const_tuple_none_none_none_tuple, 0));

            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_2);
                Py_XDECREF(exception_keeper_value_2);
                Py_XDECREF(exception_keeper_tb_2);

                exception_lineno = 263;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_2);
        }
        branch_no_4:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    {
        nuitka_bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT(tmp_with_1__exit);
            tmp_called_name_6 = tmp_with_1__exit;
            frame_73be0345e77d6daca31ed36cf1f6627b->m_frame.f_lineno = 263;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_6, &PyTuple_GET_ITEM(const_tuple_none_none_none_tuple, 0));

            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_3);
        }
        branch_no_5:;
    }
    goto try_end_3;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT((PyObject *)tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;

    CHECK_OBJECT((PyObject *)tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;

    CHECK_OBJECT((PyObject *)tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;

    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;

    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT((PyObject *)tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;

    CHECK_OBJECT((PyObject *)tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;

    CHECK_OBJECT((PyObject *)tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;

    if (var_pool == NULL) {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF(exception_type);
        exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "pool");
        exception_tb = NULL;

        exception_lineno = 265;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_pool;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_73be0345e77d6daca31ed36cf1f6627b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_73be0345e77d6daca31ed36cf1f6627b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_73be0345e77d6daca31ed36cf1f6627b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_73be0345e77d6daca31ed36cf1f6627b, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_73be0345e77d6daca31ed36cf1f6627b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_73be0345e77d6daca31ed36cf1f6627b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_73be0345e77d6daca31ed36cf1f6627b,
        type_description_1,
        par_self,
        par_pool_key,
        par_request_context,
        var_host,
        var_scheme,
        var_port,
        var_pool
    );


    // Release cached frame.
    if (frame_73be0345e77d6daca31ed36cf1f6627b == cache_frame_73be0345e77d6daca31ed36cf1f6627b) {
        Py_DECREF(frame_73be0345e77d6daca31ed36cf1f6627b);
    }
    cache_frame_73be0345e77d6daca31ed36cf1f6627b = NULL;

    assertFrameObject(frame_73be0345e77d6daca31ed36cf1f6627b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_9_connection_from_pool_key);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_host);
    var_host = NULL;

    Py_XDECREF(var_scheme);
    var_scheme = NULL;

    Py_XDECREF(var_port);
    var_port = NULL;

    Py_XDECREF(var_pool);
    var_pool = NULL;

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

    Py_XDECREF(var_host);
    var_host = NULL;

    Py_XDECREF(var_scheme);
    var_scheme = NULL;

    Py_XDECREF(var_port);
    var_port = NULL;

    Py_XDECREF(var_pool);
    var_pool = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_9_connection_from_pool_key);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_pool_key);
    Py_DECREF(par_pool_key);
    CHECK_OBJECT(par_request_context);
    Py_DECREF(par_request_context);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_pool_key);
    Py_DECREF(par_pool_key);
    CHECK_OBJECT(par_request_context);
    Py_DECREF(par_request_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_10_connection_from_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_pool_kwargs = python_pars[2];
    PyObject *var_u = NULL;
    struct Nuitka_FrameObject *frame_13594b33f705dbafd41fe006b8bbbffa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_13594b33f705dbafd41fe006b8bbbffa = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_13594b33f705dbafd41fe006b8bbbffa, codeobj_13594b33f705dbafd41fe006b8bbbffa, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_13594b33f705dbafd41fe006b8bbbffa = cache_frame_13594b33f705dbafd41fe006b8bbbffa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_13594b33f705dbafd41fe006b8bbbffa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_13594b33f705dbafd41fe006b8bbbffa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_parse_url);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 66725 ], 38, 0);
            exception_tb = NULL;

            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        frame_13594b33f705dbafd41fe006b8bbbffa->m_frame.f_lineno = 278;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_u == NULL);
        var_u = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_connection_from_host);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_u);
        tmp_source_name_2 = var_u;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_host);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_u);
        tmp_source_name_3 = var_u;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_port);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_port;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_u);
        tmp_source_name_4 = var_u;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_scheme);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_scheme;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_pool_kwargs);
        tmp_dict_value_3 = par_pool_kwargs;
        tmp_dict_key_3 = const_str_plain_pool_kwargs;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_13594b33f705dbafd41fe006b8bbbffa->m_frame.f_lineno = 279;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_13594b33f705dbafd41fe006b8bbbffa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_13594b33f705dbafd41fe006b8bbbffa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_13594b33f705dbafd41fe006b8bbbffa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_13594b33f705dbafd41fe006b8bbbffa, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_13594b33f705dbafd41fe006b8bbbffa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_13594b33f705dbafd41fe006b8bbbffa, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_13594b33f705dbafd41fe006b8bbbffa,
        type_description_1,
        par_self,
        par_url,
        par_pool_kwargs,
        var_u
    );


    // Release cached frame.
    if (frame_13594b33f705dbafd41fe006b8bbbffa == cache_frame_13594b33f705dbafd41fe006b8bbbffa) {
        Py_DECREF(frame_13594b33f705dbafd41fe006b8bbbffa);
    }
    cache_frame_13594b33f705dbafd41fe006b8bbbffa = NULL;

    assertFrameObject(frame_13594b33f705dbafd41fe006b8bbbffa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_10_connection_from_url);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_u);
    Py_DECREF(var_u);
    var_u = NULL;

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

    Py_XDECREF(var_u);
    var_u = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_10_connection_from_url);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_pool_kwargs);
    Py_DECREF(par_pool_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_pool_kwargs);
    Py_DECREF(par_pool_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_11__merge_pool_kwargs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_override = python_pars[1];
    PyObject *var_value = NULL;
    PyObject *var_base_pool_kwargs = NULL;
    PyObject *var_key = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_20a0f5a52b5372bc19401da265256b17;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_20a0f5a52b5372bc19401da265256b17 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_20a0f5a52b5372bc19401da265256b17, codeobj_20a0f5a52b5372bc19401da265256b17, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_20a0f5a52b5372bc19401da265256b17 = cache_frame_20a0f5a52b5372bc19401da265256b17;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_20a0f5a52b5372bc19401da265256b17);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_20a0f5a52b5372bc19401da265256b17) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_connection_pool_kw);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_20a0f5a52b5372bc19401da265256b17->m_frame.f_lineno = 290;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_copy);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_base_pool_kwargs == NULL);
        var_base_pool_kwargs = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_override);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_override);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT(par_override);
            tmp_called_instance_2 = par_override;
            frame_20a0f5a52b5372bc19401da265256b17->m_frame.f_lineno = 292;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_items);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_1 = "ooooo";
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
                    type_description_1 = "ooooo";
                    exception_lineno = 292;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_for_loop_1__iter_value);
            tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__source_iter;
                tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0);
            if (tmp_assign_source_5 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooo";
                exception_lineno = 292;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_1;
                tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1);
            if (tmp_assign_source_6 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooo";
                exception_lineno = 292;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_2;
                tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                        type_description_1 = "ooooo";
                        exception_lineno = 292;
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

                type_description_1 = "ooooo";
                exception_lineno = 292;
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
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
            tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = var_key;
                var_key = tmp_assign_source_7;
                Py_INCREF(var_key);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_tuple_unpack_1__element_1);
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
            tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
            {
                PyObject *old = var_value;
                var_value = tmp_assign_source_8;
                Py_INCREF(var_value);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_tuple_unpack_1__element_2);
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(var_value);
            tmp_compexpr_left_1 = var_value;
            tmp_compexpr_right_1 = Py_None;
            tmp_condition_result_2 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            // Tried code:
            {
                PyObject *tmp_delsubscr_target_1;
                PyObject *tmp_delsubscr_subscript_1;
                CHECK_OBJECT(var_base_pool_kwargs);
                tmp_delsubscr_target_1 = var_base_pool_kwargs;
                CHECK_OBJECT(var_key);
                tmp_delsubscr_subscript_1 = var_key;
                tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;
                    type_description_1 = "ooooo";
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

            // Preserve existing published exception.
            PRESERVE_FRAME_EXCEPTION(frame_20a0f5a52b5372bc19401da265256b17);
            if (exception_keeper_tb_3 == NULL) {
                exception_keeper_tb_3 = MAKE_TRACEBACK(frame_20a0f5a52b5372bc19401da265256b17, exception_keeper_lineno_3);
            } else if (exception_keeper_lineno_3 != 0) {
                exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_20a0f5a52b5372bc19401da265256b17, exception_keeper_lineno_3);
            }

            NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
            PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_2 = PyExc_KeyError;
                tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
                tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_3;
                } else {
                    goto branch_no_3;
                }
                branch_yes_3:;
                tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                if (unlikely(tmp_result == false)) {
                    exception_lineno = 294;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_20a0f5a52b5372bc19401da265256b17->m_frame) frame_20a0f5a52b5372bc19401da265256b17->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
                branch_no_3:;
            }
            goto try_end_3;
            // exception handler codes exits in all cases
            NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_11__merge_pool_kwargs);
            return NULL;
            // End of try:
            try_end_3:;
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                CHECK_OBJECT(var_value);
                tmp_ass_subvalue_1 = var_value;
                CHECK_OBJECT(var_base_pool_kwargs);
                tmp_ass_subscribed_1 = var_base_pool_kwargs;
                CHECK_OBJECT(var_key);
                tmp_ass_subscript_1 = var_key;
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 299;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
            }
            branch_end_2:;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
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
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        Py_XDECREF(tmp_for_loop_1__iter_value);
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
        Py_DECREF(tmp_for_loop_1__for_iterator);
        tmp_for_loop_1__for_iterator = NULL;

        branch_no_1:;
    }

#if 1
    RESTORE_FRAME_EXCEPTION(frame_20a0f5a52b5372bc19401da265256b17);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_20a0f5a52b5372bc19401da265256b17);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_20a0f5a52b5372bc19401da265256b17, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_20a0f5a52b5372bc19401da265256b17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_20a0f5a52b5372bc19401da265256b17, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_20a0f5a52b5372bc19401da265256b17,
        type_description_1,
        par_self,
        par_override,
        var_value,
        var_base_pool_kwargs,
        var_key
    );


    // Release cached frame.
    if (frame_20a0f5a52b5372bc19401da265256b17 == cache_frame_20a0f5a52b5372bc19401da265256b17) {
        Py_DECREF(frame_20a0f5a52b5372bc19401da265256b17);
    }
    cache_frame_20a0f5a52b5372bc19401da265256b17 = NULL;

    assertFrameObject(frame_20a0f5a52b5372bc19401da265256b17);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_base_pool_kwargs);
    tmp_return_value = var_base_pool_kwargs;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_11__merge_pool_kwargs);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_value);
    var_value = NULL;

    CHECK_OBJECT((PyObject *)var_base_pool_kwargs);
    Py_DECREF(var_base_pool_kwargs);
    var_base_pool_kwargs = NULL;

    Py_XDECREF(var_key);
    var_key = NULL;

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

    Py_XDECREF(var_value);
    var_value = NULL;

    Py_XDECREF(var_base_pool_kwargs);
    var_base_pool_kwargs = NULL;

    Py_XDECREF(var_key);
    var_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_11__merge_pool_kwargs);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_override);
    Py_DECREF(par_override);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_override);
    Py_DECREF(par_override);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_12_urlopen(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_url = python_pars[2];
    PyObject *par_redirect = python_pars[3];
    PyObject *par_kw = python_pars[4];
    PyObject *var_retries = NULL;
    PyObject *var_response = NULL;
    PyObject *var_header = NULL;
    PyObject *var_redirect_location = NULL;
    PyObject *var_u = NULL;
    PyObject *var_conn = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_26a194e280b24da7fdb9a4fbdf4f2315;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_26a194e280b24da7fdb9a4fbdf4f2315 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_26a194e280b24da7fdb9a4fbdf4f2315, codeobj_26a194e280b24da7fdb9a4fbdf4f2315, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_26a194e280b24da7fdb9a4fbdf4f2315 = cache_frame_26a194e280b24da7fdb9a4fbdf4f2315;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_26a194e280b24da7fdb9a4fbdf4f2315);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_26a194e280b24da7fdb9a4fbdf4f2315) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_parse_url);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 66725 ], 38, 0);
            exception_tb = NULL;

            exception_lineno = 311;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame.f_lineno = 311;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_u == NULL);
        var_u = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_connection_from_host);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_u);
        tmp_source_name_2 = var_u;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_host);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 312;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_u);
        tmp_source_name_3 = var_u;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_port);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 312;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_port;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_u);
        tmp_source_name_4 = var_u;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_scheme);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 312;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_scheme;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame.f_lineno = 312;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_conn == NULL);
        var_conn = tmp_assign_source_2;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = Py_False;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_1 = par_kw;
        tmp_ass_subscript_1 = const_str_plain_assert_same_host;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = Py_False;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_2 = par_kw;
        tmp_ass_subscript_2 = const_str_plain_redirect;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_str_plain_headers;
        CHECK_OBJECT(par_kw);
        tmp_compexpr_right_1 = par_kw;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_headers);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame.f_lineno = 318;
            tmp_ass_subvalue_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_copy);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_ass_subvalue_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_kw);
            tmp_ass_subscribed_3 = par_kw;
            tmp_ass_subscript_3 = const_str_plain_headers;
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_proxy);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_2);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_u);
        tmp_source_name_7 = var_u;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_scheme);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_str_plain_http;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_1;
            CHECK_OBJECT(var_conn);
            tmp_source_name_8 = var_conn;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_urlopen);
            if (tmp_dircall_arg1_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_method);
            tmp_tuple_element_2 = par_method;
            tmp_dircall_arg2_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_url);
            tmp_tuple_element_2 = par_url;
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_2);
            CHECK_OBJECT(par_kw);
            tmp_dircall_arg3_1 = par_kw;
            Py_INCREF(tmp_dircall_arg3_1);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_assign_source_3 = impl___internal__$$$function_10_complex_call_helper_pos_star_dict(dir_call_args);
            }
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_response == NULL);
            var_response = tmp_assign_source_3;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_dircall_arg1_2;
            PyObject *tmp_source_name_9;
            PyObject *tmp_dircall_arg2_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_source_name_10;
            PyObject *tmp_dircall_arg3_2;
            CHECK_OBJECT(var_conn);
            tmp_source_name_9 = var_conn;
            tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_urlopen);
            if (tmp_dircall_arg1_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_method);
            tmp_tuple_element_3 = par_method;
            tmp_dircall_arg2_2 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_dircall_arg2_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_u);
            tmp_source_name_10 = var_u;
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_request_uri);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dircall_arg1_2);
                Py_DECREF(tmp_dircall_arg2_2);

                exception_lineno = 323;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_2, 1, tmp_tuple_element_3);
            CHECK_OBJECT(par_kw);
            tmp_dircall_arg3_2 = par_kw;
            Py_INCREF(tmp_dircall_arg3_2);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
                tmp_assign_source_4 = impl___internal__$$$function_10_complex_call_helper_pos_star_dict(dir_call_args);
            }
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_response == NULL);
            var_response = tmp_assign_source_4;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_5;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_redirect);
        tmp_and_left_value_2 = par_redirect;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_response);
        tmp_called_instance_2 = var_response;
        frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame.f_lineno = 325;
        tmp_and_right_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_get_redirect_location);
        if (tmp_and_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        Py_INCREF(tmp_and_left_value_2);
        tmp_assign_source_5 = tmp_and_left_value_2;
        and_end_2:;
        assert(var_redirect_location == NULL);
        var_redirect_location = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_redirect_location);
        tmp_operand_name_1 = var_redirect_location;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        CHECK_OBJECT(var_response);
        tmp_return_value = var_response;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_urljoin);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_urljoin);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 55415 ], 36, 0);
            exception_tb = NULL;

            exception_lineno = 330;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_2 = par_url;
        CHECK_OBJECT(var_redirect_location);
        tmp_args_element_name_3 = var_redirect_location;
        frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame.f_lineno = 330;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_redirect_location;
            assert(old != NULL);
            var_redirect_location = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT(var_response);
        tmp_source_name_11 = var_response;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_status);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_int_pos_303;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_str_plain_GET;
            {
                PyObject *old = par_method;
                assert(old != NULL);
                par_method = tmp_assign_source_7;
                Py_INCREF(par_method);
                Py_DECREF(old);
            }

        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_kw);
        tmp_called_instance_3 = par_kw;
        frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame.f_lineno = 336;
        tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_retries_tuple, 0));

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_retries == NULL);
        var_retries = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT(var_retries);
        tmp_isinstance_inst_1 = var_retries;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_Retry);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 66092 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 337;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_3;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_Retry);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 66092 ], 34, 0);
                exception_tb = NULL;

                exception_lineno = 338;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = tmp_mvar_value_4;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_from_int);
            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_retries);
            tmp_tuple_element_4 = var_retries;
            tmp_args_name_2 = PyTuple_New(1);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(par_redirect);
            tmp_dict_value_3 = par_redirect;
            tmp_dict_key_3 = const_str_plain_redirect;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame.f_lineno = 338;
            tmp_assign_source_9 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_name_2);
            Py_DECREF(tmp_kw_name_2);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_retries;
                assert(old != NULL);
                var_retries = tmp_assign_source_9;
                Py_DECREF(old);
            }

        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_source_name_13;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_retries);
        tmp_source_name_13 = var_retries;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_remove_headers_on_redirect);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 343;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_conn);
        tmp_called_instance_4 = var_conn;
        CHECK_OBJECT(var_redirect_location);
        tmp_args_element_name_4 = var_redirect_location;
        frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame.f_lineno = 344;
        {
            PyObject *call_args[] = {tmp_args_element_name_4};
            tmp_operand_name_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_is_same_host, call_args);
        }

        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_6 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_source_name_14;
            CHECK_OBJECT(var_retries);
            tmp_source_name_14 = var_retries;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_remove_headers_on_redirect);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_for_loop_1__for_iterator == NULL);
            tmp_for_loop_1__for_iterator = tmp_assign_source_10;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_for_loop_1__for_iterator);
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_11 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooo";
                    exception_lineno = 345;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_for_loop_1__iter_value);
            tmp_assign_source_12 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_header;
                var_header = tmp_assign_source_12;
                Py_INCREF(var_header);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT(par_kw);
            tmp_subscribed_name_1 = par_kw;
            tmp_subscript_name_1 = const_str_plain_headers;
            tmp_called_instance_5 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_header);
            tmp_args_element_name_5 = var_header;
            tmp_args_element_name_6 = Py_None;
            frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame.f_lineno = 346;
            {
                PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_5, const_str_plain_pop, call_args);
            }

            Py_DECREF(tmp_called_instance_5);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_1);
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooooo";
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

        branch_no_6:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_15;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        CHECK_OBJECT(var_retries);
        tmp_source_name_15 = var_retries;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_increment);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_method);
        tmp_tuple_element_5 = par_method;
        tmp_args_name_3 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(par_url);
        tmp_tuple_element_5 = par_url;
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(var_response);
        tmp_dict_value_4 = var_response;
        tmp_dict_key_4 = const_str_plain_response;
        tmp_kw_name_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_conn);
        tmp_dict_value_5 = var_conn;
        tmp_dict_key_5 = const_str_plain__pool;
        tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame.f_lineno = 349;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_retries;
            assert(old != NULL);
            var_retries = tmp_assign_source_13;
            Py_DECREF(old);
        }

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
    PRESERVE_FRAME_EXCEPTION(frame_26a194e280b24da7fdb9a4fbdf4f2315);
    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_26a194e280b24da7fdb9a4fbdf4f2315, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_26a194e280b24da7fdb9a4fbdf4f2315, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_mvar_value_5;
        tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_MaxRetryError);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MaxRetryError);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 67116 ], 42, 0);
            exception_tb = NULL;

            exception_lineno = 350;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_5 = tmp_mvar_value_5;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooooooooooo";
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
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_source_name_16;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_2;
            CHECK_OBJECT(var_retries);
            tmp_source_name_16 = var_retries;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_raise_on_redirect);
            if (tmp_attribute_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_attribute_value_2);

                exception_lineno = 351;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_attribute_value_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            branch_yes_8:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 352;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame) frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
            branch_no_8:;
        }
        CHECK_OBJECT(var_response);
        tmp_return_value = var_response;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        goto branch_end_7;
        branch_no_7:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 348;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame) frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
        branch_end_7:;
    }
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(var_retries);
        tmp_ass_subvalue_4 = var_retries;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_4 = par_kw;
        tmp_ass_subscript_4 = const_str_plain_retries;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        CHECK_OBJECT(par_redirect);
        tmp_ass_subvalue_5 = par_redirect;
        CHECK_OBJECT(par_kw);
        tmp_ass_subscribed_5 = par_kw;
        tmp_ass_subscript_5 = const_str_plain_redirect;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_log);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_log);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 76739 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 358;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_6;
        tmp_args_element_name_7 = const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_8 = par_url;
        CHECK_OBJECT(var_redirect_location);
        tmp_args_element_name_9 = var_redirect_location;
        frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_6, const_str_plain_info, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_source_name_17;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_dircall_arg3_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_17 = par_self;
        tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_urlopen);
        if (tmp_dircall_arg1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_method);
        tmp_tuple_element_6 = par_method;
        tmp_dircall_arg2_3 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_6);
        PyTuple_SET_ITEM(tmp_dircall_arg2_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(var_redirect_location);
        tmp_tuple_element_6 = var_redirect_location;
        Py_INCREF(tmp_tuple_element_6);
        PyTuple_SET_ITEM(tmp_dircall_arg2_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_3 = par_kw;
        Py_INCREF(tmp_dircall_arg3_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
            tmp_return_value = impl___internal__$$$function_10_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION(frame_26a194e280b24da7fdb9a4fbdf4f2315);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_26a194e280b24da7fdb9a4fbdf4f2315);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_26a194e280b24da7fdb9a4fbdf4f2315);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_26a194e280b24da7fdb9a4fbdf4f2315, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_26a194e280b24da7fdb9a4fbdf4f2315->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_26a194e280b24da7fdb9a4fbdf4f2315, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_26a194e280b24da7fdb9a4fbdf4f2315,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_redirect,
        par_kw,
        var_retries,
        var_response,
        var_header,
        var_redirect_location,
        var_u,
        var_conn
    );


    // Release cached frame.
    if (frame_26a194e280b24da7fdb9a4fbdf4f2315 == cache_frame_26a194e280b24da7fdb9a4fbdf4f2315) {
        Py_DECREF(frame_26a194e280b24da7fdb9a4fbdf4f2315);
    }
    cache_frame_26a194e280b24da7fdb9a4fbdf4f2315 = NULL;

    assertFrameObject(frame_26a194e280b24da7fdb9a4fbdf4f2315);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_12_urlopen);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_retries);
    var_retries = NULL;

    CHECK_OBJECT((PyObject *)var_response);
    Py_DECREF(var_response);
    var_response = NULL;

    Py_XDECREF(var_header);
    var_header = NULL;

    CHECK_OBJECT((PyObject *)var_redirect_location);
    Py_DECREF(var_redirect_location);
    var_redirect_location = NULL;

    CHECK_OBJECT((PyObject *)var_u);
    Py_DECREF(var_u);
    var_u = NULL;

    Py_XDECREF(par_method);
    par_method = NULL;

    CHECK_OBJECT((PyObject *)var_conn);
    Py_DECREF(var_conn);
    var_conn = NULL;

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

    Py_XDECREF(var_retries);
    var_retries = NULL;

    Py_XDECREF(var_response);
    var_response = NULL;

    Py_XDECREF(var_header);
    var_header = NULL;

    Py_XDECREF(var_redirect_location);
    var_redirect_location = NULL;

    Py_XDECREF(var_u);
    var_u = NULL;

    Py_XDECREF(par_method);
    par_method = NULL;

    Py_XDECREF(var_conn);
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_12_urlopen);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_redirect);
    Py_DECREF(par_redirect);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_redirect);
    Py_DECREF(par_redirect);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_13___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_proxy_url = python_pars[1];
    PyObject *par_num_pools = python_pars[2];
    PyObject *par_headers = python_pars[3];
    PyObject *par_proxy_headers = python_pars[4];
    PyObject *par_connection_pool_kw = python_pars[5];
    PyObject *var_proxy = NULL;
    PyObject *var_port = NULL;
    struct Nuitka_FrameObject *frame_9cfcb39782abd89081f451a1b8ae2e1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9cfcb39782abd89081f451a1b8ae2e1f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_9cfcb39782abd89081f451a1b8ae2e1f, codeobj_9cfcb39782abd89081f451a1b8ae2e1f, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_9cfcb39782abd89081f451a1b8ae2e1f = cache_frame_9cfcb39782abd89081f451a1b8ae2e1f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9cfcb39782abd89081f451a1b8ae2e1f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9cfcb39782abd89081f451a1b8ae2e1f) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_proxy_url);
        tmp_isinstance_inst_1 = par_proxy_url;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 77702 ], 47, 0);
            exception_tb = NULL;

            exception_lineno = 392;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            tmp_left_name_1 = const_str_digest_b65382343add153bfe7a0e41b1f6dadd;
            CHECK_OBJECT(par_proxy_url);
            tmp_source_name_1 = par_proxy_url;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_scheme);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = PyTuple_New(3);
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_proxy_url);
            tmp_source_name_2 = par_proxy_url;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_host);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_right_name_1);

                exception_lineno = 393;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_proxy_url);
            tmp_source_name_3 = par_proxy_url;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_port);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_right_name_1);

                exception_lineno = 394;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 2, tmp_tuple_element_1);
            tmp_assign_source_1 = BINARY_OPERATION_MOD_STR_TUPLE(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_proxy_url;
                assert(old != NULL);
                par_proxy_url = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_parse_url);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 66725 ], 38, 0);
            exception_tb = NULL;

            exception_lineno = 395;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT(par_proxy_url);
        tmp_args_element_name_1 = par_proxy_url;
        frame_9cfcb39782abd89081f451a1b8ae2e1f->m_frame.f_lineno = 395;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_proxy == NULL);
        var_proxy = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT(var_proxy);
        tmp_source_name_4 = var_proxy;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_port);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_port_by_scheme);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_port_by_scheme);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 77527 ], 43, 0);
                exception_tb = NULL;

                exception_lineno = 397;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_get);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 397;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_proxy);
            tmp_source_name_6 = var_proxy;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_scheme);
            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 397;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = const_int_pos_80;
            frame_9cfcb39782abd89081f451a1b8ae2e1f->m_frame.f_lineno = 397;
            {
                PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
            }

            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 397;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_port == NULL);
            var_port = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            CHECK_OBJECT(var_proxy);
            tmp_source_name_7 = var_proxy;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__replace);
            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_port);
            tmp_dict_value_1 = var_port;
            tmp_dict_key_1 = const_str_plain_port;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            frame_9cfcb39782abd89081f451a1b8ae2e1f->m_frame.f_lineno = 398;
            tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_3, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_proxy;
                assert(old != NULL);
                var_proxy = tmp_assign_source_4;
                Py_DECREF(old);
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT(var_proxy);
        tmp_source_name_8 = var_proxy;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_scheme);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_str_plain_http_str_plain_https_tuple;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_9;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 79478 ], 47, 0);
                exception_tb = NULL;

                exception_lineno = 401;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            CHECK_OBJECT(var_proxy);
            tmp_source_name_9 = var_proxy;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_scheme);
            if (tmp_args_element_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 401;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_9cfcb39782abd89081f451a1b8ae2e1f->m_frame.f_lineno = 401;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 401;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 401;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_proxy);
        tmp_assattr_name_1 = var_proxy;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_proxy, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_proxy_headers);
        tmp_or_left_value_1 = par_proxy_headers;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = PyDict_New();
        tmp_assattr_name_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assattr_name_2 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_proxy_headers, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_source_name_10;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_10 = par_self;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_proxy);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_connection_pool_kw);
        tmp_ass_subscribed_1 = par_connection_pool_kw;
        tmp_ass_subscript_1 = const_str_plain__proxy;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_source_name_11;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_11 = par_self;
        tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_proxy_headers);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_connection_pool_kw);
        tmp_ass_subscribed_2 = par_connection_pool_kw;
        tmp_ass_subscript_2 = const_str_plain__proxy_headers;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_12;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxyManager);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyManager);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 80280 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 409;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_5;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_source_name_12 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_source_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain___init__);
        Py_DECREF(tmp_source_name_12);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_num_pools);
        tmp_tuple_element_2 = par_num_pools;
        tmp_dircall_arg2_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_headers);
        tmp_tuple_element_2 = par_headers;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_connection_pool_kw);
        tmp_dircall_arg3_1 = par_connection_pool_kw;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_10_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9cfcb39782abd89081f451a1b8ae2e1f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9cfcb39782abd89081f451a1b8ae2e1f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9cfcb39782abd89081f451a1b8ae2e1f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_9cfcb39782abd89081f451a1b8ae2e1f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9cfcb39782abd89081f451a1b8ae2e1f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9cfcb39782abd89081f451a1b8ae2e1f,
        type_description_1,
        par_self,
        par_proxy_url,
        par_num_pools,
        par_headers,
        par_proxy_headers,
        par_connection_pool_kw,
        var_proxy,
        var_port
    );


    // Release cached frame.
    if (frame_9cfcb39782abd89081f451a1b8ae2e1f == cache_frame_9cfcb39782abd89081f451a1b8ae2e1f) {
        Py_DECREF(frame_9cfcb39782abd89081f451a1b8ae2e1f);
    }
    cache_frame_9cfcb39782abd89081f451a1b8ae2e1f = NULL;

    assertFrameObject(frame_9cfcb39782abd89081f451a1b8ae2e1f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_13___init__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_proxy_url);
    Py_DECREF(par_proxy_url);
    par_proxy_url = NULL;

    CHECK_OBJECT((PyObject *)var_proxy);
    Py_DECREF(var_proxy);
    var_proxy = NULL;

    Py_XDECREF(var_port);
    var_port = NULL;

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

    Py_XDECREF(par_proxy_url);
    par_proxy_url = NULL;

    Py_XDECREF(var_proxy);
    var_proxy = NULL;

    Py_XDECREF(var_port);
    var_port = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_13___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_connection_pool_kw);
    Py_DECREF(par_connection_pool_kw);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_num_pools);
    Py_DECREF(par_num_pools);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_connection_pool_kw);
    Py_DECREF(par_connection_pool_kw);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_num_pools);
    Py_DECREF(par_num_pools);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_14_connection_from_host(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_scheme = python_pars[3];
    PyObject *par_pool_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_d58f4757f515865683669840addb5cf6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d58f4757f515865683669840addb5cf6 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_d58f4757f515865683669840addb5cf6, codeobj_d58f4757f515865683669840addb5cf6, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_d58f4757f515865683669840addb5cf6 = cache_frame_d58f4757f515865683669840addb5cf6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d58f4757f515865683669840addb5cf6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d58f4757f515865683669840addb5cf6) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_scheme);
        tmp_compexpr_left_1 = par_scheme;
        tmp_compexpr_right_1 = const_str_plain_https;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ooooo";
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
            PyObject *tmp_source_name_1;
            PyObject *tmp_type_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_object_name_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxyManager);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyManager);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 80280 ], 41, 0);
                exception_tb = NULL;

                exception_lineno = 414;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_type_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT(par_self);
            tmp_object_name_1 = par_self;
            tmp_source_name_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
            if (tmp_source_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_connection_from_host);
            Py_DECREF(tmp_source_name_1);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_host);
            tmp_tuple_element_1 = par_host;
            tmp_args_name_1 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_port);
            tmp_tuple_element_1 = par_port;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_scheme);
            tmp_tuple_element_1 = par_scheme;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_pool_kwargs);
            tmp_dict_value_1 = par_pool_kwargs;
            tmp_dict_key_1 = const_str_plain_pool_kwargs;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            frame_d58f4757f515865683669840addb5cf6->m_frame.f_lineno = 414;
            tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_type_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_object_name_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxyManager);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyManager);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 80280 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 417;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_self);
        tmp_object_name_2 = par_self;
        tmp_source_name_2 = BUILTIN_SUPER(tmp_type_name_2, tmp_object_name_2);
        if (tmp_source_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_connection_from_host);
        Py_DECREF(tmp_source_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_proxy);
        if (tmp_source_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 418;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_host);
        Py_DECREF(tmp_source_name_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 418;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_proxy);
        if (tmp_source_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_2);

            exception_lineno = 418;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_port);
        Py_DECREF(tmp_source_name_5);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_2);

            exception_lineno = 418;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_self);
        tmp_source_name_8 = par_self;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_proxy);
        if (tmp_source_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_2);

            exception_lineno = 418;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_scheme);
        Py_DECREF(tmp_source_name_7);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_2);

            exception_lineno = 418;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_2);
        CHECK_OBJECT(par_pool_kwargs);
        tmp_dict_value_2 = par_pool_kwargs;
        tmp_dict_key_2 = const_str_plain_pool_kwargs;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_d58f4757f515865683669840addb5cf6->m_frame.f_lineno = 417;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d58f4757f515865683669840addb5cf6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d58f4757f515865683669840addb5cf6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d58f4757f515865683669840addb5cf6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d58f4757f515865683669840addb5cf6, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_d58f4757f515865683669840addb5cf6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d58f4757f515865683669840addb5cf6, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d58f4757f515865683669840addb5cf6,
        type_description_1,
        par_self,
        par_host,
        par_port,
        par_scheme,
        par_pool_kwargs
    );


    // Release cached frame.
    if (frame_d58f4757f515865683669840addb5cf6 == cache_frame_d58f4757f515865683669840addb5cf6) {
        Py_DECREF(frame_d58f4757f515865683669840addb5cf6);
    }
    cache_frame_d58f4757f515865683669840addb5cf6 = NULL;

    assertFrameObject(frame_d58f4757f515865683669840addb5cf6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_14_connection_from_host);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_pool_kwargs);
    Py_DECREF(par_pool_kwargs);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_scheme);
    Py_DECREF(par_scheme);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_pool_kwargs);
    Py_DECREF(par_pool_kwargs);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_15__set_proxy_headers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_headers = python_pars[2];
    PyObject *var_netloc = NULL;
    PyObject *var_headers_ = NULL;
    struct Nuitka_FrameObject *frame_f2479b456d6bcc5c4c0e30ebf284a70c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f2479b456d6bcc5c4c0e30ebf284a70c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_Copy(const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce);
        assert(var_headers_ == NULL);
        var_headers_ = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_f2479b456d6bcc5c4c0e30ebf284a70c, codeobj_f2479b456d6bcc5c4c0e30ebf284a70c, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_f2479b456d6bcc5c4c0e30ebf284a70c = cache_frame_f2479b456d6bcc5c4c0e30ebf284a70c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f2479b456d6bcc5c4c0e30ebf284a70c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f2479b456d6bcc5c4c0e30ebf284a70c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_parse_url);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 66725 ], 38, 0);
            exception_tb = NULL;

            exception_lineno = 427;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        frame_f2479b456d6bcc5c4c0e30ebf284a70c->m_frame.f_lineno = 427;
        tmp_source_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_netloc);
        Py_DECREF(tmp_source_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_netloc == NULL);
        var_netloc = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_netloc);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_netloc);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT(var_netloc);
        tmp_dictset_value = var_netloc;
        CHECK_OBJECT(var_headers_);
        tmp_dictset_dict = var_headers_;
        tmp_dictset_key = const_str_plain_Host;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        assert(!(tmp_res != 0));
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_headers);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_headers);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT(var_headers_);
            tmp_called_instance_1 = var_headers_;
            CHECK_OBJECT(par_headers);
            tmp_args_element_name_2 = par_headers;
            frame_f2479b456d6bcc5c4c0e30ebf284a70c->m_frame.f_lineno = 432;
            {
                PyObject *call_args[] = {tmp_args_element_name_2};
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_update, call_args);
            }

            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f2479b456d6bcc5c4c0e30ebf284a70c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f2479b456d6bcc5c4c0e30ebf284a70c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f2479b456d6bcc5c4c0e30ebf284a70c, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_f2479b456d6bcc5c4c0e30ebf284a70c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f2479b456d6bcc5c4c0e30ebf284a70c, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f2479b456d6bcc5c4c0e30ebf284a70c,
        type_description_1,
        par_self,
        par_url,
        par_headers,
        var_netloc,
        var_headers_
    );


    // Release cached frame.
    if (frame_f2479b456d6bcc5c4c0e30ebf284a70c == cache_frame_f2479b456d6bcc5c4c0e30ebf284a70c) {
        Py_DECREF(frame_f2479b456d6bcc5c4c0e30ebf284a70c);
    }
    cache_frame_f2479b456d6bcc5c4c0e30ebf284a70c = NULL;

    assertFrameObject(frame_f2479b456d6bcc5c4c0e30ebf284a70c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_headers_);
    tmp_return_value = var_headers_;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_15__set_proxy_headers);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_netloc);
    Py_DECREF(var_netloc);
    var_netloc = NULL;

    CHECK_OBJECT((PyObject *)var_headers_);
    Py_DECREF(var_headers_);
    var_headers_ = NULL;

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

    Py_XDECREF(var_netloc);
    var_netloc = NULL;

    CHECK_OBJECT((PyObject *)var_headers_);
    Py_DECREF(var_headers_);
    var_headers_ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_15__set_proxy_headers);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_16_urlopen(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_url = python_pars[2];
    PyObject *par_redirect = python_pars[3];
    PyObject *par_kw = python_pars[4];
    PyObject *var_headers = NULL;
    PyObject *var_u = NULL;
    struct Nuitka_FrameObject *frame_ed621d996cb03427a1bfb1c8c9df9f64;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ed621d996cb03427a1bfb1c8c9df9f64 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_ed621d996cb03427a1bfb1c8c9df9f64, codeobj_ed621d996cb03427a1bfb1c8c9df9f64, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_ed621d996cb03427a1bfb1c8c9df9f64 = cache_frame_ed621d996cb03427a1bfb1c8c9df9f64;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ed621d996cb03427a1bfb1c8c9df9f64);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ed621d996cb03427a1bfb1c8c9df9f64) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_parse_url);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 66725 ], 38, 0);
            exception_tb = NULL;

            exception_lineno = 437;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        frame_ed621d996cb03427a1bfb1c8c9df9f64->m_frame.f_lineno = 437;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_u == NULL);
        var_u = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(var_u);
        tmp_source_name_1 = var_u;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_scheme);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_http;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT(par_kw);
            tmp_source_name_2 = par_kw;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_get);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = const_str_plain_headers;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_headers);
            if (tmp_args_element_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 443;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_ed621d996cb03427a1bfb1c8c9df9f64->m_frame.f_lineno = 443;
            {
                PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
            }

            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_headers == NULL);
            var_headers = tmp_assign_source_2;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT(par_url);
            tmp_args_element_name_4 = par_url;
            CHECK_OBJECT(var_headers);
            tmp_args_element_name_5 = var_headers;
            frame_ed621d996cb03427a1bfb1c8c9df9f64->m_frame.f_lineno = 444;
            {
                PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
                tmp_ass_subvalue_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain__set_proxy_headers, call_args);
            }

            if (tmp_ass_subvalue_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_kw);
            tmp_ass_subscribed_1 = par_kw;
            tmp_ass_subscript_1 = const_str_plain_headers;
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxyManager);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyManager);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 80280 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 446;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_source_name_4 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_source_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_urlopen);
        Py_DECREF(tmp_source_name_4);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_method);
        tmp_tuple_element_1 = par_method;
        tmp_dircall_arg2_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_url);
        tmp_tuple_element_1 = par_url;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_redirect);
        tmp_dict_value_1 = par_redirect;
        tmp_dict_key_1 = const_str_plain_redirect;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg4_1 = par_kw;
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_7_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed621d996cb03427a1bfb1c8c9df9f64);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed621d996cb03427a1bfb1c8c9df9f64);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed621d996cb03427a1bfb1c8c9df9f64);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ed621d996cb03427a1bfb1c8c9df9f64, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ed621d996cb03427a1bfb1c8c9df9f64->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed621d996cb03427a1bfb1c8c9df9f64, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ed621d996cb03427a1bfb1c8c9df9f64,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_redirect,
        par_kw,
        var_headers,
        var_u
    );


    // Release cached frame.
    if (frame_ed621d996cb03427a1bfb1c8c9df9f64 == cache_frame_ed621d996cb03427a1bfb1c8c9df9f64) {
        Py_DECREF(frame_ed621d996cb03427a1bfb1c8c9df9f64);
    }
    cache_frame_ed621d996cb03427a1bfb1c8c9df9f64 = NULL;

    assertFrameObject(frame_ed621d996cb03427a1bfb1c8c9df9f64);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_16_urlopen);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_headers);
    var_headers = NULL;

    CHECK_OBJECT((PyObject *)var_u);
    Py_DECREF(var_u);
    var_u = NULL;

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

    Py_XDECREF(var_headers);
    var_headers = NULL;

    Py_XDECREF(var_u);
    var_u = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_16_urlopen);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_redirect);
    Py_DECREF(par_redirect);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_redirect);
    Py_DECREF(par_redirect);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$poolmanager$$$function_17_proxy_from_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    PyObject *par_kw = python_pars[1];
    struct Nuitka_FrameObject *frame_6a25835295433e71113d29bc2d81c18f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6a25835295433e71113d29bc2d81c18f = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_6a25835295433e71113d29bc2d81c18f, codeobj_6a25835295433e71113d29bc2d81c18f, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *));
    frame_6a25835295433e71113d29bc2d81c18f = cache_frame_6a25835295433e71113d29bc2d81c18f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6a25835295433e71113d29bc2d81c18f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6a25835295433e71113d29bc2d81c18f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxyManager);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyManager);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 80280 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 450;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_url);
        tmp_dict_value_1 = par_url;
        tmp_dict_key_1 = const_str_plain_proxy_url;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg3_1 = par_kw;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_11_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6a25835295433e71113d29bc2d81c18f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6a25835295433e71113d29bc2d81c18f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6a25835295433e71113d29bc2d81c18f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6a25835295433e71113d29bc2d81c18f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_6a25835295433e71113d29bc2d81c18f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a25835295433e71113d29bc2d81c18f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6a25835295433e71113d29bc2d81c18f,
        type_description_1,
        par_url,
        par_kw
    );


    // Release cached frame.
    if (frame_6a25835295433e71113d29bc2d81c18f == cache_frame_6a25835295433e71113d29bc2d81c18f) {
        Py_DECREF(frame_6a25835295433e71113d29bc2d81c18f);
    }
    cache_frame_6a25835295433e71113d29bc2d81c18f = NULL;

    assertFrameObject(frame_6a25835295433e71113d29bc2d81c18f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$poolmanager$$$function_17_proxy_from_url);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_10_connection_from_url(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_10_connection_from_url,
        const_str_plain_connection_from_url,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_13594b33f705dbafd41fe006b8bbbffa,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        const_str_digest_8af5e725dd02cb9d6b081e0759f2b386,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_11__merge_pool_kwargs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_11__merge_pool_kwargs,
        const_str_plain__merge_pool_kwargs,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_20a0f5a52b5372bc19401da265256b17,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        const_str_digest_4464f0d3b4f3a9ab6e85c70a22b1e12e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_12_urlopen(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_12_urlopen,
        const_str_plain_urlopen,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_26a194e280b24da7fdb9a4fbdf4f2315,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        const_str_digest_1445abaa24d4d64feabd13541f367d4c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_13___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9cfcb39782abd89081f451a1b8ae2e1f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_14_connection_from_host(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_14_connection_from_host,
        const_str_plain_connection_from_host,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d58f4757f515865683669840addb5cf6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_15__set_proxy_headers(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_15__set_proxy_headers,
        const_str_plain__set_proxy_headers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f2479b456d6bcc5c4c0e30ebf284a70c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        const_str_digest_7656b16d642bbe814d26b601fd9549aa,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_16_urlopen(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_16_urlopen,
        const_str_plain_urlopen,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ed621d996cb03427a1bfb1c8c9df9f64,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        const_str_digest_1552d535bdde2b752b496af3502874b7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_17_proxy_from_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_17_proxy_from_url,
        const_str_plain_proxy_from_url,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6a25835295433e71113d29bc2d81c18f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_1__default_key_normalizer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_1__default_key_normalizer,
        const_str_plain__default_key_normalizer,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6b166e5a41a6d6ec93f46dd3343de56a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        const_str_digest_13018ed62f3da7cc2adaa4292e149ff3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_2___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_651b0cebdba31fd54955bff9cde2e224,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_2___init__$$$function_1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_2___init__$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c4e203c1d2f51a0d543fa4ef36d77f94,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_3___enter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_3___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9be4a3f02fe45902401af2c81523ab81,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_4___exit__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_4___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_35a23ccc8d8ae2d7d862304e0fc65130,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_5__new_pool(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_5__new_pool,
        const_str_plain__new_pool,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_525fd67cda02bde607f65348f1bd8b90,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        const_str_digest_25eb4d20eeeb3591b633871959692d99,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_6_clear() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_6_clear,
        const_str_plain_clear,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1c6c4510ee8e572458eea343e08c961f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        const_str_digest_69168908e1e5c7a88a50867458762f21,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_7_connection_from_host(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_7_connection_from_host,
        const_str_plain_connection_from_host,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_345552b61447e903033ff56909a548eb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        const_str_digest_eb89dd95343c4834c13975c4510db133,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_8_connection_from_context() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_8_connection_from_context,
        const_str_plain_connection_from_context,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ca57a9cd6d944a3bba26b77862278b58,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        const_str_digest_c4d8d0af35cb6430f76f59b3d9c2397a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_9_connection_from_pool_key(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_9_connection_from_pool_key,
        const_str_plain_connection_from_pool_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_73be0345e77d6daca31ed36cf1f6627b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$poolmanager,
        const_str_digest_a8258c43e85755a08fc604877b816c69,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$poolmanager =
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

function_impl_code functable_urllib3$poolmanager[] = {
    impl_urllib3$poolmanager$$$function_2___init__$$$function_1_lambda,
    impl_urllib3$poolmanager$$$function_1__default_key_normalizer,
    impl_urllib3$poolmanager$$$function_2___init__,
    impl_urllib3$poolmanager$$$function_3___enter__,
    impl_urllib3$poolmanager$$$function_4___exit__,
    impl_urllib3$poolmanager$$$function_5__new_pool,
    impl_urllib3$poolmanager$$$function_6_clear,
    impl_urllib3$poolmanager$$$function_7_connection_from_host,
    impl_urllib3$poolmanager$$$function_8_connection_from_context,
    impl_urllib3$poolmanager$$$function_9_connection_from_pool_key,
    impl_urllib3$poolmanager$$$function_10_connection_from_url,
    impl_urllib3$poolmanager$$$function_11__merge_pool_kwargs,
    impl_urllib3$poolmanager$$$function_12_urlopen,
    impl_urllib3$poolmanager$$$function_13___init__,
    impl_urllib3$poolmanager$$$function_14_connection_from_host,
    impl_urllib3$poolmanager$$$function_15__set_proxy_headers,
    impl_urllib3$poolmanager$$$function_16_urlopen,
    impl_urllib3$poolmanager$$$function_17_proxy_from_url,
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

    function_impl_code *current = functable_urllib3$poolmanager;
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

    if (offset > sizeof(functable_urllib3$poolmanager) || offset < 0) {
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
        functable_urllib3$poolmanager[offset],
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
        module_urllib3$poolmanager,
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
PyObject *modulecode_urllib3$poolmanager(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_urllib3$poolmanager;
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
    PRINT_STRING("urllib3.poolmanager: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.poolmanager: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.poolmanager: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initurllib3$poolmanager\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$poolmanager = Py_InitModule4(
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
    mdef_urllib3$poolmanager.m_name = module_full_name;
    module_urllib3$poolmanager = PyModule_Create(&mdef_urllib3$poolmanager);
#endif

    moduledict_urllib3$poolmanager = MODULE_DICT(module_urllib3$poolmanager);

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
        moduledict_urllib3$poolmanager,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$poolmanager,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$poolmanager,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$poolmanager,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$poolmanager,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$poolmanager);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_urllib3$poolmanager);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    struct Nuitka_FrameObject *frame_5d796292aa45c666168c9a46a8c7df9f;
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
    int tmp_res;
    PyObject *locals_urllib3$poolmanager_122 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_urllib3$poolmanager_362 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_5d796292aa45c666168c9a46a8c7df9f = MAKE_MODULE_FRAME(codeobj_5d796292aa45c666168c9a46a8c7df9f, module_urllib3$poolmanager);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_5d796292aa45c666168c9a46a8c7df9f);
    assert(Py_REFCNT(frame_5d796292aa45c666168c9a46a8c7df9f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_absolute_import);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_collections;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$poolmanager;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_collections, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_functools;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$poolmanager;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_logging;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$poolmanager;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain__collections;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$poolmanager;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_RecentlyUsedContainer_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_RecentlyUsedContainer);
        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_RecentlyUsedContainer, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_connectionpool;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$poolmanager;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_HTTPConnectionPool_str_plain_HTTPSConnectionPool_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 7;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_HTTPConnectionPool);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_HTTPSConnectionPool);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool, tmp_assign_source_10);
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
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_connectionpool;
        tmp_globals_name_6 = (PyObject *)moduledict_urllib3$poolmanager;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_port_by_scheme_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 8;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_port_by_scheme);
        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_port_by_scheme, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_exceptions;
        tmp_globals_name_7 = (PyObject *)moduledict_urllib3$poolmanager;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_c53cff22b092b8d7532d73e3369484b7_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 9;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_LocationValueError);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_LocationValueError, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_MaxRetryError);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_ProxySchemeUnknown);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown, tmp_assign_source_15);
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_digest_7741b0d6f36d833f0a39c4030e21e701;
        tmp_globals_name_8 = (PyObject *)moduledict_urllib3$poolmanager;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_urljoin_tuple;
        tmp_level_name_8 = const_int_0;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 10;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_urljoin);
        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_urljoin, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain_request;
        tmp_globals_name_9 = (PyObject *)moduledict_urllib3$poolmanager;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_RequestMethods_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 11;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_RequestMethods);
        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_RequestMethods, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
        tmp_globals_name_10 = (PyObject *)moduledict_urllib3$poolmanager;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_parse_url_tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 12;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_parse_url);
        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_parse_url, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_digest_e68800bfc0da117494aca4ca9d48e152;
        tmp_globals_name_11 = (PyObject *)moduledict_urllib3$poolmanager;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_Retry_tuple;
        tmp_level_name_11 = const_int_pos_1;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 13;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_Retry);
        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = LIST_COPY(const_list_8cc344de1d0e6b94d2846b0b3d67f4e3_list);
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15295 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 19;
        tmp_assign_source_21 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM(const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple, 0));

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple;
        UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_SSL_KEYWORDS, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = const_tuple_6f1e1a1473ea583521d7806eef124a45_tuple;
        UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain__key_fields, tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_collections);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_collections);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 22165 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_namedtuple);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_plain_PoolKey;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain__key_fields);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__key_fields);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 80321 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_3;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_PoolKey, tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_urllib3$poolmanager$$$function_1__default_key_normalizer();



        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain__default_key_normalizer, tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_functools);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_functools);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28769 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_partial);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain__default_key_normalizer);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__default_key_normalizer);
        }

        if (tmp_mvar_value_5 == NULL) {
            Py_DECREF(tmp_called_name_2);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 80354 ], 45, 0);
            exception_tb = NULL;

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_PoolKey);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolKey);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_called_name_2);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 80399 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_6;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_http;
        tmp_assign_source_26 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_functools);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_functools);
        }

        if (tmp_mvar_value_7 == NULL) {
            Py_DECREF(tmp_assign_source_26);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28769 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_7;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_partial);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_26);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain__default_key_normalizer);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__default_key_normalizer);
        }

        if (tmp_mvar_value_8 == NULL) {
            Py_DECREF(tmp_assign_source_26);
            Py_DECREF(tmp_called_name_3);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 80354 ], 45, 0);
            exception_tb = NULL;

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = tmp_mvar_value_8;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_PoolKey);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolKey);
        }

        if (tmp_mvar_value_9 == NULL) {
            Py_DECREF(tmp_assign_source_26);
            Py_DECREF(tmp_called_name_3);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 80399 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = tmp_mvar_value_9;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_26);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_https;
        tmp_res = PyDict_SetItem(tmp_assign_source_26, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_key_fn_by_scheme, tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 77709 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = tmp_mvar_value_10;
        tmp_dict_key_3 = const_str_plain_http;
        tmp_assign_source_27 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool);
        }

        if (tmp_mvar_value_11 == NULL) {
            Py_DECREF(tmp_assign_source_27);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 77852 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_4 = tmp_mvar_value_11;
        tmp_dict_key_4 = const_str_plain_https;
        tmp_res = PyDict_SetItem(tmp_assign_source_27, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_pool_classes_by_scheme, tmp_assign_source_27);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_RequestMethods);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestMethods);
        }

        if (tmp_mvar_value_12 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 77004 ], 36, 0);
            exception_tb = NULL;

            exception_lineno = 122;

            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_12;
        tmp_assign_source_28 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_28, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_urllib3$poolmanager_122 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
        tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_122, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_str_digest_505fec576d13a443afa582b42f7eb689;
        tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_122, const_str_plain___doc__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_122, const_str_plain_proxy, tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_int_pos_10_none_tuple;
            Py_INCREF(tmp_defaults_1);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_2___init__(tmp_defaults_1);



            tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_122, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_3___enter__();



        tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_122, const_str_plain___enter__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_4___exit__();



        tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_122, const_str_plain___exit__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_2);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_5__new_pool(tmp_defaults_2);



            tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_122, const_str_plain__new_pool, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_6_clear();



        tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_122, const_str_plain_clear, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_none_str_plain_http_none_tuple;
            Py_INCREF(tmp_defaults_3);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_7_connection_from_host(tmp_defaults_3);



            tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_122, const_str_plain_connection_from_host, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_8_connection_from_context();



        tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_122, const_str_plain_connection_from_context, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_4);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_9_connection_from_pool_key(tmp_defaults_4);



            tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_122, const_str_plain_connection_from_pool_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_5);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_10_connection_from_url(tmp_defaults_5);



            tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_122, const_str_plain_connection_from_url, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_11__merge_pool_kwargs();



        tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_122, const_str_plain__merge_pool_kwargs, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_true_tuple;
            Py_INCREF(tmp_defaults_6);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_12_urlopen(tmp_defaults_6);



            tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_122, const_str_plain_urlopen, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        tmp_assign_source_29 = locals_urllib3$poolmanager_122;
        Py_INCREF(tmp_assign_source_29);
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$poolmanager);
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_urllib3$poolmanager_122);
        locals_urllib3$poolmanager_122 = NULL;
        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(urllib3$poolmanager);
        return NULL;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
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


            exception_lineno = 122;

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
        tmp_assign_source_30 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_31 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto try_except_handler_3;
            }
            assert(tmp_select_metaclass_1__base == NULL);
            tmp_select_metaclass_1__base = tmp_assign_source_31;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_4;
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_source_name_4 = tmp_select_metaclass_1__base;
            tmp_assign_source_30 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_4);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto try_except_handler_6;
            }
            goto try_return_handler_5;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$poolmanager);
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
            tmp_assign_source_30 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_30 == NULL));
            goto try_return_handler_5;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$poolmanager);
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
        NUITKA_CANNOT_GET_HERE(urllib3$poolmanager);
        return NULL;
        outline_result_2:;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_4 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_7 = const_str_plain_PoolManager;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_args_element_name_8 = tmp_class_creation_1__bases;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_9 = tmp_class_creation_1__class_dict;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_32;
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
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_33 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_PoolManager, tmp_assign_source_33);
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
        PyObject *tmp_assign_source_34;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_PoolManager);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolManager);
        }

        if (tmp_mvar_value_13 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 66173 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 362;

            goto try_except_handler_7;
        }

        tmp_tuple_element_2 = tmp_mvar_value_13;
        tmp_assign_source_34 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_assign_source_34, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_urllib3$poolmanager_362 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
        tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_362, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_str_digest_bf5dbefb2977de40599b057ababf6d11;
        tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_362, const_str_plain___doc__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = const_tuple_int_pos_10_none_none_tuple;
            Py_INCREF(tmp_defaults_7);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_13___init__(tmp_defaults_7);



            tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_362, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_8;
            tmp_defaults_8 = const_tuple_none_str_plain_http_none_tuple;
            Py_INCREF(tmp_defaults_8);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_14_connection_from_host(tmp_defaults_8);



            tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_362, const_str_plain_connection_from_host, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_9;
            tmp_defaults_9 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_9);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_15__set_proxy_headers(tmp_defaults_9);



            tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_362, const_str_plain__set_proxy_headers, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_10;
            tmp_defaults_10 = const_tuple_true_tuple;
            Py_INCREF(tmp_defaults_10);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$poolmanager$$$function_16_urlopen(tmp_defaults_10);



            tmp_res = PyDict_SetItem(locals_urllib3$poolmanager_362, const_str_plain_urlopen, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        tmp_assign_source_35 = locals_urllib3$poolmanager_362;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$poolmanager);
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_urllib3$poolmanager_362);
        locals_urllib3$poolmanager_362 = NULL;
        goto outline_result_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(urllib3$poolmanager);
        return NULL;
        outline_result_3:;
        assert(tmp_class_creation_2__class_dict == NULL);
        tmp_class_creation_2__class_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
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


            exception_lineno = 362;

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
        tmp_assign_source_36 = DICT_GET_ITEM(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_subscribed_name_2 = tmp_class_creation_2__bases;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_37 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 0);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto try_except_handler_7;
            }
            assert(tmp_select_metaclass_2__base == NULL);
            tmp_select_metaclass_2__base = tmp_assign_source_37;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_5;
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_source_name_5 = tmp_select_metaclass_2__base;
            tmp_assign_source_36 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_5);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto try_except_handler_10;
            }
            goto try_return_handler_9;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$poolmanager);
        return NULL;
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
            PyObject *tmp_type_arg_2;
            Py_DECREF(exception_keeper_type_5);
            Py_XDECREF(exception_keeper_value_5);
            Py_XDECREF(exception_keeper_tb_5);
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_type_arg_2 = tmp_select_metaclass_2__base;
            tmp_assign_source_36 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_assign_source_36 == NULL));
            goto try_return_handler_9;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$poolmanager);
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
        NUITKA_CANNOT_GET_HERE(urllib3$poolmanager);
        return NULL;
        outline_result_4:;
        condexpr_end_2:;
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_called_name_5 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_10 = const_str_plain_ProxyManager;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_args_element_name_11 = tmp_class_creation_2__bases;
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_args_element_name_12 = tmp_class_creation_2__class_dict;
        frame_5d796292aa45c666168c9a46a8c7df9f->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_5, call_args);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__class == NULL);
        tmp_class_creation_2__class = tmp_assign_source_38;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d796292aa45c666168c9a46a8c7df9f);
#endif
    popFrameStack();

    assertFrameObject(frame_5d796292aa45c666168c9a46a8c7df9f);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d796292aa45c666168c9a46a8c7df9f);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_5d796292aa45c666168c9a46a8c7df9f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_5d796292aa45c666168c9a46a8c7df9f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d796292aa45c666168c9a46a8c7df9f, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_assign_source_39 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxyManager, tmp_assign_source_39);
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
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_FUNCTION_urllib3$poolmanager$$$function_17_proxy_from_url();



        UPDATE_STRING_DICT1(moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_proxy_from_url, tmp_assign_source_40);
    }

    return module_urllib3$poolmanager;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
