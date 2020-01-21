/* Generated code for Python module 'cryptography.hazmat.bindings.openssl._conditional'
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

/* The "_module_cryptography$hazmat$bindings$openssl$_conditional" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$bindings$openssl$_conditional;
PyDictObject *moduledict_cryptography$hazmat$bindings$openssl$_conditional;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_Cryptography_HAS_CUSTOM_EXT;
static PyObject *const_str_plain_Cryptography_HAS_OPENSSL_CLEANUP;
static PyObject *const_str_plain_Cryptography_CRYPTO_set_mem_functions;
static PyObject *const_str_plain_TLS_ST_OK;
static PyObject *const_str_plain_X509_V_ERR_EMAIL_MISMATCH;
static PyObject *const_str_plain_cryptography_has_raw_key;
static PyObject *const_list_str_plain_SSL_get_server_tmp_key_list;
static PyObject *const_list_2b0156be132bced5637961a9aa48cb51_list;
static PyObject *const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list;
static PyObject *const_str_plain_cryptography_has_psk;
static PyObject *const_str_plain_SSLv3_client_method;
static PyObject *const_str_plain_X509_STORE_get_get_issuer;
static PyObject *const_list_a2ccfb1541ef6968650ac43562856e84_list;
static PyObject *const_str_plain_FIPS_mode;
static PyObject *const_str_digest_5ebdc304a856f17bec9566811cc3653b;
extern PyObject *const_str_plain_EVP_PKEY_get1_tls_encodedpoint;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION;
static PyObject *const_str_digest_2fcc949fb99081eda00ddcfc8aa01f9a;
static PyObject *const_list_str_plain_EVP_PKEY_DHX_list;
static PyObject *const_str_plain_SCT_set_source;
static PyObject *const_str_plain_cryptography_has_110_verification_params;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set_hostflags;
static PyObject *const_str_digest_0134e31627bb74f9df2edcd82a96ece3;
static PyObject *const_str_plain_ENGINE_get_name;
static PyObject *const_str_plain_cryptography_has_fips;
static PyObject *const_str_plain_DTLS_get_link_min_mtu;
static PyObject *const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54;
static PyObject *const_str_plain_Cryptography_HAS_ED448;
static PyObject *const_str_plain_Cryptography_HAS_PSK;
static PyObject *const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list;
extern PyObject *const_str_plain_EVP_PKEY_new_raw_private_key;
static PyObject *const_str_plain_cryptography_has_cipher_details;
static PyObject *const_str_plain_SSL_CTX_use_psk_identity_hint;
static PyObject *const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list;
static PyObject *const_str_plain_Cryptography_HAS_102_VERIFICATION_PARAMS;
extern PyObject *const_str_plain_EVP_PKEY_ED25519;
static PyObject *const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list;
static PyObject *const_str_plain_cryptography_has_tlsv13;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED;
extern PyObject *const_str_plain_SSL_ST_OK;
static PyObject *const_list_8637a8e096edeccc96cf2940262bfd01_list;
static PyObject *const_str_plain_X509_V_FLAG_TRUSTED_FIRST;
static PyObject *const_str_plain_SSL_set_post_handshake_auth;
static PyObject *const_list_86c40a5c21cefd9f6af8769ff1175caf_list;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_SSL_set_cert_cb;
static PyObject *const_str_plain_SSL_CTX_set_psk_client_callback;
static PyObject *const_list_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT_list;
static PyObject *const_str_plain_Cryptography_HAS_SIGALGS;
static PyObject *const_str_plain_SSL_CTX_add_client_custom_ext;
extern PyObject *const_str_plain_CONDITIONAL_NAMES;
extern PyObject *const_str_plain_EVP_DigestFinalXOF;
extern PyObject *const_str_plain_RSA_R_PKCS_DECODING_ERROR;
static PyObject *const_str_plain_cryptography_has_ed25519;
extern PyObject *const_str_plain_Cryptography_HAS_ALPN;
static PyObject *const_str_plain_SSL_OP_NO_DTLSv1;
static PyObject *const_str_plain_SSL_extension_supported;
static PyObject *const_str_plain_Cryptography_HAS_110_VERIFICATION_PARAMS;
static PyObject *const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list;
static PyObject *const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list;
static PyObject *const_str_plain_cryptography_has_rsa_oaep_label;
static PyObject *const_str_plain_Cryptography_HAS_GET_SERVER_TMP_KEY;
extern PyObject *const_str_plain_EVP_PKEY_get_raw_private_key;
static PyObject *const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list;
static PyObject *const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1;
extern PyObject *const_str_plain_EVP_PKEY_X25519;
extern PyObject *const_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md;
static PyObject *const_str_digest_fafbfe30544ba42854ed0b86baac5f84;
static PyObject *const_str_plain_SSL_get_sigalgs;
static PyObject *const_str_digest_05e8c3e45ca4a8d1991048b3b057a830;
static PyObject *const_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT;
static PyObject *const_str_plain_SCT_set1_log_id;
static PyObject *const_list_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED_list;
static PyObject *const_str_plain_X509_CHECK_FLAG_NO_PARTIAL_WILDCARDS;
extern PyObject *const_str_plain_SSL_ST_INIT;
static PyObject *const_str_plain_SSL_CIPHER_get_kx_nid;
static PyObject *const_str_plain_SSL_VERIFY_POST_HANDSHAKE;
static PyObject *const_str_plain_SSL_CTX_set_max_early_data;
static PyObject *const_str_plain_cryptography_has_evp_digestfinal_xof;
static PyObject *const_str_digest_0a25da58d8b65f965de99956a1b5aad7;
static PyObject *const_str_plain_cryptography_has_custom_ext;
static PyObject *const_str_digest_9a0160a95e0c209c6b7e5d38666a9d6e;
extern PyObject *const_str_plain_SSL_set_alpn_protos;
static PyObject *const_str_plain_SSL_CIPHER_get_auth_nid;
static PyObject *const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list;
static PyObject *const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH;
static PyObject *const_list_9cf036427baefafa3a18cbc2378aecdb_list;
static PyObject *const_str_plain_cryptography_has_get_server_tmp_key;
extern PyObject *const_str_plain_Cryptography_HAS_RSA_OAEP_LABEL;
static PyObject *const_str_plain_Cryptography_HAS_FIPS;
extern PyObject *const_str_plain_ENGINE_init;
extern PyObject *const_str_plain_sk_SCT_value;
static PyObject *const_str_digest_c8d4ed7f56a6990e5028c35f4876f90c;
static PyObject *const_str_plain_SSLv3_server_method;
extern PyObject *const_str_plain_Cryptography_HAS_SSL_ST;
extern PyObject *const_str_plain_EVP_PKEY_ED448;
extern PyObject *const_str_plain_Cryptography_HAS_RSA_OAEP_MD;
static PyObject *const_list_03133653ae1f779dd1ae650a3a80ba30_list;
static PyObject *const_list_70d66b11b8b83912e7ed175ae865dfed_list;
static PyObject *const_str_plain_EC_POINT_set_compressed_coordinates_GF2m;
static PyObject *const_str_plain_cryptography_has_102_verification_params;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_Cryptography_HAS_TLS_ST;
extern PyObject *const_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label;
static PyObject *const_str_plain_SSL_COMP_get_name;
static PyObject *const_str_plain_cryptography_has_ssl_sigalgs;
static PyObject *const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list;
static PyObject *const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list;
extern PyObject *const_str_plain_NID_X448;
static PyObject *const_str_plain_Cryptography_HAS_X25519;
static PyObject *const_str_plain_SSL_CTX_set_post_handshake_auth;
extern PyObject *const_str_plain_EVP_PBE_scrypt;
extern PyObject *const_str_plain_Cryptography_HAS_LOCKING_CALLBACKS;
extern PyObject *const_str_plain_NID_X25519;
static PyObject *const_list_e5729eb47bb2bb77d896a48e0ba4a292_list;
static PyObject *const_list_str_plain_SSL_CTX_set_ecdh_auto_list;
static PyObject *const_str_plain_DTLS_method;
static PyObject *const_str_plain_cryptography_has_tls_st;
static PyObject *const_list_a92b37e3fd97e57634d2e2c4f15929c2_list;
static PyObject *const_str_plain_SCT_set_timestamp;
extern PyObject *const_str_plain_SCT_get0_signature;
extern PyObject *const_str_plain_SSL_CTX_set_ecdh_auto;
static PyObject *const_str_digest_89c6e3f07e56ca3212435467944ee8af;
static PyObject *const_str_plain_Cryptography_HAS_CIPHER_DETAILS;
static PyObject *const_list_29407ac2cfa5bacd5103ba17ced806aa_list;
static PyObject *const_str_plain_Cryptography_HAS_X448;
static PyObject *const_str_plain_TLS_ST_BEFORE;
static PyObject *const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list;
static PyObject *const_str_plain_SSL_get0_param;
extern PyObject *const_str_digest_f2f56e52e9bead94215489df18f9e023;
static PyObject *const_str_plain_EC_POINT_set_affine_coordinates_GF2m;
static PyObject *const_str_plain_SCT_set_version;
static PyObject *const_list_str_plain_EC_curve_nid2nist_list;
static PyObject *const_str_plain_cryptography_has_set_cert_cb;
static PyObject *const_str_plain_SSL_get_current_expansion;
extern PyObject *const_str_plain_Cryptography_HAS_SCRYPT;
extern PyObject *const_str_plain_EVP_DigestVerify;
static PyObject *const_list_531063e0f807f77ec21047a47441d048_list;
extern PyObject *const_str_plain_Cryptography_add_osrandom_engine;
static PyObject *const_str_plain_SSL_SESSION_get_max_early_data;
static PyObject *const_str_plain_X509_CHECK_FLAG_NO_WILDCARDS;
extern PyObject *const_str_plain_NID_ED448;
static PyObject *const_str_plain_cryptography_has_x448;
static PyObject *const_list_str_plain_OPENSSL_cleanup_list;
static PyObject *const_str_plain_DTLS_client_method;
static PyObject *const_str_plain_X509_STORE_set_get_issuer;
static PyObject *const_str_plain_SCT_new;
extern PyObject *const_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED;
extern PyObject *const_str_plain_Cryptography_HAS_EC2M;
static PyObject *const_str_plain_Cryptography_HAS_ED25519;
static PyObject *const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list;
static PyObject *const_str_plain_SSL_CIPHER_is_aead;
static PyObject *const_str_plain_SSL_CTX_set1_sigalgs_list;
static PyObject *const_str_plain_SSL_CTX_set_ciphersuites;
static PyObject *const_str_plain_SSL_CIPHER_get_cipher_nid;
extern PyObject *const_str_plain_SSLv3_method;
static PyObject *const_str_plain_SSL_get_server_tmp_key;
extern PyObject *const_str_plain_SSL_ST_RENEGOTIATE;
static PyObject *const_str_plain_cryptography_has_ssl3_method;
static PyObject *const_str_plain_cryptography_has_generic_dtls_method;
static PyObject *const_str_plain_SSL_get_current_compression;
static PyObject *const_str_digest_96e83fdb049b186bfc982a4b37cdf168;
static PyObject *const_list_8cf6be4317fa4d6df8e3c06784c94792_list;
static PyObject *const_str_plain_cryptography_has_ec2m;
extern PyObject *const_str_plain_EVP_PKEY_X448;
extern PyObject *const_str_plain_SSL_CTX_set_alpn_protos;
static PyObject *const_str_plain_SSL_OP_NO_TLSv1_3;
extern PyObject *const_str_plain_ENGINE_finish;
static PyObject *const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9;
static PyObject *const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY;
static PyObject *const_str_plain_cryptography_has_evp_pkey_dhx;
static PyObject *const_str_plain_SCT_set_log_entry_type;
extern PyObject *const_str_plain_NID_ED25519;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_ip;
static PyObject *const_str_plain_cryptography_has_locking_callbacks;
static PyObject *const_str_plain_cryptography_has_rsa_oaep_md;
static PyObject *const_str_plain_Cryptography_HAS_EC_1_0_2;
extern PyObject *const_str_plain_SSL_ST_BEFORE;
static PyObject *const_str_plain_Cryptography_HAS_TLSv1_3;
static PyObject *const_str_plain_Cryptography_HAS_SET_CERT_CB;
static PyObject *const_str_plain_sk_SCT_new_null;
extern PyObject *const_str_plain_ENGINE_free;
static PyObject *const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list;
extern PyObject *const_str_plain_EVP_PKEY_get_raw_public_key;
static PyObject *const_str_plain_FIPS_set_mode;
static PyObject *const_str_plain_X509_V_FLAG_PARTIAL_CHAIN;
static PyObject *const_str_digest_d2c4bd506cf66a4d1c7adfe4f312872c;
extern PyObject *const_str_plain_EVP_DigestSign;
extern PyObject *const_str_plain_Cryptography_HAS_ENGINE;
static PyObject *const_list_99d2a9f3afa4bd958ff3177b2faaca12_list;
extern PyObject *const_str_plain_ENGINE_set_default_RAND;
static PyObject *const_str_plain_cryptography_has_ed448;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_host;
extern PyObject *const_str_plain_SSL_CTX_set_alpn_select_cb;
static PyObject *const_str_plain_SSL_verify_client_post_handshake;
static PyObject *const_str_plain_X509_CHECK_FLAG_ALWAYS_CHECK_SUBJECT;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE;
static PyObject *const_str_plain_SSL_CTX_set_psk_server_callback;
extern PyObject *const_str_plain_ENGINE_unregister_RAND;
static PyObject *const_str_plain_SSL_read_early_data;
extern PyObject *const_str_plain_SSL_get0_alpn_selected;
static PyObject *const_str_plain_Cryptography_HAS_SET_ECDH_AUTO;
static PyObject *const_str_plain_cryptography_has_scrypt;
static PyObject *const_str_plain_DTLS_set_link_mtu;
static PyObject *const_str_plain_sk_SCT_push;
static PyObject *const_str_plain_cryptography_has_mem_functions;
static PyObject *const_str_plain_SSL_CTX_set_cert_cb;
extern PyObject *const_str_plain_ENGINE_get_default_RAND;
static PyObject *const_str_plain_Cryptography_HAS_RAW_KEY;
static PyObject *const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM;
static PyObject *const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH;
extern PyObject *const_str_plain_SCT_get0_log_id;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_email;
static PyObject *const_str_plain_cryptography_has_ssl_st;
static PyObject *const_str_plain_Cryptography_HAS_SSL3_METHOD;
static PyObject *const_str_plain_X509_VERIFY_PARAM_set1_ip_asc;
static PyObject *const_str_plain_cryptography_has_ec_1_0_2;
static PyObject *const_str_plain_Cryptography_HAS_GENERIC_DTLS_METHOD;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_X509_V_FLAG_SUITEB_128_LOS;
static PyObject *const_str_plain_cryptography_has_compression;
static PyObject *const_list_str_plain_Cryptography_setup_ssl_threads_list;
extern PyObject *const_str_plain_EVP_PKEY_DHX;
static PyObject *const_str_plain_EC_curve_nid2nist;
static PyObject *const_list_69b906847d25decb1cda42670e7e5241_list;
static PyObject *const_str_digest_b2405d2434f1275e2b8933b43c529fbe;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_Cryptography_HAS_EVP_DIGESTFINAL_XOF;
static PyObject *const_str_digest_38eba4904dfc59e8c0458109674fe900;
extern PyObject *const_str_plain_Cryptography_HAS_EVP_PKEY_DHX;
static PyObject *const_str_plain_SSL_write_early_data;
static PyObject *const_str_plain_cryptography_has_engine;
static PyObject *const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list;
static PyObject *const_str_plain_Cryptography_HAS_SCT;
static PyObject *const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list;
static PyObject *const_list_136332fc21a01754e44f9a06545f3713_list;
static PyObject *const_str_plain_cryptography_has_openssl_cleanup;
static PyObject *const_str_plain_OPENSSL_cleanup;
static PyObject *const_str_digest_8535fc31daf81b5f04208070d851f01e;
extern PyObject *const_str_plain_SCT_get_version;
static PyObject *const_str_plain_Cryptography_HAS_COMPRESSION;
static PyObject *const_list_str_plain_EVP_DigestFinalXOF_list;
static PyObject *const_str_digest_08906fb95f8ef4a836f252aa7b12b1cf;
static PyObject *const_str_plain_Cryptography_HAS_MEM_FUNCTIONS;
static PyObject *const_str_plain_SSL_OP_NO_DTLSv1_2;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_EVP_PKEY_new_raw_public_key;
static PyObject *const_list_f501d0e9bfb78a701032fc968ff559f6_list;
extern PyObject *const_str_plain_sk_SCT_num;
extern PyObject *const_str_plain_EVP_PKEY_set1_tls_encodedpoint;
static PyObject *const_str_plain_X509_CHECK_FLAG_SINGLE_LABEL_SUBDOMAINS;
extern PyObject *const_str_plain_EC_POINT_get_affine_coordinates_GF2m;
static PyObject *const_str_plain_X509_V_FLAG_SUITEB_192_LOS;
static PyObject *const_str_plain_DTLS_server_method;
static PyObject *const_str_plain_cryptography_has_sct;
static PyObject *const_list_d0eb343c74fa9d778f192626e2b9d53e_list;
static PyObject *const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33;
static PyObject *const_str_plain_cryptography_has_set_ecdh_auto;
static PyObject *const_str_plain_cryptography_has_alpn;
extern PyObject *const_str_plain_Cryptography_setup_ssl_threads;
extern PyObject *const_str_plain_SCT_get_log_entry_type;
static PyObject *const_str_plain_cryptography_has_x25519;
extern PyObject *const_str_plain_SCT_get_timestamp;
extern PyObject *const_str_plain_ENGINE_by_id;
static PyObject *const_str_plain_SSL_CTX_add_server_custom_ext;
static PyObject *const_str_plain_X509_CHECK_FLAG_MULTI_LABEL_WILDCARDS;
static PyObject *const_list_str_plain_EVP_PBE_scrypt_list;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_ENGINE_ctrl_cmd;
static PyObject *const_str_plain_SSL_CIPHER_get_digest_nid;
extern PyObject *const_str_plain_SCT_LIST_free;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_Cryptography_HAS_CUSTOM_EXT = UNSTREAM_STRING(&constant_bin[ 592490 ], 27, 1);
    const_str_plain_Cryptography_HAS_OPENSSL_CLEANUP = UNSTREAM_STRING(&constant_bin[ 592517 ], 32, 1);
    const_str_plain_Cryptography_CRYPTO_set_mem_functions = UNSTREAM_STRING(&constant_bin[ 592549 ], 37, 1);
    const_str_plain_TLS_ST_OK = UNSTREAM_STRING(&constant_bin[ 592586 ], 9, 1);
    const_str_plain_X509_V_ERR_EMAIL_MISMATCH = UNSTREAM_STRING(&constant_bin[ 592595 ], 25, 1);
    const_str_plain_cryptography_has_raw_key = UNSTREAM_STRING(&constant_bin[ 592620 ], 24, 1);
    const_list_str_plain_SSL_get_server_tmp_key_list = PyList_New(1);
    const_str_plain_SSL_get_server_tmp_key = UNSTREAM_STRING(&constant_bin[ 592644 ], 22, 1);
    PyList_SET_ITEM(const_list_str_plain_SSL_get_server_tmp_key_list, 0, const_str_plain_SSL_get_server_tmp_key); Py_INCREF(const_str_plain_SSL_get_server_tmp_key);
    const_list_2b0156be132bced5637961a9aa48cb51_list = PyList_New(2);
    const_str_plain_X509_STORE_get_get_issuer = UNSTREAM_STRING(&constant_bin[ 592666 ], 25, 1);
    PyList_SET_ITEM(const_list_2b0156be132bced5637961a9aa48cb51_list, 0, const_str_plain_X509_STORE_get_get_issuer); Py_INCREF(const_str_plain_X509_STORE_get_get_issuer);
    const_str_plain_X509_STORE_set_get_issuer = UNSTREAM_STRING(&constant_bin[ 592691 ], 25, 1);
    PyList_SET_ITEM(const_list_2b0156be132bced5637961a9aa48cb51_list, 1, const_str_plain_X509_STORE_set_get_issuer); Py_INCREF(const_str_plain_X509_STORE_set_get_issuer);
    const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list = PyList_New(2);
    const_str_plain_SSL_CTX_set_cert_cb = UNSTREAM_STRING(&constant_bin[ 592716 ], 19, 1);
    PyList_SET_ITEM(const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list, 0, const_str_plain_SSL_CTX_set_cert_cb); Py_INCREF(const_str_plain_SSL_CTX_set_cert_cb);
    const_str_plain_SSL_set_cert_cb = UNSTREAM_STRING(&constant_bin[ 592735 ], 15, 1);
    PyList_SET_ITEM(const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list, 1, const_str_plain_SSL_set_cert_cb); Py_INCREF(const_str_plain_SSL_set_cert_cb);
    const_str_plain_cryptography_has_psk = UNSTREAM_STRING(&constant_bin[ 592750 ], 20, 1);
    const_str_plain_SSLv3_client_method = UNSTREAM_STRING(&constant_bin[ 592770 ], 19, 1);
    const_list_a2ccfb1541ef6968650ac43562856e84_list = PyList_New(7);
    const_str_plain_DTLS_method = UNSTREAM_STRING(&constant_bin[ 592789 ], 11, 1);
    PyList_SET_ITEM(const_list_a2ccfb1541ef6968650ac43562856e84_list, 0, const_str_plain_DTLS_method); Py_INCREF(const_str_plain_DTLS_method);
    const_str_plain_DTLS_server_method = UNSTREAM_STRING(&constant_bin[ 592800 ], 18, 1);
    PyList_SET_ITEM(const_list_a2ccfb1541ef6968650ac43562856e84_list, 1, const_str_plain_DTLS_server_method); Py_INCREF(const_str_plain_DTLS_server_method);
    const_str_plain_DTLS_client_method = UNSTREAM_STRING(&constant_bin[ 592818 ], 18, 1);
    PyList_SET_ITEM(const_list_a2ccfb1541ef6968650ac43562856e84_list, 2, const_str_plain_DTLS_client_method); Py_INCREF(const_str_plain_DTLS_client_method);
    const_str_plain_SSL_OP_NO_DTLSv1 = UNSTREAM_STRING(&constant_bin[ 592836 ], 16, 1);
    PyList_SET_ITEM(const_list_a2ccfb1541ef6968650ac43562856e84_list, 3, const_str_plain_SSL_OP_NO_DTLSv1); Py_INCREF(const_str_plain_SSL_OP_NO_DTLSv1);
    const_str_plain_SSL_OP_NO_DTLSv1_2 = UNSTREAM_STRING(&constant_bin[ 592852 ], 18, 1);
    PyList_SET_ITEM(const_list_a2ccfb1541ef6968650ac43562856e84_list, 4, const_str_plain_SSL_OP_NO_DTLSv1_2); Py_INCREF(const_str_plain_SSL_OP_NO_DTLSv1_2);
    const_str_plain_DTLS_set_link_mtu = UNSTREAM_STRING(&constant_bin[ 592870 ], 17, 1);
    PyList_SET_ITEM(const_list_a2ccfb1541ef6968650ac43562856e84_list, 5, const_str_plain_DTLS_set_link_mtu); Py_INCREF(const_str_plain_DTLS_set_link_mtu);
    const_str_plain_DTLS_get_link_min_mtu = UNSTREAM_STRING(&constant_bin[ 592887 ], 21, 1);
    PyList_SET_ITEM(const_list_a2ccfb1541ef6968650ac43562856e84_list, 6, const_str_plain_DTLS_get_link_min_mtu); Py_INCREF(const_str_plain_DTLS_get_link_min_mtu);
    const_str_plain_FIPS_mode = UNSTREAM_STRING(&constant_bin[ 592908 ], 9, 1);
    const_str_digest_5ebdc304a856f17bec9566811cc3653b = UNSTREAM_STRING(&constant_bin[ 592917 ], 44, 1);
    const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION = UNSTREAM_STRING(&constant_bin[ 592961 ], 34, 1);
    const_str_digest_2fcc949fb99081eda00ddcfc8aa01f9a = UNSTREAM_STRING(&constant_bin[ 592995 ], 45, 1);
    const_list_str_plain_EVP_PKEY_DHX_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_EVP_PKEY_DHX_list, 0, const_str_plain_EVP_PKEY_DHX); Py_INCREF(const_str_plain_EVP_PKEY_DHX);
    const_str_plain_SCT_set_source = UNSTREAM_STRING(&constant_bin[ 593040 ], 14, 1);
    const_str_plain_cryptography_has_110_verification_params = UNSTREAM_STRING(&constant_bin[ 593054 ], 40, 1);
    const_str_plain_X509_VERIFY_PARAM_set_hostflags = UNSTREAM_STRING(&constant_bin[ 593094 ], 31, 1);
    const_str_digest_0134e31627bb74f9df2edcd82a96ece3 = UNSTREAM_STRING(&constant_bin[ 593125 ], 45, 1);
    const_str_plain_ENGINE_get_name = UNSTREAM_STRING(&constant_bin[ 593170 ], 15, 1);
    const_str_plain_cryptography_has_fips = UNSTREAM_STRING(&constant_bin[ 593185 ], 21, 1);
    const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54 = UNSTREAM_STRING(&constant_bin[ 593206 ], 47, 1);
    const_str_plain_Cryptography_HAS_ED448 = UNSTREAM_STRING(&constant_bin[ 593253 ], 22, 1);
    const_str_plain_Cryptography_HAS_PSK = UNSTREAM_STRING(&constant_bin[ 593275 ], 20, 1);
    const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list, 0, const_str_plain_RSA_R_PKCS_DECODING_ERROR); Py_INCREF(const_str_plain_RSA_R_PKCS_DECODING_ERROR);
    const_str_plain_cryptography_has_cipher_details = UNSTREAM_STRING(&constant_bin[ 593295 ], 31, 1);
    const_str_plain_SSL_CTX_use_psk_identity_hint = UNSTREAM_STRING(&constant_bin[ 593326 ], 29, 1);
    const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list = PyList_New(2);
    PyList_SET_ITEM(const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list, 0, const_str_plain_EVP_PKEY_ED448); Py_INCREF(const_str_plain_EVP_PKEY_ED448);
    PyList_SET_ITEM(const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list, 1, const_str_plain_NID_ED448); Py_INCREF(const_str_plain_NID_ED448);
    const_str_plain_Cryptography_HAS_102_VERIFICATION_PARAMS = UNSTREAM_STRING(&constant_bin[ 593355 ], 40, 1);
    const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list = PyList_New(1);
    const_str_plain_X509_V_FLAG_TRUSTED_FIRST = UNSTREAM_STRING(&constant_bin[ 593395 ], 25, 1);
    PyList_SET_ITEM(const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list, 0, const_str_plain_X509_V_FLAG_TRUSTED_FIRST); Py_INCREF(const_str_plain_X509_V_FLAG_TRUSTED_FIRST);
    const_str_plain_cryptography_has_tlsv13 = UNSTREAM_STRING(&constant_bin[ 593420 ], 23, 1);
    const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED = UNSTREAM_STRING(&constant_bin[ 593443 ], 34, 1);
    const_list_8637a8e096edeccc96cf2940262bfd01_list = PyList_New(4);
    PyList_SET_ITEM(const_list_8637a8e096edeccc96cf2940262bfd01_list, 0, const_str_plain_EVP_PKEY_new_raw_private_key); Py_INCREF(const_str_plain_EVP_PKEY_new_raw_private_key);
    PyList_SET_ITEM(const_list_8637a8e096edeccc96cf2940262bfd01_list, 1, const_str_plain_EVP_PKEY_new_raw_public_key); Py_INCREF(const_str_plain_EVP_PKEY_new_raw_public_key);
    PyList_SET_ITEM(const_list_8637a8e096edeccc96cf2940262bfd01_list, 2, const_str_plain_EVP_PKEY_get_raw_private_key); Py_INCREF(const_str_plain_EVP_PKEY_get_raw_private_key);
    PyList_SET_ITEM(const_list_8637a8e096edeccc96cf2940262bfd01_list, 3, const_str_plain_EVP_PKEY_get_raw_public_key); Py_INCREF(const_str_plain_EVP_PKEY_get_raw_public_key);
    const_str_plain_SSL_set_post_handshake_auth = UNSTREAM_STRING(&constant_bin[ 593477 ], 27, 1);
    const_list_86c40a5c21cefd9f6af8769ff1175caf_list = PyList_New(9);
    PyList_SET_ITEM(const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 0, const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION); Py_INCREF(const_str_plain_X509_V_ERR_SUITE_B_INVALID_VERSION);
    const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM = UNSTREAM_STRING(&constant_bin[ 593504 ], 36, 1);
    PyList_SET_ITEM(const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 1, const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM); Py_INCREF(const_str_plain_X509_V_ERR_SUITE_B_INVALID_ALGORITHM);
    const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE = UNSTREAM_STRING(&constant_bin[ 593540 ], 32, 1);
    PyList_SET_ITEM(const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 2, const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE); Py_INCREF(const_str_plain_X509_V_ERR_SUITE_B_INVALID_CURVE);
    const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1 = UNSTREAM_STRING(&constant_bin[ 593572 ], 46, 1);
    PyList_SET_ITEM(const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 3, const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1); Py_INCREF(const_str_digest_4492d7ee374a0b9e687cf99e3c6facc1);
    PyList_SET_ITEM(const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 4, const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED); Py_INCREF(const_str_plain_X509_V_ERR_SUITE_B_LOS_NOT_ALLOWED);
    const_str_digest_05e8c3e45ca4a8d1991048b3b057a830 = UNSTREAM_STRING(&constant_bin[ 593618 ], 47, 1);
    PyList_SET_ITEM(const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 5, const_str_digest_05e8c3e45ca4a8d1991048b3b057a830); Py_INCREF(const_str_digest_05e8c3e45ca4a8d1991048b3b057a830);
    const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH = UNSTREAM_STRING(&constant_bin[ 593665 ], 28, 1);
    PyList_SET_ITEM(const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 6, const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH); Py_INCREF(const_str_plain_X509_V_ERR_HOSTNAME_MISMATCH);
    PyList_SET_ITEM(const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 7, const_str_plain_X509_V_ERR_EMAIL_MISMATCH); Py_INCREF(const_str_plain_X509_V_ERR_EMAIL_MISMATCH);
    const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH = UNSTREAM_STRING(&constant_bin[ 593693 ], 30, 1);
    PyList_SET_ITEM(const_list_86c40a5c21cefd9f6af8769ff1175caf_list, 8, const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH); Py_INCREF(const_str_plain_X509_V_ERR_IP_ADDRESS_MISMATCH);
    const_str_plain_SSL_CTX_set_psk_client_callback = UNSTREAM_STRING(&constant_bin[ 593723 ], 31, 1);
    const_list_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT_list = PyList_New(1);
    const_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT = UNSTREAM_STRING(&constant_bin[ 593754 ], 35, 1);
    PyList_SET_ITEM(const_list_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT_list, 0, const_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT); Py_INCREF(const_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT);
    const_str_plain_Cryptography_HAS_SIGALGS = UNSTREAM_STRING(&constant_bin[ 593789 ], 24, 1);
    const_str_plain_SSL_CTX_add_client_custom_ext = UNSTREAM_STRING(&constant_bin[ 593813 ], 29, 1);
    const_str_plain_cryptography_has_ed25519 = UNSTREAM_STRING(&constant_bin[ 593842 ], 24, 1);
    const_str_plain_SSL_extension_supported = UNSTREAM_STRING(&constant_bin[ 593866 ], 23, 1);
    const_str_plain_Cryptography_HAS_110_VERIFICATION_PARAMS = UNSTREAM_STRING(&constant_bin[ 593889 ], 40, 1);
    const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list = PyList_New(2);
    const_str_plain_FIPS_set_mode = UNSTREAM_STRING(&constant_bin[ 593929 ], 13, 1);
    PyList_SET_ITEM(const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list, 0, const_str_plain_FIPS_set_mode); Py_INCREF(const_str_plain_FIPS_set_mode);
    PyList_SET_ITEM(const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list, 1, const_str_plain_FIPS_mode); Py_INCREF(const_str_plain_FIPS_mode);
    const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list = PyList_New(2);
    PyList_SET_ITEM(const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list, 0, const_str_plain_EVP_PKEY_X448); Py_INCREF(const_str_plain_EVP_PKEY_X448);
    PyList_SET_ITEM(const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list, 1, const_str_plain_NID_X448); Py_INCREF(const_str_plain_NID_X448);
    const_str_plain_cryptography_has_rsa_oaep_label = UNSTREAM_STRING(&constant_bin[ 593942 ], 31, 1);
    const_str_plain_Cryptography_HAS_GET_SERVER_TMP_KEY = UNSTREAM_STRING(&constant_bin[ 593973 ], 35, 1);
    const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list = PyList_New(2);
    PyList_SET_ITEM(const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list, 0, const_str_plain_EVP_PKEY_X25519); Py_INCREF(const_str_plain_EVP_PKEY_X25519);
    PyList_SET_ITEM(const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list, 1, const_str_plain_NID_X25519); Py_INCREF(const_str_plain_NID_X25519);
    const_str_digest_fafbfe30544ba42854ed0b86baac5f84 = UNSTREAM_STRING(&constant_bin[ 594008 ], 58, 0);
    const_str_plain_SSL_get_sigalgs = UNSTREAM_STRING(&constant_bin[ 594066 ], 15, 1);
    const_str_plain_SCT_set1_log_id = UNSTREAM_STRING(&constant_bin[ 594081 ], 15, 1);
    const_list_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED_list, 0, const_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED); Py_INCREF(const_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED);
    const_str_plain_X509_CHECK_FLAG_NO_PARTIAL_WILDCARDS = UNSTREAM_STRING(&constant_bin[ 594096 ], 36, 1);
    const_str_plain_SSL_CIPHER_get_kx_nid = UNSTREAM_STRING(&constant_bin[ 594132 ], 21, 1);
    const_str_plain_SSL_VERIFY_POST_HANDSHAKE = UNSTREAM_STRING(&constant_bin[ 594153 ], 25, 1);
    const_str_plain_SSL_CTX_set_max_early_data = UNSTREAM_STRING(&constant_bin[ 594178 ], 26, 1);
    const_str_plain_cryptography_has_evp_digestfinal_xof = UNSTREAM_STRING(&constant_bin[ 594204 ], 36, 1);
    const_str_digest_0a25da58d8b65f965de99956a1b5aad7 = UNSTREAM_STRING(&constant_bin[ 594240 ], 42, 1);
    const_str_plain_cryptography_has_custom_ext = UNSTREAM_STRING(&constant_bin[ 594282 ], 27, 1);
    const_str_digest_9a0160a95e0c209c6b7e5d38666a9d6e = UNSTREAM_STRING(&constant_bin[ 594309 ], 52, 0);
    const_str_plain_SSL_CIPHER_get_auth_nid = UNSTREAM_STRING(&constant_bin[ 594361 ], 23, 1);
    const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list = PyList_New(14);
    const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY = UNSTREAM_STRING(&constant_bin[ 594384 ], 31, 1);
    PyList_SET_ITEM(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 0, const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY); Py_INCREF(const_str_plain_X509_V_FLAG_SUITEB_128_LOS_ONLY);
    const_str_plain_X509_V_FLAG_SUITEB_192_LOS = UNSTREAM_STRING(&constant_bin[ 594415 ], 26, 1);
    PyList_SET_ITEM(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 1, const_str_plain_X509_V_FLAG_SUITEB_192_LOS); Py_INCREF(const_str_plain_X509_V_FLAG_SUITEB_192_LOS);
    const_str_plain_X509_V_FLAG_SUITEB_128_LOS = UNSTREAM_STRING(&constant_bin[ 594384 ], 26, 1);
    PyList_SET_ITEM(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 2, const_str_plain_X509_V_FLAG_SUITEB_128_LOS); Py_INCREF(const_str_plain_X509_V_FLAG_SUITEB_128_LOS);
    const_str_plain_X509_VERIFY_PARAM_set1_host = UNSTREAM_STRING(&constant_bin[ 594441 ], 27, 1);
    PyList_SET_ITEM(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 3, const_str_plain_X509_VERIFY_PARAM_set1_host); Py_INCREF(const_str_plain_X509_VERIFY_PARAM_set1_host);
    const_str_plain_X509_VERIFY_PARAM_set1_email = UNSTREAM_STRING(&constant_bin[ 594468 ], 28, 1);
    PyList_SET_ITEM(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 4, const_str_plain_X509_VERIFY_PARAM_set1_email); Py_INCREF(const_str_plain_X509_VERIFY_PARAM_set1_email);
    const_str_plain_X509_VERIFY_PARAM_set1_ip = UNSTREAM_STRING(&constant_bin[ 594496 ], 25, 1);
    PyList_SET_ITEM(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 5, const_str_plain_X509_VERIFY_PARAM_set1_ip); Py_INCREF(const_str_plain_X509_VERIFY_PARAM_set1_ip);
    const_str_plain_X509_VERIFY_PARAM_set1_ip_asc = UNSTREAM_STRING(&constant_bin[ 594521 ], 29, 1);
    PyList_SET_ITEM(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 6, const_str_plain_X509_VERIFY_PARAM_set1_ip_asc); Py_INCREF(const_str_plain_X509_VERIFY_PARAM_set1_ip_asc);
    PyList_SET_ITEM(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 7, const_str_plain_X509_VERIFY_PARAM_set_hostflags); Py_INCREF(const_str_plain_X509_VERIFY_PARAM_set_hostflags);
    const_str_plain_SSL_get0_param = UNSTREAM_STRING(&constant_bin[ 594550 ], 14, 1);
    PyList_SET_ITEM(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 8, const_str_plain_SSL_get0_param); Py_INCREF(const_str_plain_SSL_get0_param);
    const_str_plain_X509_CHECK_FLAG_ALWAYS_CHECK_SUBJECT = UNSTREAM_STRING(&constant_bin[ 594564 ], 36, 1);
    PyList_SET_ITEM(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 9, const_str_plain_X509_CHECK_FLAG_ALWAYS_CHECK_SUBJECT); Py_INCREF(const_str_plain_X509_CHECK_FLAG_ALWAYS_CHECK_SUBJECT);
    const_str_plain_X509_CHECK_FLAG_NO_WILDCARDS = UNSTREAM_STRING(&constant_bin[ 594600 ], 28, 1);
    PyList_SET_ITEM(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 10, const_str_plain_X509_CHECK_FLAG_NO_WILDCARDS); Py_INCREF(const_str_plain_X509_CHECK_FLAG_NO_WILDCARDS);
    PyList_SET_ITEM(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 11, const_str_plain_X509_CHECK_FLAG_NO_PARTIAL_WILDCARDS); Py_INCREF(const_str_plain_X509_CHECK_FLAG_NO_PARTIAL_WILDCARDS);
    const_str_plain_X509_CHECK_FLAG_MULTI_LABEL_WILDCARDS = UNSTREAM_STRING(&constant_bin[ 594628 ], 37, 1);
    PyList_SET_ITEM(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 12, const_str_plain_X509_CHECK_FLAG_MULTI_LABEL_WILDCARDS); Py_INCREF(const_str_plain_X509_CHECK_FLAG_MULTI_LABEL_WILDCARDS);
    const_str_plain_X509_CHECK_FLAG_SINGLE_LABEL_SUBDOMAINS = UNSTREAM_STRING(&constant_bin[ 594665 ], 39, 1);
    PyList_SET_ITEM(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list, 13, const_str_plain_X509_CHECK_FLAG_SINGLE_LABEL_SUBDOMAINS); Py_INCREF(const_str_plain_X509_CHECK_FLAG_SINGLE_LABEL_SUBDOMAINS);
    const_list_9cf036427baefafa3a18cbc2378aecdb_list = PyList_New(10);
    const_str_plain_SSL_OP_NO_TLSv1_3 = UNSTREAM_STRING(&constant_bin[ 594704 ], 17, 1);
    PyList_SET_ITEM(const_list_9cf036427baefafa3a18cbc2378aecdb_list, 0, const_str_plain_SSL_OP_NO_TLSv1_3); Py_INCREF(const_str_plain_SSL_OP_NO_TLSv1_3);
    PyList_SET_ITEM(const_list_9cf036427baefafa3a18cbc2378aecdb_list, 1, const_str_plain_SSL_VERIFY_POST_HANDSHAKE); Py_INCREF(const_str_plain_SSL_VERIFY_POST_HANDSHAKE);
    const_str_plain_SSL_CTX_set_ciphersuites = UNSTREAM_STRING(&constant_bin[ 594721 ], 24, 1);
    PyList_SET_ITEM(const_list_9cf036427baefafa3a18cbc2378aecdb_list, 2, const_str_plain_SSL_CTX_set_ciphersuites); Py_INCREF(const_str_plain_SSL_CTX_set_ciphersuites);
    const_str_plain_SSL_verify_client_post_handshake = UNSTREAM_STRING(&constant_bin[ 594745 ], 32, 1);
    PyList_SET_ITEM(const_list_9cf036427baefafa3a18cbc2378aecdb_list, 3, const_str_plain_SSL_verify_client_post_handshake); Py_INCREF(const_str_plain_SSL_verify_client_post_handshake);
    const_str_plain_SSL_CTX_set_post_handshake_auth = UNSTREAM_STRING(&constant_bin[ 594777 ], 31, 1);
    PyList_SET_ITEM(const_list_9cf036427baefafa3a18cbc2378aecdb_list, 4, const_str_plain_SSL_CTX_set_post_handshake_auth); Py_INCREF(const_str_plain_SSL_CTX_set_post_handshake_auth);
    PyList_SET_ITEM(const_list_9cf036427baefafa3a18cbc2378aecdb_list, 5, const_str_plain_SSL_set_post_handshake_auth); Py_INCREF(const_str_plain_SSL_set_post_handshake_auth);
    const_str_plain_SSL_SESSION_get_max_early_data = UNSTREAM_STRING(&constant_bin[ 594808 ], 30, 1);
    PyList_SET_ITEM(const_list_9cf036427baefafa3a18cbc2378aecdb_list, 6, const_str_plain_SSL_SESSION_get_max_early_data); Py_INCREF(const_str_plain_SSL_SESSION_get_max_early_data);
    const_str_plain_SSL_write_early_data = UNSTREAM_STRING(&constant_bin[ 594838 ], 20, 1);
    PyList_SET_ITEM(const_list_9cf036427baefafa3a18cbc2378aecdb_list, 7, const_str_plain_SSL_write_early_data); Py_INCREF(const_str_plain_SSL_write_early_data);
    const_str_plain_SSL_read_early_data = UNSTREAM_STRING(&constant_bin[ 594858 ], 19, 1);
    PyList_SET_ITEM(const_list_9cf036427baefafa3a18cbc2378aecdb_list, 8, const_str_plain_SSL_read_early_data); Py_INCREF(const_str_plain_SSL_read_early_data);
    PyList_SET_ITEM(const_list_9cf036427baefafa3a18cbc2378aecdb_list, 9, const_str_plain_SSL_CTX_set_max_early_data); Py_INCREF(const_str_plain_SSL_CTX_set_max_early_data);
    const_str_plain_cryptography_has_get_server_tmp_key = UNSTREAM_STRING(&constant_bin[ 594877 ], 35, 1);
    const_str_plain_Cryptography_HAS_FIPS = UNSTREAM_STRING(&constant_bin[ 594912 ], 21, 1);
    const_str_digest_c8d4ed7f56a6990e5028c35f4876f90c = UNSTREAM_STRING(&constant_bin[ 594933 ], 50, 1);
    const_str_plain_SSLv3_server_method = UNSTREAM_STRING(&constant_bin[ 594983 ], 19, 1);
    const_list_03133653ae1f779dd1ae650a3a80ba30_list = PyList_New(3);
    PyList_SET_ITEM(const_list_03133653ae1f779dd1ae650a3a80ba30_list, 0, const_str_plain_SSL_CTX_add_client_custom_ext); Py_INCREF(const_str_plain_SSL_CTX_add_client_custom_ext);
    const_str_plain_SSL_CTX_add_server_custom_ext = UNSTREAM_STRING(&constant_bin[ 595002 ], 29, 1);
    PyList_SET_ITEM(const_list_03133653ae1f779dd1ae650a3a80ba30_list, 1, const_str_plain_SSL_CTX_add_server_custom_ext); Py_INCREF(const_str_plain_SSL_CTX_add_server_custom_ext);
    PyList_SET_ITEM(const_list_03133653ae1f779dd1ae650a3a80ba30_list, 2, const_str_plain_SSL_extension_supported); Py_INCREF(const_str_plain_SSL_extension_supported);
    const_list_70d66b11b8b83912e7ed175ae865dfed_list = PyList_New(2);
    const_str_plain_SSL_CTX_set1_sigalgs_list = UNSTREAM_STRING(&constant_bin[ 595031 ], 25, 1);
    PyList_SET_ITEM(const_list_70d66b11b8b83912e7ed175ae865dfed_list, 0, const_str_plain_SSL_CTX_set1_sigalgs_list); Py_INCREF(const_str_plain_SSL_CTX_set1_sigalgs_list);
    PyList_SET_ITEM(const_list_70d66b11b8b83912e7ed175ae865dfed_list, 1, const_str_plain_SSL_get_sigalgs); Py_INCREF(const_str_plain_SSL_get_sigalgs);
    const_str_plain_EC_POINT_set_compressed_coordinates_GF2m = UNSTREAM_STRING(&constant_bin[ 595056 ], 40, 1);
    const_str_plain_cryptography_has_102_verification_params = UNSTREAM_STRING(&constant_bin[ 595096 ], 40, 1);
    const_str_plain_Cryptography_HAS_TLS_ST = UNSTREAM_STRING(&constant_bin[ 595136 ], 23, 1);
    const_str_plain_SSL_COMP_get_name = UNSTREAM_STRING(&constant_bin[ 595159 ], 17, 1);
    const_str_plain_cryptography_has_ssl_sigalgs = UNSTREAM_STRING(&constant_bin[ 595176 ], 28, 1);
    const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list = PyList_New(2);
    const_str_plain_TLS_ST_BEFORE = UNSTREAM_STRING(&constant_bin[ 595204 ], 13, 1);
    PyList_SET_ITEM(const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list, 0, const_str_plain_TLS_ST_BEFORE); Py_INCREF(const_str_plain_TLS_ST_BEFORE);
    PyList_SET_ITEM(const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list, 1, const_str_plain_TLS_ST_OK); Py_INCREF(const_str_plain_TLS_ST_OK);
    const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list = PyList_New(2);
    PyList_SET_ITEM(const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list, 0, const_str_plain_EVP_DigestSign); Py_INCREF(const_str_plain_EVP_DigestSign);
    PyList_SET_ITEM(const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list, 1, const_str_plain_EVP_DigestVerify); Py_INCREF(const_str_plain_EVP_DigestVerify);
    const_str_plain_Cryptography_HAS_X25519 = UNSTREAM_STRING(&constant_bin[ 595217 ], 23, 1);
    const_list_e5729eb47bb2bb77d896a48e0ba4a292_list = PyList_New(3);
    PyList_SET_ITEM(const_list_e5729eb47bb2bb77d896a48e0ba4a292_list, 0, const_str_plain_SSL_CTX_use_psk_identity_hint); Py_INCREF(const_str_plain_SSL_CTX_use_psk_identity_hint);
    const_str_plain_SSL_CTX_set_psk_server_callback = UNSTREAM_STRING(&constant_bin[ 595240 ], 31, 1);
    PyList_SET_ITEM(const_list_e5729eb47bb2bb77d896a48e0ba4a292_list, 1, const_str_plain_SSL_CTX_set_psk_server_callback); Py_INCREF(const_str_plain_SSL_CTX_set_psk_server_callback);
    PyList_SET_ITEM(const_list_e5729eb47bb2bb77d896a48e0ba4a292_list, 2, const_str_plain_SSL_CTX_set_psk_client_callback); Py_INCREF(const_str_plain_SSL_CTX_set_psk_client_callback);
    const_list_str_plain_SSL_CTX_set_ecdh_auto_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_SSL_CTX_set_ecdh_auto_list, 0, const_str_plain_SSL_CTX_set_ecdh_auto); Py_INCREF(const_str_plain_SSL_CTX_set_ecdh_auto);
    const_str_plain_cryptography_has_tls_st = UNSTREAM_STRING(&constant_bin[ 595271 ], 23, 1);
    const_list_a92b37e3fd97e57634d2e2c4f15929c2_list = PyList_New(16);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 0, const_str_plain_SCT_get_version); Py_INCREF(const_str_plain_SCT_get_version);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 1, const_str_plain_SCT_get_log_entry_type); Py_INCREF(const_str_plain_SCT_get_log_entry_type);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 2, const_str_plain_SCT_get0_log_id); Py_INCREF(const_str_plain_SCT_get0_log_id);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 3, const_str_plain_SCT_get0_signature); Py_INCREF(const_str_plain_SCT_get0_signature);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 4, const_str_plain_SCT_get_timestamp); Py_INCREF(const_str_plain_SCT_get_timestamp);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 5, const_str_plain_SCT_set_source); Py_INCREF(const_str_plain_SCT_set_source);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 6, const_str_plain_sk_SCT_num); Py_INCREF(const_str_plain_sk_SCT_num);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 7, const_str_plain_sk_SCT_value); Py_INCREF(const_str_plain_sk_SCT_value);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 8, const_str_plain_SCT_LIST_free); Py_INCREF(const_str_plain_SCT_LIST_free);
    const_str_plain_sk_SCT_push = UNSTREAM_STRING(&constant_bin[ 595294 ], 11, 1);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 9, const_str_plain_sk_SCT_push); Py_INCREF(const_str_plain_sk_SCT_push);
    const_str_plain_sk_SCT_new_null = UNSTREAM_STRING(&constant_bin[ 595305 ], 15, 1);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 10, const_str_plain_sk_SCT_new_null); Py_INCREF(const_str_plain_sk_SCT_new_null);
    const_str_plain_SCT_new = UNSTREAM_STRING(&constant_bin[ 595308 ], 7, 1);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 11, const_str_plain_SCT_new); Py_INCREF(const_str_plain_SCT_new);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 12, const_str_plain_SCT_set1_log_id); Py_INCREF(const_str_plain_SCT_set1_log_id);
    const_str_plain_SCT_set_timestamp = UNSTREAM_STRING(&constant_bin[ 595320 ], 17, 1);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 13, const_str_plain_SCT_set_timestamp); Py_INCREF(const_str_plain_SCT_set_timestamp);
    const_str_plain_SCT_set_version = UNSTREAM_STRING(&constant_bin[ 595337 ], 15, 1);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 14, const_str_plain_SCT_set_version); Py_INCREF(const_str_plain_SCT_set_version);
    const_str_plain_SCT_set_log_entry_type = UNSTREAM_STRING(&constant_bin[ 595352 ], 22, 1);
    PyList_SET_ITEM(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list, 15, const_str_plain_SCT_set_log_entry_type); Py_INCREF(const_str_plain_SCT_set_log_entry_type);
    const_str_digest_89c6e3f07e56ca3212435467944ee8af = UNSTREAM_STRING(&constant_bin[ 595374 ], 42, 1);
    const_str_plain_Cryptography_HAS_CIPHER_DETAILS = UNSTREAM_STRING(&constant_bin[ 595416 ], 31, 1);
    const_list_29407ac2cfa5bacd5103ba17ced806aa_list = PyList_New(4);
    PyList_SET_ITEM(const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 0, const_str_plain_SSL_ST_BEFORE); Py_INCREF(const_str_plain_SSL_ST_BEFORE);
    PyList_SET_ITEM(const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 1, const_str_plain_SSL_ST_OK); Py_INCREF(const_str_plain_SSL_ST_OK);
    PyList_SET_ITEM(const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 2, const_str_plain_SSL_ST_INIT); Py_INCREF(const_str_plain_SSL_ST_INIT);
    PyList_SET_ITEM(const_list_29407ac2cfa5bacd5103ba17ced806aa_list, 3, const_str_plain_SSL_ST_RENEGOTIATE); Py_INCREF(const_str_plain_SSL_ST_RENEGOTIATE);
    const_str_plain_Cryptography_HAS_X448 = UNSTREAM_STRING(&constant_bin[ 595447 ], 21, 1);
    const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list, 0, const_str_plain_Cryptography_CRYPTO_set_mem_functions); Py_INCREF(const_str_plain_Cryptography_CRYPTO_set_mem_functions);
    const_str_plain_EC_POINT_set_affine_coordinates_GF2m = UNSTREAM_STRING(&constant_bin[ 595468 ], 36, 1);
    const_list_str_plain_EC_curve_nid2nist_list = PyList_New(1);
    const_str_plain_EC_curve_nid2nist = UNSTREAM_STRING(&constant_bin[ 595504 ], 17, 1);
    PyList_SET_ITEM(const_list_str_plain_EC_curve_nid2nist_list, 0, const_str_plain_EC_curve_nid2nist); Py_INCREF(const_str_plain_EC_curve_nid2nist);
    const_str_plain_cryptography_has_set_cert_cb = UNSTREAM_STRING(&constant_bin[ 595521 ], 28, 1);
    const_str_plain_SSL_get_current_expansion = UNSTREAM_STRING(&constant_bin[ 595549 ], 25, 1);
    const_list_531063e0f807f77ec21047a47441d048_list = PyList_New(5);
    const_str_plain_SSL_CIPHER_is_aead = UNSTREAM_STRING(&constant_bin[ 595574 ], 18, 1);
    PyList_SET_ITEM(const_list_531063e0f807f77ec21047a47441d048_list, 0, const_str_plain_SSL_CIPHER_is_aead); Py_INCREF(const_str_plain_SSL_CIPHER_is_aead);
    const_str_plain_SSL_CIPHER_get_cipher_nid = UNSTREAM_STRING(&constant_bin[ 595592 ], 25, 1);
    PyList_SET_ITEM(const_list_531063e0f807f77ec21047a47441d048_list, 1, const_str_plain_SSL_CIPHER_get_cipher_nid); Py_INCREF(const_str_plain_SSL_CIPHER_get_cipher_nid);
    const_str_plain_SSL_CIPHER_get_digest_nid = UNSTREAM_STRING(&constant_bin[ 595617 ], 25, 1);
    PyList_SET_ITEM(const_list_531063e0f807f77ec21047a47441d048_list, 2, const_str_plain_SSL_CIPHER_get_digest_nid); Py_INCREF(const_str_plain_SSL_CIPHER_get_digest_nid);
    PyList_SET_ITEM(const_list_531063e0f807f77ec21047a47441d048_list, 3, const_str_plain_SSL_CIPHER_get_kx_nid); Py_INCREF(const_str_plain_SSL_CIPHER_get_kx_nid);
    PyList_SET_ITEM(const_list_531063e0f807f77ec21047a47441d048_list, 4, const_str_plain_SSL_CIPHER_get_auth_nid); Py_INCREF(const_str_plain_SSL_CIPHER_get_auth_nid);
    const_str_plain_cryptography_has_x448 = UNSTREAM_STRING(&constant_bin[ 595642 ], 21, 1);
    const_list_str_plain_OPENSSL_cleanup_list = PyList_New(1);
    const_str_plain_OPENSSL_cleanup = UNSTREAM_STRING(&constant_bin[ 595663 ], 15, 1);
    PyList_SET_ITEM(const_list_str_plain_OPENSSL_cleanup_list, 0, const_str_plain_OPENSSL_cleanup); Py_INCREF(const_str_plain_OPENSSL_cleanup);
    const_str_plain_Cryptography_HAS_ED25519 = UNSTREAM_STRING(&constant_bin[ 595678 ], 24, 1);
    const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list, 0, const_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label); Py_INCREF(const_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label);
    const_str_plain_cryptography_has_ssl3_method = UNSTREAM_STRING(&constant_bin[ 595702 ], 28, 1);
    const_str_plain_cryptography_has_generic_dtls_method = UNSTREAM_STRING(&constant_bin[ 595730 ], 36, 1);
    const_str_plain_SSL_get_current_compression = UNSTREAM_STRING(&constant_bin[ 595766 ], 27, 1);
    const_str_digest_96e83fdb049b186bfc982a4b37cdf168 = UNSTREAM_STRING(&constant_bin[ 595793 ], 42, 1);
    const_list_8cf6be4317fa4d6df8e3c06784c94792_list = PyList_New(3);
    PyList_SET_ITEM(const_list_8cf6be4317fa4d6df8e3c06784c94792_list, 0, const_str_plain_EC_POINT_set_affine_coordinates_GF2m); Py_INCREF(const_str_plain_EC_POINT_set_affine_coordinates_GF2m);
    PyList_SET_ITEM(const_list_8cf6be4317fa4d6df8e3c06784c94792_list, 1, const_str_plain_EC_POINT_get_affine_coordinates_GF2m); Py_INCREF(const_str_plain_EC_POINT_get_affine_coordinates_GF2m);
    PyList_SET_ITEM(const_list_8cf6be4317fa4d6df8e3c06784c94792_list, 2, const_str_plain_EC_POINT_set_compressed_coordinates_GF2m); Py_INCREF(const_str_plain_EC_POINT_set_compressed_coordinates_GF2m);
    const_str_plain_cryptography_has_ec2m = UNSTREAM_STRING(&constant_bin[ 595835 ], 21, 1);
    const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9 = UNSTREAM_STRING(&constant_bin[ 595856 ], 42, 1);
    const_str_plain_cryptography_has_evp_pkey_dhx = UNSTREAM_STRING(&constant_bin[ 595898 ], 29, 1);
    const_str_plain_cryptography_has_locking_callbacks = UNSTREAM_STRING(&constant_bin[ 595927 ], 34, 1);
    const_str_plain_cryptography_has_rsa_oaep_md = UNSTREAM_STRING(&constant_bin[ 595961 ], 28, 1);
    const_str_plain_Cryptography_HAS_EC_1_0_2 = UNSTREAM_STRING(&constant_bin[ 595989 ], 25, 1);
    const_str_plain_Cryptography_HAS_TLSv1_3 = UNSTREAM_STRING(&constant_bin[ 596014 ], 24, 1);
    const_str_plain_Cryptography_HAS_SET_CERT_CB = UNSTREAM_STRING(&constant_bin[ 596038 ], 28, 1);
    const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list = PyList_New(2);
    PyList_SET_ITEM(const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list, 0, const_str_plain_NID_ED25519); Py_INCREF(const_str_plain_NID_ED25519);
    PyList_SET_ITEM(const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list, 1, const_str_plain_EVP_PKEY_ED25519); Py_INCREF(const_str_plain_EVP_PKEY_ED25519);
    const_str_plain_X509_V_FLAG_PARTIAL_CHAIN = UNSTREAM_STRING(&constant_bin[ 595810 ], 25, 1);
    const_str_digest_d2c4bd506cf66a4d1c7adfe4f312872c = UNSTREAM_STRING(&constant_bin[ 596066 ], 42, 1);
    const_list_99d2a9f3afa4bd958ff3177b2faaca12_list = PyList_New(3);
    PyList_SET_ITEM(const_list_99d2a9f3afa4bd958ff3177b2faaca12_list, 0, const_str_plain_SSLv3_method); Py_INCREF(const_str_plain_SSLv3_method);
    PyList_SET_ITEM(const_list_99d2a9f3afa4bd958ff3177b2faaca12_list, 1, const_str_plain_SSLv3_client_method); Py_INCREF(const_str_plain_SSLv3_client_method);
    PyList_SET_ITEM(const_list_99d2a9f3afa4bd958ff3177b2faaca12_list, 2, const_str_plain_SSLv3_server_method); Py_INCREF(const_str_plain_SSLv3_server_method);
    const_str_plain_cryptography_has_ed448 = UNSTREAM_STRING(&constant_bin[ 596108 ], 22, 1);
    const_str_plain_Cryptography_HAS_SET_ECDH_AUTO = UNSTREAM_STRING(&constant_bin[ 596130 ], 30, 1);
    const_str_plain_cryptography_has_scrypt = UNSTREAM_STRING(&constant_bin[ 596160 ], 23, 1);
    const_str_plain_cryptography_has_mem_functions = UNSTREAM_STRING(&constant_bin[ 596183 ], 30, 1);
    const_str_plain_Cryptography_HAS_RAW_KEY = UNSTREAM_STRING(&constant_bin[ 596213 ], 24, 1);
    const_str_plain_cryptography_has_ssl_st = UNSTREAM_STRING(&constant_bin[ 596237 ], 23, 1);
    const_str_plain_Cryptography_HAS_SSL3_METHOD = UNSTREAM_STRING(&constant_bin[ 596260 ], 28, 1);
    const_str_plain_cryptography_has_ec_1_0_2 = UNSTREAM_STRING(&constant_bin[ 596288 ], 25, 1);
    const_str_plain_Cryptography_HAS_GENERIC_DTLS_METHOD = UNSTREAM_STRING(&constant_bin[ 596313 ], 36, 1);
    const_str_plain_cryptography_has_compression = UNSTREAM_STRING(&constant_bin[ 596349 ], 28, 1);
    const_list_str_plain_Cryptography_setup_ssl_threads_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_Cryptography_setup_ssl_threads_list, 0, const_str_plain_Cryptography_setup_ssl_threads); Py_INCREF(const_str_plain_Cryptography_setup_ssl_threads);
    const_list_69b906847d25decb1cda42670e7e5241_list = PyList_New(4);
    PyList_SET_ITEM(const_list_69b906847d25decb1cda42670e7e5241_list, 0, const_str_plain_SSL_CTX_set_alpn_protos); Py_INCREF(const_str_plain_SSL_CTX_set_alpn_protos);
    PyList_SET_ITEM(const_list_69b906847d25decb1cda42670e7e5241_list, 1, const_str_plain_SSL_set_alpn_protos); Py_INCREF(const_str_plain_SSL_set_alpn_protos);
    PyList_SET_ITEM(const_list_69b906847d25decb1cda42670e7e5241_list, 2, const_str_plain_SSL_CTX_set_alpn_select_cb); Py_INCREF(const_str_plain_SSL_CTX_set_alpn_select_cb);
    PyList_SET_ITEM(const_list_69b906847d25decb1cda42670e7e5241_list, 3, const_str_plain_SSL_get0_alpn_selected); Py_INCREF(const_str_plain_SSL_get0_alpn_selected);
    const_str_digest_b2405d2434f1275e2b8933b43c529fbe = UNSTREAM_STRING(&constant_bin[ 596377 ], 42, 1);
    const_str_plain_Cryptography_HAS_EVP_DIGESTFINAL_XOF = UNSTREAM_STRING(&constant_bin[ 596419 ], 36, 1);
    const_str_digest_38eba4904dfc59e8c0458109674fe900 = UNSTREAM_STRING(&constant_bin[ 596455 ], 50, 1);
    const_str_plain_cryptography_has_engine = UNSTREAM_STRING(&constant_bin[ 596505 ], 23, 1);
    const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list, 0, const_str_plain_X509_V_FLAG_PARTIAL_CHAIN); Py_INCREF(const_str_plain_X509_V_FLAG_PARTIAL_CHAIN);
    const_str_plain_Cryptography_HAS_SCT = UNSTREAM_STRING(&constant_bin[ 596528 ], 20, 1);
    const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list, 0, const_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md); Py_INCREF(const_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md);
    const_list_136332fc21a01754e44f9a06545f3713_list = PyList_New(2);
    PyList_SET_ITEM(const_list_136332fc21a01754e44f9a06545f3713_list, 0, const_str_plain_EVP_PKEY_get1_tls_encodedpoint); Py_INCREF(const_str_plain_EVP_PKEY_get1_tls_encodedpoint);
    PyList_SET_ITEM(const_list_136332fc21a01754e44f9a06545f3713_list, 1, const_str_plain_EVP_PKEY_set1_tls_encodedpoint); Py_INCREF(const_str_plain_EVP_PKEY_set1_tls_encodedpoint);
    const_str_plain_cryptography_has_openssl_cleanup = UNSTREAM_STRING(&constant_bin[ 596548 ], 32, 1);
    const_str_digest_8535fc31daf81b5f04208070d851f01e = UNSTREAM_STRING(&constant_bin[ 596580 ], 44, 1);
    const_str_plain_Cryptography_HAS_COMPRESSION = UNSTREAM_STRING(&constant_bin[ 596624 ], 28, 1);
    const_list_str_plain_EVP_DigestFinalXOF_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_EVP_DigestFinalXOF_list, 0, const_str_plain_EVP_DigestFinalXOF); Py_INCREF(const_str_plain_EVP_DigestFinalXOF);
    const_str_digest_08906fb95f8ef4a836f252aa7b12b1cf = UNSTREAM_STRING(&constant_bin[ 596652 ], 47, 1);
    const_str_plain_Cryptography_HAS_MEM_FUNCTIONS = UNSTREAM_STRING(&constant_bin[ 596699 ], 30, 1);
    const_list_f501d0e9bfb78a701032fc968ff559f6_list = PyList_New(3);
    PyList_SET_ITEM(const_list_f501d0e9bfb78a701032fc968ff559f6_list, 0, const_str_plain_SSL_get_current_compression); Py_INCREF(const_str_plain_SSL_get_current_compression);
    PyList_SET_ITEM(const_list_f501d0e9bfb78a701032fc968ff559f6_list, 1, const_str_plain_SSL_get_current_expansion); Py_INCREF(const_str_plain_SSL_get_current_expansion);
    PyList_SET_ITEM(const_list_f501d0e9bfb78a701032fc968ff559f6_list, 2, const_str_plain_SSL_COMP_get_name); Py_INCREF(const_str_plain_SSL_COMP_get_name);
    const_str_plain_cryptography_has_sct = UNSTREAM_STRING(&constant_bin[ 596729 ], 20, 1);
    const_list_d0eb343c74fa9d778f192626e2b9d53e_list = PyList_New(10);
    PyList_SET_ITEM(const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 0, const_str_plain_ENGINE_by_id); Py_INCREF(const_str_plain_ENGINE_by_id);
    PyList_SET_ITEM(const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 1, const_str_plain_ENGINE_init); Py_INCREF(const_str_plain_ENGINE_init);
    PyList_SET_ITEM(const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 2, const_str_plain_ENGINE_finish); Py_INCREF(const_str_plain_ENGINE_finish);
    PyList_SET_ITEM(const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 3, const_str_plain_ENGINE_get_default_RAND); Py_INCREF(const_str_plain_ENGINE_get_default_RAND);
    PyList_SET_ITEM(const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 4, const_str_plain_ENGINE_set_default_RAND); Py_INCREF(const_str_plain_ENGINE_set_default_RAND);
    PyList_SET_ITEM(const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 5, const_str_plain_ENGINE_unregister_RAND); Py_INCREF(const_str_plain_ENGINE_unregister_RAND);
    PyList_SET_ITEM(const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 6, const_str_plain_ENGINE_ctrl_cmd); Py_INCREF(const_str_plain_ENGINE_ctrl_cmd);
    PyList_SET_ITEM(const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 7, const_str_plain_ENGINE_free); Py_INCREF(const_str_plain_ENGINE_free);
    PyList_SET_ITEM(const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 8, const_str_plain_ENGINE_get_name); Py_INCREF(const_str_plain_ENGINE_get_name);
    PyList_SET_ITEM(const_list_d0eb343c74fa9d778f192626e2b9d53e_list, 9, const_str_plain_Cryptography_add_osrandom_engine); Py_INCREF(const_str_plain_Cryptography_add_osrandom_engine);
    const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33 = UNSTREAM_STRING(&constant_bin[ 596749 ], 42, 1);
    const_str_plain_cryptography_has_set_ecdh_auto = UNSTREAM_STRING(&constant_bin[ 596791 ], 30, 1);
    const_str_plain_cryptography_has_alpn = UNSTREAM_STRING(&constant_bin[ 596821 ], 21, 1);
    const_str_plain_cryptography_has_x25519 = UNSTREAM_STRING(&constant_bin[ 596842 ], 23, 1);
    const_list_str_plain_EVP_PBE_scrypt_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_EVP_PBE_scrypt_list, 0, const_str_plain_EVP_PBE_scrypt); Py_INCREF(const_str_plain_EVP_PBE_scrypt);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$bindings$openssl$_conditional(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4c3ff03ee35c00ebfbda987537461af7;
static PyCodeObject *codeobj_e5811740088bd93e9990af77defd14b3;
static PyCodeObject *codeobj_219a284f627af35dff17077ea6906c94;
static PyCodeObject *codeobj_02d21b07ccf14363c50096f886ef1b0e;
static PyCodeObject *codeobj_723032daa589b129369b55b58a7be5a2;
static PyCodeObject *codeobj_6719a4d39addbdf9ed6f424eb2791262;
static PyCodeObject *codeobj_76fdf4a7934bba9851c617af077d0b23;
static PyCodeObject *codeobj_a940bfcdc2c708a21598a941867e36cf;
static PyCodeObject *codeobj_bd43bad068f9145b34a43f4b8408beb3;
static PyCodeObject *codeobj_cf4474a6beaccbae80ccd064770ac3a0;
static PyCodeObject *codeobj_4bf8c9b82ac74d36564a0c2d0e4cb8e4;
static PyCodeObject *codeobj_a8e16558d0d836c15566306d757b4034;
static PyCodeObject *codeobj_bb4a3f6e9587a304a04f827b99553c6b;
static PyCodeObject *codeobj_cc550a4013ddd615c54fcf47da886acc;
static PyCodeObject *codeobj_91b63716cd8509db2b26bdbe0249b2a0;
static PyCodeObject *codeobj_2ba87d8d4ac19a9695b3966c07c0feeb;
static PyCodeObject *codeobj_604fe8ac3bcc03ba36828470c12544ab;
static PyCodeObject *codeobj_31815bd3d27985b62b3f1f706157542f;
static PyCodeObject *codeobj_575d6bc405d133558b90df57aa9982c1;
static PyCodeObject *codeobj_af1ee90a080bfbec2feeb60f76e407f4;
static PyCodeObject *codeobj_0c894901bb0a872f9ae66b27d197fec6;
static PyCodeObject *codeobj_79bfca477f37250f7d00b8c3ce6b801d;
static PyCodeObject *codeobj_01d9d2522c46d430e29d25c46dfc883c;
static PyCodeObject *codeobj_e9892c38a814c3eee103a85c511f1b6b;
static PyCodeObject *codeobj_5e03bc67724c3f21b59cb8901c7d10cb;
static PyCodeObject *codeobj_a6adcb93415faca95e76c00e4e623940;
static PyCodeObject *codeobj_dcc8c6eadbf96b6161148f35083d6cbb;
static PyCodeObject *codeobj_1f80a38311250cca1e3f63dd3b513b7a;
static PyCodeObject *codeobj_0898f0abb250e994686db1b0285e43aa;
static PyCodeObject *codeobj_cb2ecebd0b287b306ed1b35bff4785f9;
static PyCodeObject *codeobj_31d5d9a538948bf71ad0f8362de35d88;
static PyCodeObject *codeobj_3c77dbdc39b9ba1c83d5ba8347a122e5;
static PyCodeObject *codeobj_dc8d39f61869aba92aa9a56cb3108bb5;
static PyCodeObject *codeobj_6f033c60bc2ebb1dd040e92d29d9713b;
static PyCodeObject *codeobj_6aabd37b2773376f6e441bd57b30ceaf;
static PyCodeObject *codeobj_a5471d3fc403ba88145178d1d83d5b2c;
static PyCodeObject *codeobj_1b7f1de256ff0759095a7e5bfbf1f153;
static PyCodeObject *codeobj_9008711ba92b9ac26944f47fcc9a1e32;
static PyCodeObject *codeobj_de2ae5198c8f43eb5963e49a40825307;
static PyCodeObject *codeobj_eb545c2a9c911b78dbea8c507cac45ff;
static PyCodeObject *codeobj_f7ef7be9b792f6c38e3ec7563488e021;
static PyCodeObject *codeobj_dbde61310cecb6cff583f5e3b51362bd;
static PyCodeObject *codeobj_7851c27211beff4f6c51d9383d741239;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_9a0160a95e0c209c6b7e5d38666a9d6e);
    codeobj_4c3ff03ee35c00ebfbda987537461af7 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_fafbfe30544ba42854ed0b86baac5f84, const_tuple_empty, 0, 0, 0);
    codeobj_e5811740088bd93e9990af77defd14b3 = MAKE_CODEOBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_0134e31627bb74f9df2edcd82a96ece3, const_tuple_empty, 0, 0, 0);
    codeobj_219a284f627af35dff17077ea6906c94 = MAKE_CODEOBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_102_verification_params, const_tuple_empty, 0, 0, 0);
    codeobj_02d21b07ccf14363c50096f886ef1b0e = MAKE_CODEOBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_110_verification_params, const_tuple_empty, 0, 0, 0);
    codeobj_723032daa589b129369b55b58a7be5a2 = MAKE_CODEOBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_alpn, const_tuple_empty, 0, 0, 0);
    codeobj_6719a4d39addbdf9ed6f424eb2791262 = MAKE_CODEOBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_cipher_details, const_tuple_empty, 0, 0, 0);
    codeobj_76fdf4a7934bba9851c617af077d0b23 = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_compression, const_tuple_empty, 0, 0, 0);
    codeobj_a940bfcdc2c708a21598a941867e36cf = MAKE_CODEOBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_custom_ext, const_tuple_empty, 0, 0, 0);
    codeobj_bd43bad068f9145b34a43f4b8408beb3 = MAKE_CODEOBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_ec2m, const_tuple_empty, 0, 0, 0);
    codeobj_cf4474a6beaccbae80ccd064770ac3a0 = MAKE_CODEOBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_ec_1_0_2, const_tuple_empty, 0, 0, 0);
    codeobj_4bf8c9b82ac74d36564a0c2d0e4cb8e4 = MAKE_CODEOBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_ed25519, const_tuple_empty, 0, 0, 0);
    codeobj_a8e16558d0d836c15566306d757b4034 = MAKE_CODEOBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_ed448, const_tuple_empty, 0, 0, 0);
    codeobj_bb4a3f6e9587a304a04f827b99553c6b = MAKE_CODEOBJECT(module_filename_obj, 339, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_engine, const_tuple_empty, 0, 0, 0);
    codeobj_cc550a4013ddd615c54fcf47da886acc = MAKE_CODEOBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_evp_digestfinal_xof, const_tuple_empty, 0, 0, 0);
    codeobj_91b63716cd8509db2b26bdbe0249b2a0 = MAKE_CODEOBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_evp_pkey_dhx, const_tuple_empty, 0, 0, 0);
    codeobj_2ba87d8d4ac19a9695b3966c07c0feeb = MAKE_CODEOBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_38eba4904dfc59e8c0458109674fe900, const_tuple_empty, 0, 0, 0);
    codeobj_604fe8ac3bcc03ba36828470c12544ab = MAKE_CODEOBJECT(module_filename_obj, 333, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_8535fc31daf81b5f04208070d851f01e, const_tuple_empty, 0, 0, 0);
    codeobj_31815bd3d27985b62b3f1f706157542f = MAKE_CODEOBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_fips, const_tuple_empty, 0, 0, 0);
    codeobj_575d6bc405d133558b90df57aa9982c1 = MAKE_CODEOBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_generic_dtls_method, const_tuple_empty, 0, 0, 0);
    codeobj_af1ee90a080bfbec2feeb60f76e407f4 = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_get_server_tmp_key, const_tuple_empty, 0, 0, 0);
    codeobj_0c894901bb0a872f9ae66b27d197fec6 = MAKE_CODEOBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_locking_callbacks, const_tuple_empty, 0, 0, 0);
    codeobj_79bfca477f37250f7d00b8c3ce6b801d = MAKE_CODEOBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_mem_functions, const_tuple_empty, 0, 0, 0);
    codeobj_01d9d2522c46d430e29d25c46dfc883c = MAKE_CODEOBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54, const_tuple_empty, 0, 0, 0);
    codeobj_e9892c38a814c3eee103a85c511f1b6b = MAKE_CODEOBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_openssl_cleanup, const_tuple_empty, 0, 0, 0);
    codeobj_5e03bc67724c3f21b59cb8901c7d10cb = MAKE_CODEOBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_psk, const_tuple_empty, 0, 0, 0);
    codeobj_a6adcb93415faca95e76c00e4e623940 = MAKE_CODEOBJECT(module_filename_obj, 324, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_raw_key, const_tuple_empty, 0, 0, 0);
    codeobj_dcc8c6eadbf96b6161148f35083d6cbb = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_rsa_oaep_label, const_tuple_empty, 0, 0, 0);
    codeobj_1f80a38311250cca1e3f63dd3b513b7a = MAKE_CODEOBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_rsa_oaep_md, const_tuple_empty, 0, 0, 0);
    codeobj_0898f0abb250e994686db1b0285e43aa = MAKE_CODEOBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9, const_tuple_empty, 0, 0, 0);
    codeobj_cb2ecebd0b287b306ed1b35bff4785f9 = MAKE_CODEOBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_scrypt, const_tuple_empty, 0, 0, 0);
    codeobj_31d5d9a538948bf71ad0f8362de35d88 = MAKE_CODEOBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_sct, const_tuple_empty, 0, 0, 0);
    codeobj_3c77dbdc39b9ba1c83d5ba8347a122e5 = MAKE_CODEOBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_set_cert_cb, const_tuple_empty, 0, 0, 0);
    codeobj_dc8d39f61869aba92aa9a56cb3108bb5 = MAKE_CODEOBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_set_ecdh_auto, const_tuple_empty, 0, 0, 0);
    codeobj_6f033c60bc2ebb1dd040e92d29d9713b = MAKE_CODEOBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_ssl3_method, const_tuple_empty, 0, 0, 0);
    codeobj_6aabd37b2773376f6e441bd57b30ceaf = MAKE_CODEOBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_ssl_sigalgs, const_tuple_empty, 0, 0, 0);
    codeobj_a5471d3fc403ba88145178d1d83d5b2c = MAKE_CODEOBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_ssl_st, const_tuple_empty, 0, 0, 0);
    codeobj_1b7f1de256ff0759095a7e5bfbf1f153 = MAKE_CODEOBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_tls_st, const_tuple_empty, 0, 0, 0);
    codeobj_9008711ba92b9ac26944f47fcc9a1e32 = MAKE_CODEOBJECT(module_filename_obj, 309, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_tlsv13, const_tuple_empty, 0, 0, 0);
    codeobj_de2ae5198c8f43eb5963e49a40825307 = MAKE_CODEOBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_x25519, const_tuple_empty, 0, 0, 0);
    codeobj_eb545c2a9c911b78dbea8c507cac45ff = MAKE_CODEOBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cryptography_has_x448, const_tuple_empty, 0, 0, 0);
    codeobj_f7ef7be9b792f6c38e3ec7563488e021 = MAKE_CODEOBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33, const_tuple_empty, 0, 0, 0);
    codeobj_dbde61310cecb6cff583f5e3b51362bd = MAKE_CODEOBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_89c6e3f07e56ca3212435467944ee8af, const_tuple_empty, 0, 0, 0);
    codeobj_7851c27211beff4f6c51d9383d741239 = MAKE_CODEOBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_b2405d2434f1275e2b8933b43c529fbe, const_tuple_empty, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_oneshot_evp_digest_sign_verify();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_evp_digestfinal_xof();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_pkey_get_set_tls_encodedpoint();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_fips();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_ssl_sigalgs();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_psk();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_custom_ext();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_openssl_cleanup();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_cipher_details();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_tlsv13();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_raw_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_evp_r_memory_limit_exceeded();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_engine();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression();


// The module function definitions.
static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_8cf6be4317fa4d6df8e3c06784c94792_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_EC_curve_nid2nist_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_SSL_CTX_set_ecdh_auto_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_RSA_R_PKCS_DECODING_ERROR_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_EVP_PKEY_CTX_set_rsa_oaep_md_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_EVP_PKEY_CTX_set0_rsa_oaep_label_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_99d2a9f3afa4bd958ff3177b2faaca12_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_69b906847d25decb1cda42670e7e5241_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_f501d0e9bfb78a701032fc968ff559f6_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_SSL_get_server_tmp_key_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_86c40a5c21cefd9f6af8769ff1175caf_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_89151f5d8dec03fbd2ef0ed4ab9715c0_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_X509_CHECK_FLAG_NEVER_CHECK_SUBJECT_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_X509_V_FLAG_TRUSTED_FIRST_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_X509_V_FLAG_PARTIAL_CHAIN_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_SSL_CTX_set_cert_cb_str_plain_SSL_set_cert_cb_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_29407ac2cfa5bacd5103ba17ced806aa_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_TLS_ST_BEFORE_str_plain_TLS_ST_OK_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_Cryptography_setup_ssl_threads_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_EVP_PBE_scrypt_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_a2ccfb1541ef6968650ac43562856e84_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_EVP_PKEY_DHX_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_Cryptography_CRYPTO_set_mem_functions_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_a92b37e3fd97e57634d2e2c4f15929c2_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_2b0156be132bced5637961a9aa48cb51_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_EVP_PKEY_X25519_str_plain_NID_X25519_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_EVP_PKEY_X448_str_plain_NID_X448_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_EVP_PKEY_ED448_str_plain_NID_ED448_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_NID_ED25519_str_plain_EVP_PKEY_ED25519_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_oneshot_evp_digest_sign_verify(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_EVP_DigestSign_str_plain_EVP_DigestVerify_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_oneshot_evp_digest_sign_verify);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_evp_digestfinal_xof(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_EVP_DigestFinalXOF_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_evp_digestfinal_xof);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_pkey_get_set_tls_encodedpoint(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_136332fc21a01754e44f9a06545f3713_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_pkey_get_set_tls_encodedpoint);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_fips(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_FIPS_set_mode_str_plain_FIPS_mode_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_fips);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_ssl_sigalgs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_70d66b11b8b83912e7ed175ae865dfed_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_ssl_sigalgs);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_psk(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_e5729eb47bb2bb77d896a48e0ba4a292_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_psk);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_custom_ext(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_03133653ae1f779dd1ae650a3a80ba30_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_custom_ext);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_openssl_cleanup(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_OPENSSL_cleanup_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_openssl_cleanup);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_cipher_details(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_531063e0f807f77ec21047a47441d048_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_cipher_details);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_tlsv13(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_9cf036427baefafa3a18cbc2378aecdb_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_tlsv13);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_raw_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_8637a8e096edeccc96cf2940262bfd01_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_raw_key);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_evp_r_memory_limit_exceeded(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_str_plain_EVP_R_MEMORY_LIMIT_EXCEEDED_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_evp_r_memory_limit_exceeded);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_engine(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(const_list_d0eb343c74fa9d778f192626e2b9d53e_list);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_engine);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key,
        const_str_plain_cryptography_has_get_server_tmp_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_af1ee90a080bfbec2feeb60f76e407f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes,
        const_str_digest_0134e31627bb74f9df2edcd82a96ece3,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e5811740088bd93e9990af77defd14b3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params,
        const_str_plain_cryptography_has_102_verification_params,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_219a284f627af35dff17077ea6906c94,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params,
        const_str_plain_cryptography_has_110_verification_params,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_02d21b07ccf14363c50096f886ef1b0e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first,
        const_str_digest_b2405d2434f1275e2b8933b43c529fbe,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7851c27211beff4f6c51d9383d741239,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain,
        const_str_digest_89c6e3f07e56ca3212435467944ee8af,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dbde61310cecb6cff583f5e3b51362bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb,
        const_str_plain_cryptography_has_set_cert_cb,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3c77dbdc39b9ba1c83d5ba8347a122e5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st,
        const_str_plain_cryptography_has_ssl_st,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a5471d3fc403ba88145178d1d83d5b2c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st,
        const_str_plain_cryptography_has_tls_st,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1b7f1de256ff0759095a7e5bfbf1f153,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks,
        const_str_plain_cryptography_has_locking_callbacks,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0c894901bb0a872f9ae66b27d197fec6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m,
        const_str_plain_cryptography_has_ec2m,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bd43bad068f9145b34a43f4b8408beb3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt,
        const_str_plain_cryptography_has_scrypt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cb2ecebd0b287b306ed1b35bff4785f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method,
        const_str_plain_cryptography_has_generic_dtls_method,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_575d6bc405d133558b90df57aa9982c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx,
        const_str_plain_cryptography_has_evp_pkey_dhx,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_91b63716cd8509db2b26bdbe0249b2a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions,
        const_str_plain_cryptography_has_mem_functions,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_79bfca477f37250f7d00b8c3ce6b801d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct,
        const_str_plain_cryptography_has_sct,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_31d5d9a538948bf71ad0f8362de35d88,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer,
        const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f7ef7be9b792f6c38e3ec7563488e021,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519,
        const_str_plain_cryptography_has_x25519,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_de2ae5198c8f43eb5963e49a40825307,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448,
        const_str_plain_cryptography_has_x448,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eb545c2a9c911b78dbea8c507cac45ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448,
        const_str_plain_cryptography_has_ed448,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a8e16558d0d836c15566306d757b4034,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519,
        const_str_plain_cryptography_has_ed25519,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4bf8c9b82ac74d36564a0c2d0e4cb8e4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2,
        const_str_plain_cryptography_has_ec_1_0_2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cf4474a6beaccbae80ccd064770ac3a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_oneshot_evp_digest_sign_verify() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_oneshot_evp_digest_sign_verify,
        const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_01d9d2522c46d430e29d25c46dfc883c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_evp_digestfinal_xof() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_evp_digestfinal_xof,
        const_str_plain_cryptography_has_evp_digestfinal_xof,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cc550a4013ddd615c54fcf47da886acc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_pkey_get_set_tls_encodedpoint() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_pkey_get_set_tls_encodedpoint,
        const_str_digest_38eba4904dfc59e8c0458109674fe900,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2ba87d8d4ac19a9695b3966c07c0feeb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_fips() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_fips,
        const_str_plain_cryptography_has_fips,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_31815bd3d27985b62b3f1f706157542f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_ssl_sigalgs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_ssl_sigalgs,
        const_str_plain_cryptography_has_ssl_sigalgs,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6aabd37b2773376f6e441bd57b30ceaf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_psk() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_psk,
        const_str_plain_cryptography_has_psk,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5e03bc67724c3f21b59cb8901c7d10cb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_custom_ext() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_custom_ext,
        const_str_plain_cryptography_has_custom_ext,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a940bfcdc2c708a21598a941867e36cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_openssl_cleanup() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_openssl_cleanup,
        const_str_plain_cryptography_has_openssl_cleanup,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e9892c38a814c3eee103a85c511f1b6b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_cipher_details() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_cipher_details,
        const_str_plain_cryptography_has_cipher_details,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6719a4d39addbdf9ed6f424eb2791262,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_tlsv13() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_tlsv13,
        const_str_plain_cryptography_has_tlsv13,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9008711ba92b9ac26944f47fcc9a1e32,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto,
        const_str_plain_cryptography_has_set_ecdh_auto,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dc8d39f61869aba92aa9a56cb3108bb5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_raw_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_raw_key,
        const_str_plain_cryptography_has_raw_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a6adcb93415faca95e76c00e4e623940,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_evp_r_memory_limit_exceeded() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_evp_r_memory_limit_exceeded,
        const_str_digest_8535fc31daf81b5f04208070d851f01e,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_604fe8ac3bcc03ba36828470c12544ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_engine() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_engine,
        const_str_plain_cryptography_has_engine,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bb4a3f6e9587a304a04f827b99553c6b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error,
        const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0898f0abb250e994686db1b0285e43aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md,
        const_str_plain_cryptography_has_rsa_oaep_md,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1f80a38311250cca1e3f63dd3b513b7a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label,
        const_str_plain_cryptography_has_rsa_oaep_label,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dcc8c6eadbf96b6161148f35083d6cbb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method,
        const_str_plain_cryptography_has_ssl3_method,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6f033c60bc2ebb1dd040e92d29d9713b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn,
        const_str_plain_cryptography_has_alpn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_723032daa589b129369b55b58a7be5a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression,
        const_str_plain_cryptography_has_compression,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_76fdf4a7934bba9851c617af077d0b23,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$bindings$openssl$_conditional =
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

function_impl_code functable_cryptography$hazmat$bindings$openssl$_conditional[] = {
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_oneshot_evp_digest_sign_verify,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_evp_digestfinal_xof,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_pkey_get_set_tls_encodedpoint,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_fips,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_ssl_sigalgs,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_psk,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_custom_ext,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_openssl_cleanup,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_cipher_details,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_tlsv13,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_raw_key,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_evp_r_memory_limit_exceeded,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_engine,
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

    function_impl_code *current = functable_cryptography$hazmat$bindings$openssl$_conditional;
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

    if (offset > sizeof(functable_cryptography$hazmat$bindings$openssl$_conditional) || offset < 0) {
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
        functable_cryptography$hazmat$bindings$openssl$_conditional[offset],
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
        module_cryptography$hazmat$bindings$openssl$_conditional,
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
PyObject *modulecode_cryptography$hazmat$bindings$openssl$_conditional(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_cryptography$hazmat$bindings$openssl$_conditional;
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
    PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$bindings$openssl$_conditional\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$bindings$openssl$_conditional = Py_InitModule4(
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
    mdef_cryptography$hazmat$bindings$openssl$_conditional.m_name = module_full_name;
    module_cryptography$hazmat$bindings$openssl$_conditional = PyModule_Create(&mdef_cryptography$hazmat$bindings$openssl$_conditional);
#endif

    moduledict_cryptography$hazmat$bindings$openssl$_conditional = MODULE_DICT(module_cryptography$hazmat$bindings$openssl$_conditional);

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
        moduledict_cryptography$hazmat$bindings$openssl$_conditional,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$bindings$openssl$_conditional);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_cryptography$hazmat$bindings$openssl$_conditional);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_4c3ff03ee35c00ebfbda987537461af7;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
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
    frame_4c3ff03ee35c00ebfbda987537461af7 = MAKE_MODULE_FRAME(codeobj_4c3ff03ee35c00ebfbda987537461af7, module_cryptography$hazmat$bindings$openssl$_conditional);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_4c3ff03ee35c00ebfbda987537461af7);
    assert(Py_REFCNT(frame_4c3ff03ee35c00ebfbda987537461af7) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_absolute_import);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4);
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


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_print_function);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6);
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c3ff03ee35c00ebfbda987537461af7);
#endif
    popFrameStack();

    assertFrameObject(frame_4c3ff03ee35c00ebfbda987537461af7);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c3ff03ee35c00ebfbda987537461af7);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_4c3ff03ee35c00ebfbda987537461af7, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_4c3ff03ee35c00ebfbda987537461af7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c3ff03ee35c00ebfbda987537461af7, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_1_cryptography_has_ec2m();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec2m, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_2_cryptography_has_ec_1_0_2();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec_1_0_2, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_3_cryptography_has_set_ecdh_auto();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_ecdh_auto, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_4_cryptography_has_rsa_r_pkcs_decoding_error();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_5_cryptography_has_rsa_oaep_md();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_md, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_6_cryptography_has_rsa_oaep_label();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_label, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_7_cryptography_has_ssl3_method();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl3_method, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_8_cryptography_has_alpn();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_alpn, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_9_cryptography_has_compression();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_compression, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_10_cryptography_has_get_server_tmp_key();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_get_server_tmp_key, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_11_cryptography_has_102_verification_error_codes();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_0134e31627bb74f9df2edcd82a96ece3, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_12_cryptography_has_102_verification_params();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_102_verification_params, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_13_cryptography_has_110_verification_params();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_110_verification_params, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_14_cryptography_has_x509_v_flag_trusted_first();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b2405d2434f1275e2b8933b43c529fbe, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_15_cryptography_has_x509_v_flag_partial_chain();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_89c6e3f07e56ca3212435467944ee8af, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_16_cryptography_has_set_cert_cb();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_cert_cb, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_17_cryptography_has_ssl_st();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_st, tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_18_cryptography_has_tls_st();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_tls_st, tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_19_cryptography_has_locking_callbacks();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_locking_callbacks, tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_20_cryptography_has_scrypt();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_scrypt, tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_21_cryptography_has_generic_dtls_method();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_generic_dtls_method, tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_22_cryptography_has_evp_pkey_dhx();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_pkey_dhx, tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_23_cryptography_has_mem_functions();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_mem_functions, tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_24_cryptography_has_sct();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_sct, tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_25_cryptography_has_x509_store_ctx_get_issuer();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33, tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_26_cryptography_has_x25519();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_x25519, tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_27_cryptography_has_x448();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_x448, tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_28_cryptography_has_ed448();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed448, tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_29_cryptography_has_ed25519();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed25519, tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_30_cryptography_has_oneshot_evp_digest_sign_verify();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54, tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_31_cryptography_has_evp_digestfinal_xof();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_digestfinal_xof, tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_32_cryptography_has_evp_pkey_get_set_tls_encodedpoint();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_38eba4904dfc59e8c0458109674fe900, tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_33_cryptography_has_fips();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_fips, tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_34_cryptography_has_ssl_sigalgs();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_sigalgs, tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_35_cryptography_has_psk();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_psk, tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_36_cryptography_has_custom_ext();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_custom_ext, tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_37_cryptography_has_openssl_cleanup();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_openssl_cleanup, tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_38_cryptography_has_cipher_details();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_cipher_details, tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_39_cryptography_has_tlsv13();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_tlsv13, tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_40_cryptography_has_raw_key();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_raw_key, tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_41_cryptography_has_evp_r_memory_limit_exceeded();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_8535fc31daf81b5f04208070d851f01e, tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function_42_cryptography_has_engine();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_engine, tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_dict_key_30;
        PyObject *tmp_dict_value_30;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_dict_key_31;
        PyObject *tmp_dict_value_31;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_dict_key_32;
        PyObject *tmp_dict_value_32;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_dict_key_33;
        PyObject *tmp_dict_value_33;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_dict_key_34;
        PyObject *tmp_dict_value_34;
        PyObject *tmp_mvar_value_34;
        PyObject *tmp_dict_key_35;
        PyObject *tmp_dict_value_35;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_dict_key_36;
        PyObject *tmp_dict_value_36;
        PyObject *tmp_mvar_value_36;
        PyObject *tmp_dict_key_37;
        PyObject *tmp_dict_value_37;
        PyObject *tmp_mvar_value_37;
        PyObject *tmp_dict_key_38;
        PyObject *tmp_dict_value_38;
        PyObject *tmp_mvar_value_38;
        PyObject *tmp_dict_key_39;
        PyObject *tmp_dict_value_39;
        PyObject *tmp_mvar_value_39;
        PyObject *tmp_dict_key_40;
        PyObject *tmp_dict_value_40;
        PyObject *tmp_mvar_value_40;
        PyObject *tmp_dict_key_41;
        PyObject *tmp_dict_value_41;
        PyObject *tmp_mvar_value_41;
        PyObject *tmp_dict_key_42;
        PyObject *tmp_dict_value_42;
        PyObject *tmp_mvar_value_42;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec2m);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec2m);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_dict_value_1 = tmp_mvar_value_1;
        tmp_dict_key_1 = const_str_plain_Cryptography_HAS_EC2M;
        tmp_assign_source_49 = _PyDict_NewPresized( 42 );
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec_1_0_2);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ec_1_0_2);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_dict_value_2 = tmp_mvar_value_2;
        tmp_dict_key_2 = const_str_plain_Cryptography_HAS_EC_1_0_2;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_ecdh_auto);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_ecdh_auto);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_dict_value_3 = tmp_mvar_value_3;
        tmp_dict_key_3 = const_str_plain_Cryptography_HAS_SET_ECDH_AUTO;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_digest_8f29b4e065ff2a78b40f0f2a8209f3b9);
        }

        CHECK_OBJECT(tmp_mvar_value_4);
        tmp_dict_value_4 = tmp_mvar_value_4;
        tmp_dict_key_4 = const_str_digest_f2f56e52e9bead94215489df18f9e023;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_md);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_md);
        }

        CHECK_OBJECT(tmp_mvar_value_5);
        tmp_dict_value_5 = tmp_mvar_value_5;
        tmp_dict_key_5 = const_str_plain_Cryptography_HAS_RSA_OAEP_MD;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_label);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_rsa_oaep_label);
        }

        CHECK_OBJECT(tmp_mvar_value_6);
        tmp_dict_value_6 = tmp_mvar_value_6;
        tmp_dict_key_6 = const_str_plain_Cryptography_HAS_RSA_OAEP_LABEL;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl3_method);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl3_method);
        }

        CHECK_OBJECT(tmp_mvar_value_7);
        tmp_dict_value_7 = tmp_mvar_value_7;
        tmp_dict_key_7 = const_str_plain_Cryptography_HAS_SSL3_METHOD;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_alpn);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_alpn);
        }

        CHECK_OBJECT(tmp_mvar_value_8);
        tmp_dict_value_8 = tmp_mvar_value_8;
        tmp_dict_key_8 = const_str_plain_Cryptography_HAS_ALPN;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_compression);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_compression);
        }

        CHECK_OBJECT(tmp_mvar_value_9);
        tmp_dict_value_9 = tmp_mvar_value_9;
        tmp_dict_key_9 = const_str_plain_Cryptography_HAS_COMPRESSION;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_get_server_tmp_key);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_get_server_tmp_key);
        }

        CHECK_OBJECT(tmp_mvar_value_10);
        tmp_dict_value_10 = tmp_mvar_value_10;
        tmp_dict_key_10 = const_str_plain_Cryptography_HAS_GET_SERVER_TMP_KEY;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_0134e31627bb74f9df2edcd82a96ece3);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_digest_0134e31627bb74f9df2edcd82a96ece3);
        }

        CHECK_OBJECT(tmp_mvar_value_11);
        tmp_dict_value_11 = tmp_mvar_value_11;
        tmp_dict_key_11 = const_str_digest_2fcc949fb99081eda00ddcfc8aa01f9a;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_102_verification_params);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_102_verification_params);
        }

        CHECK_OBJECT(tmp_mvar_value_12);
        tmp_dict_value_12 = tmp_mvar_value_12;
        tmp_dict_key_12 = const_str_plain_Cryptography_HAS_102_VERIFICATION_PARAMS;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_110_verification_params);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_110_verification_params);
        }

        CHECK_OBJECT(tmp_mvar_value_13);
        tmp_dict_value_13 = tmp_mvar_value_13;
        tmp_dict_key_13 = const_str_plain_Cryptography_HAS_110_VERIFICATION_PARAMS;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b2405d2434f1275e2b8933b43c529fbe);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_digest_b2405d2434f1275e2b8933b43c529fbe);
        }

        CHECK_OBJECT(tmp_mvar_value_14);
        tmp_dict_value_14 = tmp_mvar_value_14;
        tmp_dict_key_14 = const_str_digest_0a25da58d8b65f965de99956a1b5aad7;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_89c6e3f07e56ca3212435467944ee8af);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_digest_89c6e3f07e56ca3212435467944ee8af);
        }

        CHECK_OBJECT(tmp_mvar_value_15);
        tmp_dict_value_15 = tmp_mvar_value_15;
        tmp_dict_key_15 = const_str_digest_96e83fdb049b186bfc982a4b37cdf168;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_cert_cb);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_set_cert_cb);
        }

        CHECK_OBJECT(tmp_mvar_value_16);
        tmp_dict_value_16 = tmp_mvar_value_16;
        tmp_dict_key_16 = const_str_plain_Cryptography_HAS_SET_CERT_CB;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_st);

        if (unlikely(tmp_mvar_value_17 == NULL)) {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_st);
        }

        CHECK_OBJECT(tmp_mvar_value_17);
        tmp_dict_value_17 = tmp_mvar_value_17;
        tmp_dict_key_17 = const_str_plain_Cryptography_HAS_SSL_ST;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_tls_st);

        if (unlikely(tmp_mvar_value_18 == NULL)) {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_tls_st);
        }

        CHECK_OBJECT(tmp_mvar_value_18);
        tmp_dict_value_18 = tmp_mvar_value_18;
        tmp_dict_key_18 = const_str_plain_Cryptography_HAS_TLS_ST;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_locking_callbacks);

        if (unlikely(tmp_mvar_value_19 == NULL)) {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_locking_callbacks);
        }

        CHECK_OBJECT(tmp_mvar_value_19);
        tmp_dict_value_19 = tmp_mvar_value_19;
        tmp_dict_key_19 = const_str_plain_Cryptography_HAS_LOCKING_CALLBACKS;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_scrypt);

        if (unlikely(tmp_mvar_value_20 == NULL)) {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_scrypt);
        }

        CHECK_OBJECT(tmp_mvar_value_20);
        tmp_dict_value_20 = tmp_mvar_value_20;
        tmp_dict_key_20 = const_str_plain_Cryptography_HAS_SCRYPT;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_generic_dtls_method);

        if (unlikely(tmp_mvar_value_21 == NULL)) {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_generic_dtls_method);
        }

        CHECK_OBJECT(tmp_mvar_value_21);
        tmp_dict_value_21 = tmp_mvar_value_21;
        tmp_dict_key_21 = const_str_plain_Cryptography_HAS_GENERIC_DTLS_METHOD;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_pkey_dhx);

        if (unlikely(tmp_mvar_value_22 == NULL)) {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_pkey_dhx);
        }

        CHECK_OBJECT(tmp_mvar_value_22);
        tmp_dict_value_22 = tmp_mvar_value_22;
        tmp_dict_key_22 = const_str_plain_Cryptography_HAS_EVP_PKEY_DHX;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_mem_functions);

        if (unlikely(tmp_mvar_value_23 == NULL)) {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_mem_functions);
        }

        CHECK_OBJECT(tmp_mvar_value_23);
        tmp_dict_value_23 = tmp_mvar_value_23;
        tmp_dict_key_23 = const_str_plain_Cryptography_HAS_MEM_FUNCTIONS;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_sct);

        if (unlikely(tmp_mvar_value_24 == NULL)) {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_sct);
        }

        CHECK_OBJECT(tmp_mvar_value_24);
        tmp_dict_value_24 = tmp_mvar_value_24;
        tmp_dict_key_24 = const_str_plain_Cryptography_HAS_SCT;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33);

        if (unlikely(tmp_mvar_value_25 == NULL)) {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_digest_b532ee08e2c9464270b0cf4cd8c73f33);
        }

        CHECK_OBJECT(tmp_mvar_value_25);
        tmp_dict_value_25 = tmp_mvar_value_25;
        tmp_dict_key_25 = const_str_digest_d2c4bd506cf66a4d1c7adfe4f312872c;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_x25519);

        if (unlikely(tmp_mvar_value_26 == NULL)) {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_x25519);
        }

        CHECK_OBJECT(tmp_mvar_value_26);
        tmp_dict_value_26 = tmp_mvar_value_26;
        tmp_dict_key_26 = const_str_plain_Cryptography_HAS_X25519;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_26, tmp_dict_value_26);
        assert(!(tmp_res != 0));
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_x448);

        if (unlikely(tmp_mvar_value_27 == NULL)) {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_x448);
        }

        CHECK_OBJECT(tmp_mvar_value_27);
        tmp_dict_value_27 = tmp_mvar_value_27;
        tmp_dict_key_27 = const_str_plain_Cryptography_HAS_X448;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_27, tmp_dict_value_27);
        assert(!(tmp_res != 0));
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed448);

        if (unlikely(tmp_mvar_value_28 == NULL)) {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed448);
        }

        CHECK_OBJECT(tmp_mvar_value_28);
        tmp_dict_value_28 = tmp_mvar_value_28;
        tmp_dict_key_28 = const_str_plain_Cryptography_HAS_ED448;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_28, tmp_dict_value_28);
        assert(!(tmp_res != 0));
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed25519);

        if (unlikely(tmp_mvar_value_29 == NULL)) {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ed25519);
        }

        CHECK_OBJECT(tmp_mvar_value_29);
        tmp_dict_value_29 = tmp_mvar_value_29;
        tmp_dict_key_29 = const_str_plain_Cryptography_HAS_ED25519;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_29, tmp_dict_value_29);
        assert(!(tmp_res != 0));
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54);

        if (unlikely(tmp_mvar_value_30 == NULL)) {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_digest_5e36ac0615fb0e6445b1e014cca7bd54);
        }

        CHECK_OBJECT(tmp_mvar_value_30);
        tmp_dict_value_30 = tmp_mvar_value_30;
        tmp_dict_key_30 = const_str_digest_08906fb95f8ef4a836f252aa7b12b1cf;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_30, tmp_dict_value_30);
        assert(!(tmp_res != 0));
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_38eba4904dfc59e8c0458109674fe900);

        if (unlikely(tmp_mvar_value_31 == NULL)) {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_digest_38eba4904dfc59e8c0458109674fe900);
        }

        CHECK_OBJECT(tmp_mvar_value_31);
        tmp_dict_value_31 = tmp_mvar_value_31;
        tmp_dict_key_31 = const_str_digest_c8d4ed7f56a6990e5028c35f4876f90c;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_31, tmp_dict_value_31);
        assert(!(tmp_res != 0));
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_fips);

        if (unlikely(tmp_mvar_value_32 == NULL)) {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_fips);
        }

        CHECK_OBJECT(tmp_mvar_value_32);
        tmp_dict_value_32 = tmp_mvar_value_32;
        tmp_dict_key_32 = const_str_plain_Cryptography_HAS_FIPS;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_32, tmp_dict_value_32);
        assert(!(tmp_res != 0));
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_sigalgs);

        if (unlikely(tmp_mvar_value_33 == NULL)) {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_ssl_sigalgs);
        }

        CHECK_OBJECT(tmp_mvar_value_33);
        tmp_dict_value_33 = tmp_mvar_value_33;
        tmp_dict_key_33 = const_str_plain_Cryptography_HAS_SIGALGS;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_33, tmp_dict_value_33);
        assert(!(tmp_res != 0));
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_psk);

        if (unlikely(tmp_mvar_value_34 == NULL)) {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_psk);
        }

        CHECK_OBJECT(tmp_mvar_value_34);
        tmp_dict_value_34 = tmp_mvar_value_34;
        tmp_dict_key_34 = const_str_plain_Cryptography_HAS_PSK;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_34, tmp_dict_value_34);
        assert(!(tmp_res != 0));
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_custom_ext);

        if (unlikely(tmp_mvar_value_35 == NULL)) {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_custom_ext);
        }

        CHECK_OBJECT(tmp_mvar_value_35);
        tmp_dict_value_35 = tmp_mvar_value_35;
        tmp_dict_key_35 = const_str_plain_Cryptography_HAS_CUSTOM_EXT;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_35, tmp_dict_value_35);
        assert(!(tmp_res != 0));
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_openssl_cleanup);

        if (unlikely(tmp_mvar_value_36 == NULL)) {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_openssl_cleanup);
        }

        CHECK_OBJECT(tmp_mvar_value_36);
        tmp_dict_value_36 = tmp_mvar_value_36;
        tmp_dict_key_36 = const_str_plain_Cryptography_HAS_OPENSSL_CLEANUP;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_36, tmp_dict_value_36);
        assert(!(tmp_res != 0));
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_cipher_details);

        if (unlikely(tmp_mvar_value_37 == NULL)) {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_cipher_details);
        }

        CHECK_OBJECT(tmp_mvar_value_37);
        tmp_dict_value_37 = tmp_mvar_value_37;
        tmp_dict_key_37 = const_str_plain_Cryptography_HAS_CIPHER_DETAILS;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_37, tmp_dict_value_37);
        assert(!(tmp_res != 0));
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_tlsv13);

        if (unlikely(tmp_mvar_value_38 == NULL)) {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_tlsv13);
        }

        CHECK_OBJECT(tmp_mvar_value_38);
        tmp_dict_value_38 = tmp_mvar_value_38;
        tmp_dict_key_38 = const_str_plain_Cryptography_HAS_TLSv1_3;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_38, tmp_dict_value_38);
        assert(!(tmp_res != 0));
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_raw_key);

        if (unlikely(tmp_mvar_value_39 == NULL)) {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_raw_key);
        }

        CHECK_OBJECT(tmp_mvar_value_39);
        tmp_dict_value_39 = tmp_mvar_value_39;
        tmp_dict_key_39 = const_str_plain_Cryptography_HAS_RAW_KEY;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_39, tmp_dict_value_39);
        assert(!(tmp_res != 0));
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_digestfinal_xof);

        if (unlikely(tmp_mvar_value_40 == NULL)) {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_evp_digestfinal_xof);
        }

        CHECK_OBJECT(tmp_mvar_value_40);
        tmp_dict_value_40 = tmp_mvar_value_40;
        tmp_dict_key_40 = const_str_plain_Cryptography_HAS_EVP_DIGESTFINAL_XOF;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_40, tmp_dict_value_40);
        assert(!(tmp_res != 0));
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_digest_8535fc31daf81b5f04208070d851f01e);

        if (unlikely(tmp_mvar_value_41 == NULL)) {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_digest_8535fc31daf81b5f04208070d851f01e);
        }

        CHECK_OBJECT(tmp_mvar_value_41);
        tmp_dict_value_41 = tmp_mvar_value_41;
        tmp_dict_key_41 = const_str_digest_5ebdc304a856f17bec9566811cc3653b;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_41, tmp_dict_value_41);
        assert(!(tmp_res != 0));
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_cryptography_has_engine);

        if (unlikely(tmp_mvar_value_42 == NULL)) {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_has_engine);
        }

        CHECK_OBJECT(tmp_mvar_value_42);
        tmp_dict_value_42 = tmp_mvar_value_42;
        tmp_dict_key_42 = const_str_plain_Cryptography_HAS_ENGINE;
        tmp_res = PyDict_SetItem(tmp_assign_source_49, tmp_dict_key_42, tmp_dict_value_42);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain_CONDITIONAL_NAMES, tmp_assign_source_49);
    }

    return module_cryptography$hazmat$bindings$openssl$_conditional;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
