/* Generated code for Python module 'cryptography.hazmat.backends.interfaces'
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

/* The "_module_cryptography$hazmat$backends$interfaces" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$backends$interfaces;
PyDictObject *moduledict_cryptography$hazmat$backends$interfaces;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_load_der_public_key;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_generate_dh_private_key;
static PyObject *const_str_digest_3be54078b9bd767d7e0767b5226c3e60;
extern PyObject *const_str_plain_pbkdf2_hmac_supported;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
extern PyObject *const_str_plain_create_x509_revoked_certificate;
extern PyObject *const_str_plain_generate_rsa_private_key;
extern PyObject *const_str_plain_x509_name_bytes;
static PyObject *const_str_digest_84a9b90f7e986466b5f551b58b5724d7;
static PyObject *const_str_digest_71f31f6c62b756a0153edb43b508ea72;
extern PyObject *const_str_plain_generate_dsa_private_key_and_parameters;
extern PyObject *const_str_plain_cmac_algorithm_supported;
extern PyObject *const_str_plain_salt;
extern PyObject *const_str_plain_generate_dh_private_key_and_parameters;
extern PyObject *const_str_plain_generate_dsa_parameters;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_self_str_plain_parameters_tuple;
extern PyObject *const_str_plain_derive_scrypt;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_c0bf5d81d20e7eb0288d1c3ad78eeb28;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_parameters;
static PyObject *const_str_digest_4ac388cc3596594b9fd1573ef2539537;
extern PyObject *const_str_plain_data;
extern PyObject *const_tuple_str_plain_self_str_plain_public_exponent_str_plain_key_size_tuple;
static PyObject *const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple;
extern PyObject *const_str_plain_iterations;
extern PyObject *const_str_plain_abstractmethod;
extern PyObject *const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple;
static PyObject *const_str_digest_39ea98a078b45b6c442185503b966df2;
static PyObject *const_str_digest_3552c2706bf0622b7fcc4e5c6e7975ed;
static PyObject *const_str_digest_844858cfc3f176cb25cb563fa156777b;
extern PyObject *const_str_plain_create_hash_ctx;
static PyObject *const_str_digest_802d8f8fd7de6f6609d7f954c8f40bf6;
extern PyObject *const_tuple_str_plain_self_str_plain_curve_tuple;
static PyObject *const_str_digest_b436da15690b01b9c2fa78c41a227f26;
extern PyObject *const_str_plain_RSABackend;
static PyObject *const_str_digest_d57a4d29065ab4a1f221ca9cc91f876b;
extern PyObject *const_str_plain_load_rsa_private_numbers;
static PyObject *const_str_digest_4c0fc62fa075fc302d7e12cdc2b1a3c6;
extern PyObject *const_str_plain_derive_pbkdf2_hmac;
extern PyObject *const_str_plain_algorithm;
static PyObject *const_str_digest_a25814a7003287ed48ae69a3e2c8571e;
extern PyObject *const_str_plain_curve;
extern PyObject *const_str_plain_load_der_private_key;
extern PyObject *const_str_plain_PEMSerializationBackend;
static PyObject *const_str_digest_25517886b3a6e05088fb43990d2543ca;
extern PyObject *const_str_plain_generate_dh_parameters;
static PyObject *const_str_digest_2f9695857620d6d2233ed0e7e24be4e6;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_PBKDF2HMACBackend;
static PyObject *const_str_digest_f0e494b50e5b866fcff26cb8f400c7a1;
extern PyObject *const_str_plain_create_x509_certificate;
extern PyObject *const_str_plain_EllipticCurveBackend;
extern PyObject *const_str_plain_create_cmac_ctx;
static PyObject *const_str_digest_be2baefacd213848c3218d58e5337d00;
extern PyObject *const_str_plain_signature_algorithm;
extern PyObject *const_str_plain_numbers;
static PyObject *const_str_digest_be637128b04df99668b57250bcb90304;
extern PyObject *const_str_plain_generator;
static PyObject *const_str_digest_4d1cd79c69148c2c65a70d73a3298974;
extern PyObject *const_tuple_str_plain_self_str_plain_padding_tuple;
static PyObject *const_str_digest_28f4468d6c9734e18c72bd5ca6760f2c;
extern PyObject *const_str_plain_private_key;
extern PyObject *const_str_plain_load_der_x509_csr;
extern PyObject *const_str_plain_create_symmetric_encryption_ctx;
extern PyObject *const_str_plain_rsa_padding_supported;
extern PyObject *const_str_plain_create_hmac_ctx;
extern PyObject *const_str_plain_abc;
extern PyObject *const_str_plain_DERSerializationBackend;
static PyObject *const_str_digest_8e914904ff9e228505332d098348b4f9;
extern PyObject *const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple;
extern PyObject *const_str_plain_create_x509_crl;
static PyObject *const_str_digest_e9c17f9e6a2cfa9137494e7cce4ddb68;
static PyObject *const_str_digest_ea519da6621b2e6e31eb85b5c326163a;
extern PyObject *const_tuple_str_plain_self_str_plain_p_str_plain_g_str_plain_q_tuple;
extern PyObject *const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3;
extern PyObject *const_str_plain_CMACBackend;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_X509Backend;
static PyObject *const_str_digest_7b42f6a1029a280baccadb6ba9d7ebc2;
static PyObject *const_str_digest_2a51df9642a3dcdb589c8f1b9733a429;
static PyObject *const_str_digest_d9e232185946daeca898e40c39f68e36;
extern PyObject *const_str_plain_key_material;
extern PyObject *const_str_plain_generate_elliptic_curve_private_key;
extern PyObject *const_str_plain_private_value;
extern PyObject *const_str_plain_load_pem_x509_certificate;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_digest_624798dd704a8f07276d3e75153a7c4b;
extern PyObject *const_str_plain_load_der_parameters;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_elliptic_curve_supported;
static PyObject *const_str_digest_8184e067c7b3318913c3d0af6b23b2b9;
static PyObject *const_tuple_str_plain_self_str_plain_builder_tuple;
extern PyObject *const_str_plain_mode;
static PyObject *const_str_digest_36ba26e04775ce62acc2dcd612c29d46;
static PyObject *const_tuple_63f249e20181d69efd847aace0409a8e_tuple;
static PyObject *const_str_digest_e4a6caad51a69cf6559e60044f2d3dbd;
extern PyObject *const_str_plain_load_pem_parameters;
static PyObject *const_str_digest_9d40568e0a0973abf5fe84776e9bb1b7;
extern PyObject *const_str_plain_public_exponent;
static PyObject *const_str_digest_692d8108005f88d96ef98564f6598985;
static PyObject *const_str_digest_1fd991e1ec7a538f20fe33eb5a63c23a;
static PyObject *const_str_digest_d7343ee22e2272ac73afb381205bd004;
extern PyObject *const_str_plain_load_dsa_parameter_numbers;
extern PyObject *const_str_plain_builder;
extern PyObject *const_str_plain_load_dh_public_numbers;
static PyObject *const_str_digest_e05d2a8640d15d821ac8931cff3ceeb6;
extern PyObject *const_str_plain_DHBackend;
static PyObject *const_str_digest_cad1312c0a8ed12faaeb2b2356b3f42c;
static PyObject *const_tuple_str_plain_self_str_plain_key_size_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple;
extern PyObject *const_str_plain_dh_x942_serialization_supported;
extern PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_password_tuple;
extern PyObject *const_str_plain_load_elliptic_curve_private_numbers;
extern PyObject *const_str_plain_derive_elliptic_curve_private_key;
extern PyObject *const_str_digest_19dba398fcfd0968a3203d943a394d68;
static PyObject *const_str_digest_d5ab83d9695f4da166c2e74669073e5a;
extern PyObject *const_str_plain_load_elliptic_curve_public_numbers;
extern PyObject *const_str_plain_load_dsa_private_numbers;
static PyObject *const_str_digest_6f04a0ccb7544097cd875c7c31834e6f;
extern PyObject *const_str_plain_dsa_hash_supported;
extern PyObject *const_str_plain_create_x509_csr;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_06e3225334eb391348195f4973a16cbd;
extern PyObject *const_str_plain_hash_supported;
extern PyObject *const_str_plain_HMACBackend;
extern PyObject *const_str_plain_g;
static PyObject *const_str_digest_5821e221916481c3f38394f7778eebff;
extern PyObject *const_str_plain_generate_rsa_parameters_supported;
extern PyObject *const_str_plain_load_pem_x509_csr;
static PyObject *const_str_digest_a7328ecdb816372bec3cb1ca678a22bb;
static PyObject *const_str_digest_dc1c83583d36fa154969d46c16a00fa5;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_load_dsa_public_numbers;
extern PyObject *const_str_plain_generate_dsa_private_key;
extern PyObject *const_str_plain_key_size;
extern PyObject *const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple;
extern PyObject *const_str_plain_HashBackend;
static PyObject *const_str_digest_247fa6c22e9ec30ce463446f28335d75;
extern PyObject *const_str_plain_q;
extern PyObject *const_str_plain_r;
static PyObject *const_str_digest_a37049685fe61ee43f425ff3884244a8;
extern PyObject *const_str_plain_cipher_supported;
static PyObject *const_str_digest_3efa1d11c5d8421580b0e5c4821ccde0;
static PyObject *const_str_digest_e5bb0ce7e7381f786f9677c69b442e65;
extern PyObject *const_str_plain_password;
extern PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_algorithm_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_p_str_plain_q_str_plain_g_tuple;
extern PyObject *const_str_plain_padding;
extern PyObject *const_str_plain_CipherBackend;
extern PyObject *const_tuple_str_plain_self_str_plain_algorithm_tuple;
static PyObject *const_str_digest_ddd3f25408786f407733d646162f8d59;
extern PyObject *const_str_plain_dsa_parameters_supported;
extern PyObject *const_str_plain_create_symmetric_decryption_ctx;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_DSABackend;
extern PyObject *const_str_plain_load_dh_parameter_numbers;
static PyObject *const_str_digest_6a83a3310dae744ebfd328dac16db727;
static PyObject *const_str_digest_ae098508dd4bf88f8bb4a07250bc5a8b;
extern PyObject *const_tuple_str_plain_self_str_plain_generator_str_plain_key_size_tuple;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_7f30278a4fcb72c48b5cd4ea5d079914;
static PyObject *const_tuple_str_plain_self_str_plain_numbers_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_12bf30ea148596af8b3db51961b172df;
extern PyObject *const_str_plain_six;
static PyObject *const_str_digest_a4c797d45dd48ad8578fe46499751f24;
static PyObject *const_str_digest_df210813cecf8d389a6a11cbd910135b;
static PyObject *const_str_digest_6314fa7c6fc48e2b2c8702ed369f8da8;
extern PyObject *const_str_plain_cipher;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_load_pem_public_key;
extern PyObject *const_str_plain_dh_parameters_supported;
extern PyObject *const_str_plain_load_rsa_public_numbers;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_load_dh_private_numbers;
extern PyObject *const_str_plain_load_pem_private_key;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_add_metaclass;
static PyObject *const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple;
static PyObject *const_str_digest_33d14a975b19066b138ce5eafd89cff9;
extern PyObject *const_str_plain_load_der_x509_certificate;
static PyObject *const_str_digest_91cef7da9413817b1df5f9f543c1b117;
extern PyObject *const_str_plain_ScryptBackend;
static PyObject *const_str_digest_e908e8afe1a83e928d0bef8e329dc68a;
extern PyObject *const_str_plain_ABCMeta;
extern PyObject *const_str_plain_hmac_supported;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_3be54078b9bd767d7e0767b5226c3e60 = UNSTREAM_STRING(&constant_bin[ 569163 ], 66, 0);
    const_str_digest_84a9b90f7e986466b5f551b58b5724d7 = UNSTREAM_STRING(&constant_bin[ 569229 ], 76, 0);
    const_str_digest_71f31f6c62b756a0153edb43b508ea72 = UNSTREAM_STRING(&constant_bin[ 569305 ], 51, 0);
    const_tuple_str_plain_self_str_plain_parameters_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_parameters_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_parameters_tuple, 1, const_str_plain_parameters); Py_INCREF(const_str_plain_parameters);
    const_str_digest_c0bf5d81d20e7eb0288d1c3ad78eeb28 = UNSTREAM_STRING(&constant_bin[ 569356 ], 84, 0);
    const_str_digest_4ac388cc3596594b9fd1573ef2539537 = UNSTREAM_STRING(&constant_bin[ 569440 ], 80, 0);
    const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 1, const_str_plain_key_material); Py_INCREF(const_str_plain_key_material);
    PyTuple_SET_ITEM(const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 2, const_str_plain_salt); Py_INCREF(const_str_plain_salt);
    PyTuple_SET_ITEM(const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 3, const_str_plain_length); Py_INCREF(const_str_plain_length);
    PyTuple_SET_ITEM(const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 4, const_str_plain_n); Py_INCREF(const_str_plain_n);
    PyTuple_SET_ITEM(const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 5, const_str_plain_r); Py_INCREF(const_str_plain_r);
    PyTuple_SET_ITEM(const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 6, const_str_plain_p); Py_INCREF(const_str_plain_p);
    const_str_digest_39ea98a078b45b6c442185503b966df2 = UNSTREAM_STRING(&constant_bin[ 569520 ], 70, 0);
    const_str_digest_3552c2706bf0622b7fcc4e5c6e7975ed = UNSTREAM_STRING(&constant_bin[ 569590 ], 132, 0);
    const_str_digest_844858cfc3f176cb25cb563fa156777b = UNSTREAM_STRING(&constant_bin[ 569722 ], 120, 0);
    const_str_digest_802d8f8fd7de6f6609d7f954c8f40bf6 = UNSTREAM_STRING(&constant_bin[ 569842 ], 122, 0);
    const_str_digest_b436da15690b01b9c2fa78c41a227f26 = UNSTREAM_STRING(&constant_bin[ 569964 ], 59, 0);
    const_str_digest_d57a4d29065ab4a1f221ca9cc91f876b = UNSTREAM_STRING(&constant_bin[ 570023 ], 67, 0);
    const_str_digest_4c0fc62fa075fc302d7e12cdc2b1a3c6 = UNSTREAM_STRING(&constant_bin[ 570090 ], 100, 0);
    const_str_digest_a25814a7003287ed48ae69a3e2c8571e = UNSTREAM_STRING(&constant_bin[ 570190 ], 85, 0);
    const_str_digest_25517886b3a6e05088fb43990d2543ca = UNSTREAM_STRING(&constant_bin[ 570275 ], 71, 0);
    const_str_digest_2f9695857620d6d2233ed0e7e24be4e6 = UNSTREAM_STRING(&constant_bin[ 570346 ], 88, 0);
    const_str_digest_f0e494b50e5b866fcff26cb8f400c7a1 = UNSTREAM_STRING(&constant_bin[ 570434 ], 119, 0);
    const_str_digest_be2baefacd213848c3218d58e5337d00 = UNSTREAM_STRING(&constant_bin[ 570553 ], 52, 0);
    const_str_digest_be637128b04df99668b57250bcb90304 = UNSTREAM_STRING(&constant_bin[ 570605 ], 84, 0);
    const_str_digest_4d1cd79c69148c2c65a70d73a3298974 = UNSTREAM_STRING(&constant_bin[ 570689 ], 121, 0);
    const_str_digest_28f4468d6c9734e18c72bd5ca6760f2c = UNSTREAM_STRING(&constant_bin[ 570810 ], 58, 0);
    const_str_digest_8e914904ff9e228505332d098348b4f9 = UNSTREAM_STRING(&constant_bin[ 570868 ], 88, 0);
    const_str_digest_e9c17f9e6a2cfa9137494e7cce4ddb68 = UNSTREAM_STRING(&constant_bin[ 570956 ], 51, 0);
    const_str_digest_ea519da6621b2e6e31eb85b5c326163a = UNSTREAM_STRING(&constant_bin[ 571007 ], 87, 0);
    const_str_digest_7b42f6a1029a280baccadb6ba9d7ebc2 = UNSTREAM_STRING(&constant_bin[ 571094 ], 127, 0);
    const_str_digest_2a51df9642a3dcdb589c8f1b9733a429 = UNSTREAM_STRING(&constant_bin[ 571221 ], 88, 0);
    const_str_digest_d9e232185946daeca898e40c39f68e36 = UNSTREAM_STRING(&constant_bin[ 571309 ], 60, 0);
    const_str_digest_8184e067c7b3318913c3d0af6b23b2b9 = UNSTREAM_STRING(&constant_bin[ 571369 ], 73, 0);
    const_tuple_str_plain_self_str_plain_builder_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_builder_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_builder_tuple, 1, const_str_plain_builder); Py_INCREF(const_str_plain_builder);
    const_str_digest_36ba26e04775ce62acc2dcd612c29d46 = UNSTREAM_STRING(&constant_bin[ 571442 ], 58, 0);
    const_tuple_63f249e20181d69efd847aace0409a8e_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 1, const_str_plain_algorithm); Py_INCREF(const_str_plain_algorithm);
    PyTuple_SET_ITEM(const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 2, const_str_plain_length); Py_INCREF(const_str_plain_length);
    PyTuple_SET_ITEM(const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 3, const_str_plain_salt); Py_INCREF(const_str_plain_salt);
    PyTuple_SET_ITEM(const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 4, const_str_plain_iterations); Py_INCREF(const_str_plain_iterations);
    PyTuple_SET_ITEM(const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 5, const_str_plain_key_material); Py_INCREF(const_str_plain_key_material);
    const_str_digest_e4a6caad51a69cf6559e60044f2d3dbd = UNSTREAM_STRING(&constant_bin[ 571500 ], 72, 0);
    const_str_digest_9d40568e0a0973abf5fe84776e9bb1b7 = UNSTREAM_STRING(&constant_bin[ 571572 ], 72, 0);
    const_str_digest_692d8108005f88d96ef98564f6598985 = UNSTREAM_STRING(&constant_bin[ 571644 ], 81, 0);
    const_str_digest_1fd991e1ec7a538f20fe33eb5a63c23a = UNSTREAM_STRING(&constant_bin[ 571725 ], 50, 0);
    const_str_digest_d7343ee22e2272ac73afb381205bd004 = UNSTREAM_STRING(&constant_bin[ 571775 ], 113, 0);
    const_str_digest_e05d2a8640d15d821ac8931cff3ceeb6 = UNSTREAM_STRING(&constant_bin[ 571888 ], 51, 0);
    const_str_digest_cad1312c0a8ed12faaeb2b2356b3f42c = UNSTREAM_STRING(&constant_bin[ 571939 ], 59, 0);
    const_tuple_str_plain_self_str_plain_key_size_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_key_size_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_key_size_tuple, 1, const_str_plain_key_size); Py_INCREF(const_str_plain_key_size);
    const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple, 1, const_str_plain_private_value); Py_INCREF(const_str_plain_private_value);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple, 2, const_str_plain_curve); Py_INCREF(const_str_plain_curve);
    const_str_digest_d5ab83d9695f4da166c2e74669073e5a = UNSTREAM_STRING(&constant_bin[ 571998 ], 67, 0);
    const_str_digest_6f04a0ccb7544097cd875c7c31834e6f = UNSTREAM_STRING(&constant_bin[ 572065 ], 103, 0);
    const_str_digest_06e3225334eb391348195f4973a16cbd = UNSTREAM_STRING(&constant_bin[ 572168 ], 59, 0);
    const_str_digest_5821e221916481c3f38394f7778eebff = UNSTREAM_STRING(&constant_bin[ 572227 ], 78, 0);
    const_str_digest_a7328ecdb816372bec3cb1ca678a22bb = UNSTREAM_STRING(&constant_bin[ 572305 ], 100, 0);
    const_str_digest_dc1c83583d36fa154969d46c16a00fa5 = UNSTREAM_STRING(&constant_bin[ 572405 ], 48, 0);
    const_str_digest_247fa6c22e9ec30ce463446f28335d75 = UNSTREAM_STRING(&constant_bin[ 572453 ], 42, 0);
    const_str_digest_a37049685fe61ee43f425ff3884244a8 = UNSTREAM_STRING(&constant_bin[ 572495 ], 66, 0);
    const_str_digest_3efa1d11c5d8421580b0e5c4821ccde0 = UNSTREAM_STRING(&constant_bin[ 572561 ], 71, 0);
    const_str_digest_e5bb0ce7e7381f786f9677c69b442e65 = UNSTREAM_STRING(&constant_bin[ 572632 ], 86, 0);
    const_str_digest_ddd3f25408786f407733d646162f8d59 = UNSTREAM_STRING(&constant_bin[ 572718 ], 85, 0);
    const_str_digest_6a83a3310dae744ebfd328dac16db727 = UNSTREAM_STRING(&constant_bin[ 572803 ], 124, 0);
    const_str_digest_ae098508dd4bf88f8bb4a07250bc5a8b = UNSTREAM_STRING(&constant_bin[ 572927 ], 86, 0);
    const_str_digest_7f30278a4fcb72c48b5cd4ea5d079914 = UNSTREAM_STRING(&constant_bin[ 573013 ], 73, 0);
    const_tuple_str_plain_self_str_plain_numbers_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_numbers_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_numbers_tuple, 1, const_str_plain_numbers); Py_INCREF(const_str_plain_numbers);
    const_str_digest_12bf30ea148596af8b3db51961b172df = UNSTREAM_STRING(&constant_bin[ 573086 ], 58, 0);
    const_str_digest_a4c797d45dd48ad8578fe46499751f24 = UNSTREAM_STRING(&constant_bin[ 573144 ], 98, 0);
    const_str_digest_df210813cecf8d389a6a11cbd910135b = UNSTREAM_STRING(&constant_bin[ 573242 ], 101, 0);
    const_str_digest_6314fa7c6fc48e2b2c8702ed369f8da8 = UNSTREAM_STRING(&constant_bin[ 573343 ], 81, 0);
    const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 1, const_str_plain_builder); Py_INCREF(const_str_plain_builder);
    PyTuple_SET_ITEM(const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 2, const_str_plain_private_key); Py_INCREF(const_str_plain_private_key);
    PyTuple_SET_ITEM(const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 3, const_str_plain_algorithm); Py_INCREF(const_str_plain_algorithm);
    const_str_digest_33d14a975b19066b138ce5eafd89cff9 = UNSTREAM_STRING(&constant_bin[ 573424 ], 84, 0);
    const_str_digest_91cef7da9413817b1df5f9f543c1b117 = UNSTREAM_STRING(&constant_bin[ 573508 ], 102, 0);
    const_str_digest_e908e8afe1a83e928d0bef8e329dc68a = UNSTREAM_STRING(&constant_bin[ 573610 ], 70, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$backends$interfaces(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_10d9f4c759cadf00a4fbc1f439bf7e0a;
static PyCodeObject *codeobj_0689b0f676487420dd9d4a1584848fa0;
static PyCodeObject *codeobj_5301f6b75cb571eb304abb503ef6c516;
static PyCodeObject *codeobj_40bab78ef31aafc379e20440db4260a7;
static PyCodeObject *codeobj_1c87ee0eae6744dcbadc9080f2c61a1f;
static PyCodeObject *codeobj_006a704c244b10d6d7644723885d09fb;
static PyCodeObject *codeobj_0c94371b09fc0141130d3fa348e8ce18;
static PyCodeObject *codeobj_dab985935e6285f1b3ae9afa59b7dc62;
static PyCodeObject *codeobj_1d7e0e8e3dd596f29d641d2a0e23a11c;
static PyCodeObject *codeobj_441df054d0242983b394e063efdef2c3;
static PyCodeObject *codeobj_126e34bc718565ef55fefe15bd17d3cf;
static PyCodeObject *codeobj_2fa782de92e34691e9f4e7b9700cf4db;
static PyCodeObject *codeobj_dfc1927ce0197293681eb1bfbad6bb3f;
static PyCodeObject *codeobj_0fbe5f7fa832f53e48656b7910af33b3;
static PyCodeObject *codeobj_d86f6304f97e2717bc851db5adc56efc;
static PyCodeObject *codeobj_ebac46be026a46c31f0ee0475874f7a3;
static PyCodeObject *codeobj_6891139ab88ee17a1e8a17a35a6cba07;
static PyCodeObject *codeobj_769880ebb1a9d47016bc978e8f4d90d2;
static PyCodeObject *codeobj_44ca6ef9b4e056663fb7df2af3f081c8;
static PyCodeObject *codeobj_33dd68781b7b7cd36aa91bfb8e2d9a8b;
static PyCodeObject *codeobj_fdabc188dd54f1a71c46c0c7f47e946b;
static PyCodeObject *codeobj_df30014ebac032b8ed07b887c26afb17;
static PyCodeObject *codeobj_e7ebfbf59b2e66888ad868c2aabfedf2;
static PyCodeObject *codeobj_995cadec73ae00ab042d640b4cd0744c;
static PyCodeObject *codeobj_e586e188641eb624e8c71c98af69c01a;
static PyCodeObject *codeobj_0aedaa222b12d85cf01b20a9c3b0c2d5;
static PyCodeObject *codeobj_7c8b581019493ba1574cf9a733a1b6f9;
static PyCodeObject *codeobj_a7512e6818fce6d621fc9d65eb35fa94;
static PyCodeObject *codeobj_6a5e620801dd75749f2f9ee6879aeba0;
static PyCodeObject *codeobj_43198be80d87980c3c65923fca984883;
static PyCodeObject *codeobj_d82117dc4ed0e432799f31c17c407791;
static PyCodeObject *codeobj_2f8c7f19f15ce8d3dbee567ace0fcd1d;
static PyCodeObject *codeobj_f73dc6ade5f75b261bd961625070cec3;
static PyCodeObject *codeobj_917c9117910bd5840b802aff447d9b34;
static PyCodeObject *codeobj_fbe0b79e94153e96ae22eaaa1fe2ec9e;
static PyCodeObject *codeobj_5de7cf0e97637406a01e1b31066842c7;
static PyCodeObject *codeobj_36f1553cc204047e63178b0c991e4318;
static PyCodeObject *codeobj_e0b9bdabb7e918c7e3c2f49c048cbdd9;
static PyCodeObject *codeobj_5e672010851b75d7121a55a3028d8d66;
static PyCodeObject *codeobj_792f8bc080a287c9845d03e71e3012dc;
static PyCodeObject *codeobj_b642e858dfc4559e477058829b9e8fb9;
static PyCodeObject *codeobj_50bc47ba0ce124af2beab53829420e54;
static PyCodeObject *codeobj_2c6815b7a8d2c9c87b88a899103e4458;
static PyCodeObject *codeobj_4a85df392f949478970dc82d555895b1;
static PyCodeObject *codeobj_f604476c0b8591b8d81d40383575dfde;
static PyCodeObject *codeobj_f0232619613bfe2fa95fa5d9f7d2b904;
static PyCodeObject *codeobj_1ec85a7afc80cae7ee593b69b16af1f3;
static PyCodeObject *codeobj_af91f961e8913daa4e0142e1b8f48dc7;
static PyCodeObject *codeobj_8fa7ded7a3fc9cf525c819a45fecaab6;
static PyCodeObject *codeobj_eb2c183404768828636de56018306d2a;
static PyCodeObject *codeobj_02bf5232bc20c971d9caa2e5fb51c880;
static PyCodeObject *codeobj_b59f1fad5a7f8eb308f565c0c8615947;
static PyCodeObject *codeobj_6e253c98f05757445aeaf192db6994ef;
static PyCodeObject *codeobj_fd6a0960075e0694c14dca5704335eb9;
static PyCodeObject *codeobj_9e5c294fafe8185c67192cd28d326f5a;
static PyCodeObject *codeobj_216a142dccc3c948ceb3b6be3c20a623;
static PyCodeObject *codeobj_e9f78da43530584a8817b6df55cce50d;
static PyCodeObject *codeobj_dfe47ea8210e1222fdd02d634bd97048;
static PyCodeObject *codeobj_dbfdcdfe68d97299ad4eec9209c5d88b;
static PyCodeObject *codeobj_1fa8963d71a51629c82dd5c625634ab4;
static PyCodeObject *codeobj_6ff1a9984885e2a369258e389fe8dbd2;
static PyCodeObject *codeobj_afeff19d1857a8851f2cb1c3d004a329;
static PyCodeObject *codeobj_351a9575e0a6878d98b768f2ed86b493;
static PyCodeObject *codeobj_4344bf1d5a17c92b18c76d44f7719163;
static PyCodeObject *codeobj_bda433661d06c6183f4707435a1cd7a4;
static PyCodeObject *codeobj_fcd995ecd2791ab187c9b5b4fe1e09d8;
static PyCodeObject *codeobj_7a7caa16540ca91d4bcf77c2b8482deb;
static PyCodeObject *codeobj_7496a8d7ce0dcb5592c9eae160c79f7e;
static PyCodeObject *codeobj_1abcaae28d3bb5bc7ed05737a6dd6b47;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_247fa6c22e9ec30ce463446f28335d75);
    codeobj_10d9f4c759cadf00a4fbc1f439bf7e0a = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_dc1c83583d36fa154969d46c16a00fa5, const_tuple_empty, 0, 0, 0);
    codeobj_0689b0f676487420dd9d4a1584848fa0 = MAKE_CODEOBJECT(module_filename_obj, 65, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_CMACBackend, const_tuple_empty, 0, 0, 0);
    codeobj_5301f6b75cb571eb304abb503ef6c516 = MAKE_CODEOBJECT(module_filename_obj, 13, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_CipherBackend, const_tuple_empty, 0, 0, 0);
    codeobj_40bab78ef31aafc379e20440db4260a7 = MAKE_CODEOBJECT(module_filename_obj, 254, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_DERSerializationBackend, const_tuple_empty, 0, 0, 0);
    codeobj_1c87ee0eae6744dcbadc9080f2c61a1f = MAKE_CODEOBJECT(module_filename_obj, 335, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_DHBackend, const_tuple_empty, 0, 0, 0);
    codeobj_006a704c244b10d6d7644723885d09fb = MAKE_CODEOBJECT(module_filename_obj, 132, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_DSABackend, const_tuple_empty, 0, 0, 0);
    codeobj_0c94371b09fc0141130d3fa348e8ce18 = MAKE_CODEOBJECT(module_filename_obj, 184, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_EllipticCurveBackend, const_tuple_empty, 0, 0, 0);
    codeobj_dab985935e6285f1b3ae9afa59b7dc62 = MAKE_CODEOBJECT(module_filename_obj, 49, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_HMACBackend, const_tuple_empty, 0, 0, 0);
    codeobj_1d7e0e8e3dd596f29d641d2a0e23a11c = MAKE_CODEOBJECT(module_filename_obj, 34, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_HashBackend, const_tuple_empty, 0, 0, 0);
    codeobj_441df054d0242983b394e063efdef2c3 = MAKE_CODEOBJECT(module_filename_obj, 80, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_PBKDF2HMACBackend, const_tuple_empty, 0, 0, 0);
    codeobj_126e34bc718565ef55fefe15bd17d3cf = MAKE_CODEOBJECT(module_filename_obj, 232, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_PEMSerializationBackend, const_tuple_empty, 0, 0, 0);
    codeobj_2fa782de92e34691e9f4e7b9700cf4db = MAKE_CODEOBJECT(module_filename_obj, 97, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_RSABackend, const_tuple_empty, 0, 0, 0);
    codeobj_dfc1927ce0197293681eb1bfbad6bb3f = MAKE_CODEOBJECT(module_filename_obj, 390, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_ScryptBackend, const_tuple_empty, 0, 0, 0);
    codeobj_0fbe5f7fa832f53e48656b7910af33b3 = MAKE_CODEOBJECT(module_filename_obj, 276, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_X509Backend, const_tuple_empty, 0, 0, 0);
    codeobj_d86f6304f97e2717bc851db5adc56efc = MAKE_CODEOBJECT(module_filename_obj, 14, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cipher_supported, const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple, 3, 0, 0);
    codeobj_ebac46be026a46c31f0ee0475874f7a3 = MAKE_CODEOBJECT(module_filename_obj, 66, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_cmac_algorithm_supported, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, 0, 0);
    codeobj_6891139ab88ee17a1e8a17a35a6cba07 = MAKE_CODEOBJECT(module_filename_obj, 72, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_create_cmac_ctx, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, 0, 0);
    codeobj_769880ebb1a9d47016bc978e8f4d90d2 = MAKE_CODEOBJECT(module_filename_obj, 41, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_create_hash_ctx, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, 0, 0);
    codeobj_44ca6ef9b4e056663fb7df2af3f081c8 = MAKE_CODEOBJECT(module_filename_obj, 57, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_create_hmac_ctx, const_tuple_str_plain_self_str_plain_key_str_plain_algorithm_tuple, 3, 0, 0);
    codeobj_33dd68781b7b7cd36aa91bfb8e2d9a8b = MAKE_CODEOBJECT(module_filename_obj, 26, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_create_symmetric_decryption_ctx, const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple, 3, 0, 0);
    codeobj_fdabc188dd54f1a71c46c0c7f47e946b = MAKE_CODEOBJECT(module_filename_obj, 20, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_create_symmetric_encryption_ctx, const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple, 3, 0, 0);
    codeobj_df30014ebac032b8ed07b887c26afb17 = MAKE_CODEOBJECT(module_filename_obj, 307, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_create_x509_certificate, const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 4, 0, 0);
    codeobj_e7ebfbf59b2e66888ad868c2aabfedf2 = MAKE_CODEOBJECT(module_filename_obj, 313, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_create_x509_crl, const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 4, 0, 0);
    codeobj_995cadec73ae00ab042d640b4cd0744c = MAKE_CODEOBJECT(module_filename_obj, 301, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_create_x509_csr, const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 4, 0, 0);
    codeobj_e586e188641eb624e8c71c98af69c01a = MAKE_CODEOBJECT(module_filename_obj, 320, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_create_x509_revoked_certificate, const_tuple_str_plain_self_str_plain_builder_tuple, 2, 0, 0);
    codeobj_0aedaa222b12d85cf01b20a9c3b0c2d5 = MAKE_CODEOBJECT(module_filename_obj, 224, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_derive_elliptic_curve_private_key, const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple, 3, 0, 0);
    codeobj_7c8b581019493ba1574cf9a733a1b6f9 = MAKE_CODEOBJECT(module_filename_obj, 88, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_derive_pbkdf2_hmac, const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 6, 0, 0);
    codeobj_a7512e6818fce6d621fc9d65eb35fa94 = MAKE_CODEOBJECT(module_filename_obj, 391, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_derive_scrypt, const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 7, 0, 0);
    codeobj_6a5e620801dd75749f2f9ee6879aeba0 = MAKE_CODEOBJECT(module_filename_obj, 375, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_dh_parameters_supported, const_tuple_str_plain_self_str_plain_p_str_plain_g_str_plain_q_tuple, 4, 0, 0);
    codeobj_43198be80d87980c3c65923fca984883 = MAKE_CODEOBJECT(module_filename_obj, 381, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_dh_x942_serialization_supported, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_d82117dc4ed0e432799f31c17c407791 = MAKE_CODEOBJECT(module_filename_obj, 152, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_dsa_hash_supported, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, 0, 0);
    codeobj_2f8c7f19f15ce8d3dbee567ace0fcd1d = MAKE_CODEOBJECT(module_filename_obj, 158, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_dsa_parameters_supported, const_tuple_str_plain_self_str_plain_p_str_plain_q_str_plain_g_tuple, 4, 0, 0);
    codeobj_f73dc6ade5f75b261bd961625070cec3 = MAKE_CODEOBJECT(module_filename_obj, 218, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_19dba398fcfd0968a3203d943a394d68, const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple, 3, 0, 0);
    codeobj_917c9117910bd5840b802aff447d9b34 = MAKE_CODEOBJECT(module_filename_obj, 185, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3, const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple, 3, 0, 0);
    codeobj_fbe0b79e94153e96ae22eaaa1fe2ec9e = MAKE_CODEOBJECT(module_filename_obj, 194, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_elliptic_curve_supported, const_tuple_str_plain_self_str_plain_curve_tuple, 2, 0, 0);
    codeobj_5de7cf0e97637406a01e1b31066842c7 = MAKE_CODEOBJECT(module_filename_obj, 336, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_generate_dh_parameters, const_tuple_str_plain_self_str_plain_generator_str_plain_key_size_tuple, 3, 0, 0);
    codeobj_36f1553cc204047e63178b0c991e4318 = MAKE_CODEOBJECT(module_filename_obj, 343, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_generate_dh_private_key, const_tuple_str_plain_self_str_plain_parameters_tuple, 2, 0, 0);
    codeobj_e0b9bdabb7e918c7e3c2f49c048cbdd9 = MAKE_CODEOBJECT(module_filename_obj, 350, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_generate_dh_private_key_and_parameters, const_tuple_str_plain_self_str_plain_generator_str_plain_key_size_tuple, 3, 0, 0);
    codeobj_5e672010851b75d7121a55a3028d8d66 = MAKE_CODEOBJECT(module_filename_obj, 133, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_generate_dsa_parameters, const_tuple_str_plain_self_str_plain_key_size_tuple, 2, 0, 0);
    codeobj_792f8bc080a287c9845d03e71e3012dc = MAKE_CODEOBJECT(module_filename_obj, 139, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_generate_dsa_private_key, const_tuple_str_plain_self_str_plain_parameters_tuple, 2, 0, 0);
    codeobj_b642e858dfc4559e477058829b9e8fb9 = MAKE_CODEOBJECT(module_filename_obj, 146, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_generate_dsa_private_key_and_parameters, const_tuple_str_plain_self_str_plain_key_size_tuple, 2, 0, 0);
    codeobj_50bc47ba0ce124af2beab53829420e54 = MAKE_CODEOBJECT(module_filename_obj, 200, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_generate_elliptic_curve_private_key, const_tuple_str_plain_self_str_plain_curve_tuple, 2, 0, 0);
    codeobj_2c6815b7a8d2c9c87b88a899103e4458 = MAKE_CODEOBJECT(module_filename_obj, 111, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_generate_rsa_parameters_supported, const_tuple_str_plain_self_str_plain_public_exponent_str_plain_key_size_tuple, 3, 0, 0);
    codeobj_4a85df392f949478970dc82d555895b1 = MAKE_CODEOBJECT(module_filename_obj, 98, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_generate_rsa_private_key, const_tuple_str_plain_self_str_plain_public_exponent_str_plain_key_size_tuple, 3, 0, 0);
    codeobj_f604476c0b8591b8d81d40383575dfde = MAKE_CODEOBJECT(module_filename_obj, 35, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_hash_supported, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, 0, 0);
    codeobj_f0232619613bfe2fa95fa5d9f7d2b904 = MAKE_CODEOBJECT(module_filename_obj, 50, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_hmac_supported, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, 0, 0);
    codeobj_1ec85a7afc80cae7ee593b69b16af1f3 = MAKE_CODEOBJECT(module_filename_obj, 268, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_der_parameters, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, 0);
    codeobj_af91f961e8913daa4e0142e1b8f48dc7 = MAKE_CODEOBJECT(module_filename_obj, 255, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_der_private_key, const_tuple_str_plain_self_str_plain_data_str_plain_password_tuple, 3, 0, 0);
    codeobj_8fa7ded7a3fc9cf525c819a45fecaab6 = MAKE_CODEOBJECT(module_filename_obj, 262, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_der_public_key, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, 0);
    codeobj_eb2c183404768828636de56018306d2a = MAKE_CODEOBJECT(module_filename_obj, 283, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_der_x509_certificate, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, 0);
    codeobj_02bf5232bc20c971d9caa2e5fb51c880 = MAKE_CODEOBJECT(module_filename_obj, 289, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_der_x509_csr, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, 0);
    codeobj_b59f1fad5a7f8eb308f565c0c8615947 = MAKE_CODEOBJECT(module_filename_obj, 369, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_dh_parameter_numbers, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, 0);
    codeobj_6e253c98f05757445aeaf192db6994ef = MAKE_CODEOBJECT(module_filename_obj, 357, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_dh_private_numbers, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, 0);
    codeobj_fd6a0960075e0694c14dca5704335eb9 = MAKE_CODEOBJECT(module_filename_obj, 363, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_dh_public_numbers, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, 0);
    codeobj_9e5c294fafe8185c67192cd28d326f5a = MAKE_CODEOBJECT(module_filename_obj, 176, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_dsa_parameter_numbers, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, 0);
    codeobj_216a142dccc3c948ceb3b6be3c20a623 = MAKE_CODEOBJECT(module_filename_obj, 164, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_dsa_private_numbers, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, 0);
    codeobj_e9f78da43530584a8817b6df55cce50d = MAKE_CODEOBJECT(module_filename_obj, 170, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_dsa_public_numbers, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, 0);
    codeobj_dfe47ea8210e1222fdd02d634bd97048 = MAKE_CODEOBJECT(module_filename_obj, 212, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_elliptic_curve_private_numbers, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, 0);
    codeobj_dbfdcdfe68d97299ad4eec9209c5d88b = MAKE_CODEOBJECT(module_filename_obj, 206, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_elliptic_curve_public_numbers, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, 0);
    codeobj_1fa8963d71a51629c82dd5c625634ab4 = MAKE_CODEOBJECT(module_filename_obj, 246, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_pem_parameters, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, 0);
    codeobj_6ff1a9984885e2a369258e389fe8dbd2 = MAKE_CODEOBJECT(module_filename_obj, 233, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_pem_private_key, const_tuple_str_plain_self_str_plain_data_str_plain_password_tuple, 3, 0, 0);
    codeobj_afeff19d1857a8851f2cb1c3d004a329 = MAKE_CODEOBJECT(module_filename_obj, 240, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_pem_public_key, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, 0);
    codeobj_351a9575e0a6878d98b768f2ed86b493 = MAKE_CODEOBJECT(module_filename_obj, 277, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_pem_x509_certificate, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, 0);
    codeobj_4344bf1d5a17c92b18c76d44f7719163 = MAKE_CODEOBJECT(module_filename_obj, 295, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_pem_x509_csr, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, 0);
    codeobj_bda433661d06c6183f4707435a1cd7a4 = MAKE_CODEOBJECT(module_filename_obj, 118, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_rsa_private_numbers, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, 0);
    codeobj_fcd995ecd2791ab187c9b5b4fe1e09d8 = MAKE_CODEOBJECT(module_filename_obj, 124, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_rsa_public_numbers, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, 0);
    codeobj_7a7caa16540ca91d4bcf77c2b8482deb = MAKE_CODEOBJECT(module_filename_obj, 81, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_pbkdf2_hmac_supported, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, 0, 0);
    codeobj_7496a8d7ce0dcb5592c9eae160c79f7e = MAKE_CODEOBJECT(module_filename_obj, 105, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_rsa_padding_supported, const_tuple_str_plain_self_str_plain_padding_tuple, 2, 0, 0);
    codeobj_1abcaae28d3bb5bc7ed05737a6dd6b47 = MAKE_CODEOBJECT(module_filename_obj, 327, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_x509_name_bytes, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported(PyObject *defaults);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx();


// The module function definitions.

static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_pbkdf2_hmac_supported,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7a7caa16540ca91d4bcf77c2b8482deb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_a7328ecdb816372bec3cb1ca678a22bb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_derive_pbkdf2_hmac,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7c8b581019493ba1574cf9a733a1b6f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_5821e221916481c3f38394f7778eebff,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_generate_rsa_private_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4a85df392f949478970dc82d555895b1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_d7343ee22e2272ac73afb381205bd004,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_rsa_padding_supported,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7496a8d7ce0dcb5592c9eae160c79f7e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_692d8108005f88d96ef98564f6598985,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_generate_rsa_parameters_supported,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2c6815b7a8d2c9c87b88a899103e4458,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_6f04a0ccb7544097cd875c7c31834e6f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_rsa_private_numbers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bda433661d06c6183f4707435a1cd7a4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_be2baefacd213848c3218d58e5337d00,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_rsa_public_numbers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fcd995ecd2791ab187c9b5b4fe1e09d8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e05d2a8640d15d821ac8931cff3ceeb6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_generate_dsa_parameters,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5e672010851b75d7121a55a3028d8d66,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_be637128b04df99668b57250bcb90304,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_generate_dsa_private_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_792f8bc080a287c9845d03e71e3012dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_91cef7da9413817b1df5f9f543c1b117,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_generate_dsa_private_key_and_parameters,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b642e858dfc4559e477058829b9e8fb9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e4a6caad51a69cf6559e60044f2d3dbd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_cipher_supported,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d86f6304f97e2717bc851db5adc56efc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_8184e067c7b3318913c3d0af6b23b2b9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_dsa_hash_supported,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d82117dc4ed0e432799f31c17c407791,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_2f9695857620d6d2233ed0e7e24be4e6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_dsa_parameters_supported,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2f8c7f19f15ce8d3dbee567ace0fcd1d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_a25814a7003287ed48ae69a3e2c8571e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_dsa_private_numbers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_216a142dccc3c948ceb3b6be3c20a623,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_71f31f6c62b756a0153edb43b508ea72,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_dsa_public_numbers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e9f78da43530584a8817b6df55cce50d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_1fd991e1ec7a538f20fe33eb5a63c23a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_dsa_parameter_numbers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9e5c294fafe8185c67192cd28d326f5a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e9c17f9e6a2cfa9137494e7cce4ddb68,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_917c9117910bd5840b802aff447d9b34,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_7b42f6a1029a280baccadb6ba9d7ebc2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_elliptic_curve_supported,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fbe0b79e94153e96ae22eaaa1fe2ec9e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_4ac388cc3596594b9fd1573ef2539537,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_generate_elliptic_curve_private_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_50bc47ba0ce124af2beab53829420e54,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_ea519da6621b2e6e31eb85b5c326163a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_elliptic_curve_public_numbers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dbfdcdfe68d97299ad4eec9209c5d88b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_c0bf5d81d20e7eb0288d1c3ad78eeb28,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_elliptic_curve_private_numbers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dfe47ea8210e1222fdd02d634bd97048,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_ddd3f25408786f407733d646162f8d59,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_create_symmetric_encryption_ctx,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fdabc188dd54f1a71c46c0c7f47e946b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_39ea98a078b45b6c442185503b966df2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_digest_19dba398fcfd0968a3203d943a394d68,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f73dc6ade5f75b261bd961625070cec3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_ae098508dd4bf88f8bb4a07250bc5a8b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_derive_elliptic_curve_private_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0aedaa222b12d85cf01b20a9c3b0c2d5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_84a9b90f7e986466b5f551b58b5724d7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_pem_private_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6ff1a9984885e2a369258e389fe8dbd2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_802d8f8fd7de6f6609d7f954c8f40bf6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_pem_public_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_afeff19d1857a8851f2cb1c3d004a329,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_cad1312c0a8ed12faaeb2b2356b3f42c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_pem_parameters,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1fa8963d71a51629c82dd5c625634ab4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_d5ab83d9695f4da166c2e74669073e5a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_der_private_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_af91f961e8913daa4e0142e1b8f48dc7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_4d1cd79c69148c2c65a70d73a3298974,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_der_public_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8fa7ded7a3fc9cf525c819a45fecaab6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_06e3225334eb391348195f4973a16cbd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_der_parameters,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1ec85a7afc80cae7ee593b69b16af1f3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_d57a4d29065ab4a1f221ca9cc91f876b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_pem_x509_certificate,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_351a9575e0a6878d98b768f2ed86b493,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_3be54078b9bd767d7e0767b5226c3e60,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_der_x509_certificate,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eb2c183404768828636de56018306d2a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_a37049685fe61ee43f425ff3884244a8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_create_symmetric_decryption_ctx,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_33dd68781b7b7cd36aa91bfb8e2d9a8b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e908e8afe1a83e928d0bef8e329dc68a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_der_x509_csr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_02bf5232bc20c971d9caa2e5fb51c880,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_12bf30ea148596af8b3db51961b172df,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_pem_x509_csr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4344bf1d5a17c92b18c76d44f7719163,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_36ba26e04775ce62acc2dcd612c29d46,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_create_x509_csr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_995cadec73ae00ab042d640b4cd0744c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_7f30278a4fcb72c48b5cd4ea5d079914,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_create_x509_certificate,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_df30014ebac032b8ed07b887c26afb17,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_2a51df9642a3dcdb589c8f1b9733a429,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_create_x509_crl,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e7ebfbf59b2e66888ad868c2aabfedf2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_6a83a3310dae744ebfd328dac16db727,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_create_x509_revoked_certificate,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e586e188641eb624e8c71c98af69c01a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_df210813cecf8d389a6a11cbd910135b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_x509_name_bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1abcaae28d3bb5bc7ed05737a6dd6b47,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_25517886b3a6e05088fb43990d2543ca,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_generate_dh_parameters,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5de7cf0e97637406a01e1b31066842c7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_3552c2706bf0622b7fcc4e5c6e7975ed,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_generate_dh_private_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_36f1553cc204047e63178b0c991e4318,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_4c0fc62fa075fc302d7e12cdc2b1a3c6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_generate_dh_private_key_and_parameters,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e0b9bdabb7e918c7e3c2f49c048cbdd9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_844858cfc3f176cb25cb563fa156777b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_hash_supported,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f604476c0b8591b8d81d40383575dfde,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_6314fa7c6fc48e2b2c8702ed369f8da8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_dh_private_numbers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6e253c98f05757445aeaf192db6994ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_b436da15690b01b9c2fa78c41a227f26,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_dh_public_numbers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fd6a0960075e0694c14dca5704335eb9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_28f4468d6c9734e18c72bd5ca6760f2c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_load_dh_parameter_numbers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b59f1fad5a7f8eb308f565c0c8615947,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_d9e232185946daeca898e40c39f68e36,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_dh_parameters_supported,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6a5e620801dd75749f2f9ee6879aeba0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e5bb0ce7e7381f786f9677c69b442e65,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_dh_x942_serialization_supported,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_43198be80d87980c3c65923fca984883,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_f0e494b50e5b866fcff26cb8f400c7a1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_derive_scrypt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a7512e6818fce6d621fc9d65eb35fa94,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_3efa1d11c5d8421580b0e5c4821ccde0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_create_hash_ctx,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_769880ebb1a9d47016bc978e8f4d90d2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_9d40568e0a0973abf5fe84776e9bb1b7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_hmac_supported,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f0232619613bfe2fa95fa5d9f7d2b904,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_a4c797d45dd48ad8578fe46499751f24,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_create_hmac_ctx,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_44ca6ef9b4e056663fb7df2af3f081c8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_33d14a975b19066b138ce5eafd89cff9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_cmac_algorithm_supported,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ebac46be026a46c31f0ee0475874f7a3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_8e914904ff9e228505332d098348b4f9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_create_cmac_ctx,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6891139ab88ee17a1e8a17a35a6cba07,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_33d14a975b19066b138ce5eafd89cff9,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$backends$interfaces =
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

function_impl_code functable_cryptography$hazmat$backends$interfaces[] = {
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
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

    function_impl_code *current = functable_cryptography$hazmat$backends$interfaces;
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

    if (offset > sizeof(functable_cryptography$hazmat$backends$interfaces) || offset < 0) {
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
        functable_cryptography$hazmat$backends$interfaces[offset],
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
        module_cryptography$hazmat$backends$interfaces,
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
PyObject *modulecode_cryptography$hazmat$backends$interfaces(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_cryptography$hazmat$backends$interfaces;
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
    PRINT_STRING("cryptography.hazmat.backends.interfaces: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.backends.interfaces: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.backends.interfaces: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$backends$interfaces\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$backends$interfaces = Py_InitModule4(
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
    mdef_cryptography$hazmat$backends$interfaces.m_name = module_full_name;
    module_cryptography$hazmat$backends$interfaces = PyModule_Create(&mdef_cryptography$hazmat$backends$interfaces);
#endif

    moduledict_cryptography$hazmat$backends$interfaces = MODULE_DICT(module_cryptography$hazmat$backends$interfaces);

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
        moduledict_cryptography$hazmat$backends$interfaces,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$backends$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$backends$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$backends$interfaces);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_cryptography$hazmat$backends$interfaces);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_10__class = NULL;
    PyObject *tmp_class_creation_10__class_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_11__class = NULL;
    PyObject *tmp_class_creation_11__class_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_12__class = NULL;
    PyObject *tmp_class_creation_12__class_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_13__class = NULL;
    PyObject *tmp_class_creation_13__class_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_6__class = NULL;
    PyObject *tmp_class_creation_6__class_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_7__class = NULL;
    PyObject *tmp_class_creation_7__class_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_8__class = NULL;
    PyObject *tmp_class_creation_8__class_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_9__class = NULL;
    PyObject *tmp_class_creation_9__class_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_10d9f4c759cadf00a4fbc1f439bf7e0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_cryptography$hazmat$backends$interfaces_13 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_5301f6b75cb571eb304abb503ef6c516_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5301f6b75cb571eb304abb503ef6c516_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_cryptography$hazmat$backends$interfaces_34 = NULL;
    struct Nuitka_FrameObject *frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_cryptography$hazmat$backends$interfaces_49 = NULL;
    struct Nuitka_FrameObject *frame_dab985935e6285f1b3ae9afa59b7dc62_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_dab985935e6285f1b3ae9afa59b7dc62_4 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_cryptography$hazmat$backends$interfaces_65 = NULL;
    struct Nuitka_FrameObject *frame_0689b0f676487420dd9d4a1584848fa0_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0689b0f676487420dd9d4a1584848fa0_5 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_cryptography$hazmat$backends$interfaces_80 = NULL;
    struct Nuitka_FrameObject *frame_441df054d0242983b394e063efdef2c3_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_441df054d0242983b394e063efdef2c3_6 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_cryptography$hazmat$backends$interfaces_97 = NULL;
    struct Nuitka_FrameObject *frame_2fa782de92e34691e9f4e7b9700cf4db_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2fa782de92e34691e9f4e7b9700cf4db_7 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_cryptography$hazmat$backends$interfaces_132 = NULL;
    struct Nuitka_FrameObject *frame_006a704c244b10d6d7644723885d09fb_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_006a704c244b10d6d7644723885d09fb_8 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_cryptography$hazmat$backends$interfaces_184 = NULL;
    struct Nuitka_FrameObject *frame_0c94371b09fc0141130d3fa348e8ce18_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0c94371b09fc0141130d3fa348e8ce18_9 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_cryptography$hazmat$backends$interfaces_232 = NULL;
    struct Nuitka_FrameObject *frame_126e34bc718565ef55fefe15bd17d3cf_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    static struct Nuitka_FrameObject *cache_frame_126e34bc718565ef55fefe15bd17d3cf_10 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_cryptography$hazmat$backends$interfaces_254 = NULL;
    struct Nuitka_FrameObject *frame_40bab78ef31aafc379e20440db4260a7_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    static struct Nuitka_FrameObject *cache_frame_40bab78ef31aafc379e20440db4260a7_11 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_cryptography$hazmat$backends$interfaces_276 = NULL;
    struct Nuitka_FrameObject *frame_0fbe5f7fa832f53e48656b7910af33b3_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0fbe5f7fa832f53e48656b7910af33b3_12 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *locals_cryptography$hazmat$backends$interfaces_335 = NULL;
    struct Nuitka_FrameObject *frame_1c87ee0eae6744dcbadc9080f2c61a1f_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    static struct Nuitka_FrameObject *cache_frame_1c87ee0eae6744dcbadc9080f2c61a1f_13 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_cryptography$hazmat$backends$interfaces_390 = NULL;
    struct Nuitka_FrameObject *frame_dfc1927ce0197293681eb1bfbad6bb3f_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    static struct Nuitka_FrameObject *cache_frame_dfc1927ce0197293681eb1bfbad6bb3f_14 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
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
    frame_10d9f4c759cadf00a4fbc1f439bf7e0a = MAKE_MODULE_FRAME(codeobj_10d9f4c759cadf00a4fbc1f439bf7e0a, module_cryptography$hazmat$backends$interfaces);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_10d9f4c759cadf00a4fbc1f439bf7e0a);
    assert(Py_REFCNT(frame_10d9f4c759cadf00a4fbc1f439bf7e0a) == 2);

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
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4);
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
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5);
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
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6);
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
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_abc;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 7;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_six;
        tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 9;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces_13 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_13, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_5301f6b75cb571eb304abb503ef6c516_2, codeobj_5301f6b75cb571eb304abb503ef6c516, module_cryptography$hazmat$backends$interfaces, 0);
        frame_5301f6b75cb571eb304abb503ef6c516_2 = cache_frame_5301f6b75cb571eb304abb503ef6c516_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_5301f6b75cb571eb304abb503ef6c516_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_5301f6b75cb571eb304abb503ef6c516_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            CHECK_OBJECT(tmp_mvar_value_1);
            tmp_called_instance_1 = tmp_mvar_value_1;
            tmp_args_element_name_1 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported();



            frame_5301f6b75cb571eb304abb503ef6c516_2->m_frame.f_lineno = 14;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_13, const_str_plain_cipher_supported, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 20;

                goto frame_exception_exit_2;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            tmp_args_element_name_2 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx();



            frame_5301f6b75cb571eb304abb503ef6c516_2->m_frame.f_lineno = 20;
            {
                PyObject *call_args[] = {tmp_args_element_name_2};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_13, const_str_plain_create_symmetric_encryption_ctx, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 26;

                goto frame_exception_exit_2;
            }

            tmp_called_instance_3 = tmp_mvar_value_3;
            tmp_args_element_name_3 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx();



            frame_5301f6b75cb571eb304abb503ef6c516_2->m_frame.f_lineno = 26;
            {
                PyObject *call_args[] = {tmp_args_element_name_3};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_13, const_str_plain_create_symmetric_decryption_ctx, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5301f6b75cb571eb304abb503ef6c516_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5301f6b75cb571eb304abb503ef6c516_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5301f6b75cb571eb304abb503ef6c516_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_5301f6b75cb571eb304abb503ef6c516_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5301f6b75cb571eb304abb503ef6c516_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_5301f6b75cb571eb304abb503ef6c516_2,
            type_description_2
        );


        // Release cached frame.
        if (frame_5301f6b75cb571eb304abb503ef6c516_2 == cache_frame_5301f6b75cb571eb304abb503ef6c516_2) {
            Py_DECREF(frame_5301f6b75cb571eb304abb503ef6c516_2);
        }
        cache_frame_5301f6b75cb571eb304abb503ef6c516_2 = NULL;

        assertFrameObject(frame_5301f6b75cb571eb304abb503ef6c516_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        tmp_assign_source_9 = locals_cryptography$hazmat$backends$interfaces_13;
        Py_INCREF(tmp_assign_source_9);
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_13);
        locals_cryptography$hazmat$backends$interfaces_13 = NULL;
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

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_13);
        locals_cryptography$hazmat$backends$interfaces_13 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        outline_exception_1:;
        exception_lineno = 13;
        goto try_except_handler_2;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_9;
    }
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


            exception_lineno = 13;

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


            exception_lineno = 13;

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
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_4 = const_str_plain_CipherBackend;
        tmp_args_element_name_5 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_6 = tmp_class_creation_1__class_dict;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 12;

            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_add_metaclass);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_5 == NULL) {
            Py_DECREF(tmp_called_name_3);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 12;

            goto try_except_handler_2;
        }

        tmp_source_name_2 = tmp_mvar_value_5;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_ABCMeta);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 12;

            goto try_except_handler_2;
        }
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 12;
        tmp_called_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_args_element_name_8 = tmp_class_creation_1__class;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 12;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_class_creation_1__class;
            assert(old != NULL);
            tmp_class_creation_1__class = tmp_assign_source_12;
            Py_DECREF(old);
        }

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

    Py_XDECREF(tmp_class_creation_1__class);
    tmp_class_creation_1__class = NULL;

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
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_13 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_CipherBackend, tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces_34 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_34, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3, codeobj_1d7e0e8e3dd596f29d641d2a0e23a11c, module_cryptography$hazmat$backends$interfaces, 0);
        frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3 = cache_frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_9;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_6 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 35;

                goto frame_exception_exit_3;
            }

            tmp_called_instance_4 = tmp_mvar_value_6;
            tmp_args_element_name_9 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported();



            frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3->m_frame.f_lineno = 35;
            {
                PyObject *call_args[] = {tmp_args_element_name_9};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_34, const_str_plain_hash_supported, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_10;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_7 == NULL)) {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_7 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 41;

                goto frame_exception_exit_3;
            }

            tmp_called_instance_5 = tmp_mvar_value_7;
            tmp_args_element_name_10 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx();



            frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3->m_frame.f_lineno = 41;
            {
                PyObject *call_args[] = {tmp_args_element_name_10};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_34, const_str_plain_create_hash_ctx, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3,
            type_description_2
        );


        // Release cached frame.
        if (frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3 == cache_frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3) {
            Py_DECREF(frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3);
        }
        cache_frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3 = NULL;

        assertFrameObject(frame_1d7e0e8e3dd596f29d641d2a0e23a11c_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_5;
        skip_nested_handling_2:;
        tmp_assign_source_14 = locals_cryptography$hazmat$backends$interfaces_34;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_34);
        locals_cryptography$hazmat$backends$interfaces_34 = NULL;
        goto outline_result_2;
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

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_34);
        locals_cryptography$hazmat$backends$interfaces_34 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        outline_exception_2:;
        exception_lineno = 34;
        goto try_except_handler_4;
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


            exception_lineno = 34;

            goto try_except_handler_4;
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


            exception_lineno = 34;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_15 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_15);
        condexpr_end_2:;
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_called_name_4 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_11 = const_str_plain_HashBackend;
        tmp_args_element_name_12 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_args_element_name_13 = tmp_class_creation_2__class_dict;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = {tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__class == NULL);
        tmp_class_creation_2__class = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 33;

            goto try_except_handler_4;
        }

        tmp_source_name_3 = tmp_mvar_value_8;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_add_metaclass);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_9 == NULL) {
            Py_DECREF(tmp_called_name_6);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 33;

            goto try_except_handler_4;
        }

        tmp_source_name_4 = tmp_mvar_value_9;
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_ABCMeta);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 33;

            goto try_except_handler_4;
        }
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 33;
        tmp_called_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_args_element_name_15 = tmp_class_creation_2__class;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 33;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_5);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_class_creation_2__class;
            assert(old != NULL);
            tmp_class_creation_2__class = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    goto try_end_3;
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

    Py_XDECREF(tmp_class_creation_2__class);
    tmp_class_creation_2__class = NULL;

    Py_XDECREF(tmp_class_creation_2__class_dict);
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_assign_source_18 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_HashBackend, tmp_assign_source_18);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_2__class);
    Py_DECREF(tmp_class_creation_2__class);
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__class_dict);
    Py_DECREF(tmp_class_creation_2__class_dict);
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces_49 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_49, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_dab985935e6285f1b3ae9afa59b7dc62_4, codeobj_dab985935e6285f1b3ae9afa59b7dc62, module_cryptography$hazmat$backends$interfaces, 0);
        frame_dab985935e6285f1b3ae9afa59b7dc62_4 = cache_frame_dab985935e6285f1b3ae9afa59b7dc62_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_dab985935e6285f1b3ae9afa59b7dc62_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_dab985935e6285f1b3ae9afa59b7dc62_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_16;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_10 == NULL)) {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_10 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 50;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_6 = tmp_mvar_value_10;
            tmp_args_element_name_16 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported();



            frame_dab985935e6285f1b3ae9afa59b7dc62_4->m_frame.f_lineno = 50;
            {
                PyObject *call_args[] = {tmp_args_element_name_16};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_49, const_str_plain_hmac_supported, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_17;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_11 == NULL)) {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_11 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 57;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_7 = tmp_mvar_value_11;
            tmp_args_element_name_17 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx();



            frame_dab985935e6285f1b3ae9afa59b7dc62_4->m_frame.f_lineno = 57;
            {
                PyObject *call_args[] = {tmp_args_element_name_17};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_49, const_str_plain_create_hmac_ctx, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dab985935e6285f1b3ae9afa59b7dc62_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dab985935e6285f1b3ae9afa59b7dc62_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dab985935e6285f1b3ae9afa59b7dc62_4, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_dab985935e6285f1b3ae9afa59b7dc62_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dab985935e6285f1b3ae9afa59b7dc62_4, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_dab985935e6285f1b3ae9afa59b7dc62_4,
            type_description_2
        );


        // Release cached frame.
        if (frame_dab985935e6285f1b3ae9afa59b7dc62_4 == cache_frame_dab985935e6285f1b3ae9afa59b7dc62_4) {
            Py_DECREF(frame_dab985935e6285f1b3ae9afa59b7dc62_4);
        }
        cache_frame_dab985935e6285f1b3ae9afa59b7dc62_4 = NULL;

        assertFrameObject(frame_dab985935e6285f1b3ae9afa59b7dc62_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_7;
        skip_nested_handling_3:;
        tmp_assign_source_19 = locals_cryptography$hazmat$backends$interfaces_49;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_49);
        locals_cryptography$hazmat$backends$interfaces_49 = NULL;
        goto outline_result_3;
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

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_49);
        locals_cryptography$hazmat$backends$interfaces_49 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        outline_exception_3:;
        exception_lineno = 49;
        goto try_except_handler_6;
        outline_result_3:;
        assert(tmp_class_creation_3__class_dict == NULL);
        tmp_class_creation_3__class_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
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


            exception_lineno = 49;

            goto try_except_handler_6;
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
        tmp_assign_source_20 = DICT_GET_ITEM(tmp_dict_name_6, tmp_key_name_6);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_6;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_20 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_20);
        condexpr_end_3:;
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_called_name_7 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_18 = const_str_plain_HMACBackend;
        tmp_args_element_name_19 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_args_element_name_20 = tmp_class_creation_3__class_dict;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, call_args);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_3__class == NULL);
        tmp_class_creation_3__class = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_22;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_12 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 48;

            goto try_except_handler_6;
        }

        tmp_source_name_5 = tmp_mvar_value_12;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_add_metaclass);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_6;
        }
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_13 == NULL) {
            Py_DECREF(tmp_called_name_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 48;

            goto try_except_handler_6;
        }

        tmp_source_name_6 = tmp_mvar_value_13;
        tmp_args_element_name_21 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_ABCMeta);
        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 48;

            goto try_except_handler_6;
        }
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 48;
        tmp_called_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_21);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_6;
        }
        CHECK_OBJECT(tmp_class_creation_3__class);
        tmp_args_element_name_22 = tmp_class_creation_3__class;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 48;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_22);
        Py_DECREF(tmp_called_name_8);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_class_creation_3__class;
            assert(old != NULL);
            tmp_class_creation_3__class = tmp_assign_source_22;
            Py_DECREF(old);
        }

    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__class);
    tmp_class_creation_3__class = NULL;

    Py_XDECREF(tmp_class_creation_3__class_dict);
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_class_creation_3__class);
        tmp_assign_source_23 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_HMACBackend, tmp_assign_source_23);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_3__class);
    Py_DECREF(tmp_class_creation_3__class);
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_3__class_dict);
    Py_DECREF(tmp_class_creation_3__class_dict);
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces_65 = tmp_set_locals_4;
        }
        tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_65, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_0689b0f676487420dd9d4a1584848fa0_5, codeobj_0689b0f676487420dd9d4a1584848fa0, module_cryptography$hazmat$backends$interfaces, 0);
        frame_0689b0f676487420dd9d4a1584848fa0_5 = cache_frame_0689b0f676487420dd9d4a1584848fa0_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0689b0f676487420dd9d4a1584848fa0_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0689b0f676487420dd9d4a1584848fa0_5) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_args_element_name_23;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_14 == NULL)) {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_14 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 66;

                goto frame_exception_exit_5;
            }

            tmp_called_instance_8 = tmp_mvar_value_14;
            tmp_args_element_name_23 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported();



            frame_0689b0f676487420dd9d4a1584848fa0_5->m_frame.f_lineno = 66;
            {
                PyObject *call_args[] = {tmp_args_element_name_23};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_65, const_str_plain_cmac_algorithm_supported, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_args_element_name_24;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_15 == NULL)) {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_15 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 72;

                goto frame_exception_exit_5;
            }

            tmp_called_instance_9 = tmp_mvar_value_15;
            tmp_args_element_name_24 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx();



            frame_0689b0f676487420dd9d4a1584848fa0_5->m_frame.f_lineno = 72;
            {
                PyObject *call_args[] = {tmp_args_element_name_24};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_65, const_str_plain_create_cmac_ctx, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0689b0f676487420dd9d4a1584848fa0_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0689b0f676487420dd9d4a1584848fa0_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0689b0f676487420dd9d4a1584848fa0_5, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_0689b0f676487420dd9d4a1584848fa0_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0689b0f676487420dd9d4a1584848fa0_5, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0689b0f676487420dd9d4a1584848fa0_5,
            type_description_2
        );


        // Release cached frame.
        if (frame_0689b0f676487420dd9d4a1584848fa0_5 == cache_frame_0689b0f676487420dd9d4a1584848fa0_5) {
            Py_DECREF(frame_0689b0f676487420dd9d4a1584848fa0_5);
        }
        cache_frame_0689b0f676487420dd9d4a1584848fa0_5 = NULL;

        assertFrameObject(frame_0689b0f676487420dd9d4a1584848fa0_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_9;
        skip_nested_handling_4:;
        tmp_assign_source_24 = locals_cryptography$hazmat$backends$interfaces_65;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_65);
        locals_cryptography$hazmat$backends$interfaces_65 = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_65);
        locals_cryptography$hazmat$backends$interfaces_65 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        outline_exception_4:;
        exception_lineno = 65;
        goto try_except_handler_8;
        outline_result_4:;
        assert(tmp_class_creation_4__class_dict == NULL);
        tmp_class_creation_4__class_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        tmp_key_name_7 = const_str_plain___metaclass__;
        CHECK_OBJECT(tmp_class_creation_4__class_dict);
        tmp_dict_name_7 = tmp_class_creation_4__class_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_7, tmp_key_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_8;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__class_dict);
        tmp_dict_name_8 = tmp_class_creation_4__class_dict;
        tmp_key_name_8 = const_str_plain___metaclass__;
        tmp_assign_source_25 = DICT_GET_ITEM(tmp_dict_name_8, tmp_key_name_8);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_8;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_assign_source_25 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_25);
        condexpr_end_4:;
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_called_name_10 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_25 = const_str_plain_CMACBackend;
        tmp_args_element_name_26 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_4__class_dict);
        tmp_args_element_name_27 = tmp_class_creation_4__class_dict;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_10, call_args);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_4__class == NULL);
        tmp_class_creation_4__class = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_11;
        PyObject *tmp_called_name_12;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_29;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_16 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 64;

            goto try_except_handler_8;
        }

        tmp_source_name_7 = tmp_mvar_value_16;
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_add_metaclass);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_8;
        }
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_17 == NULL)) {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_17 == NULL) {
            Py_DECREF(tmp_called_name_12);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 64;

            goto try_except_handler_8;
        }

        tmp_source_name_8 = tmp_mvar_value_17;
        tmp_args_element_name_28 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_ABCMeta);
        if (tmp_args_element_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 64;

            goto try_except_handler_8;
        }
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 64;
        tmp_called_name_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_28);
        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_28);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_8;
        }
        CHECK_OBJECT(tmp_class_creation_4__class);
        tmp_args_element_name_29 = tmp_class_creation_4__class;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 64;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_29);
        Py_DECREF(tmp_called_name_11);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_class_creation_4__class;
            assert(old != NULL);
            tmp_class_creation_4__class = tmp_assign_source_27;
            Py_DECREF(old);
        }

    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__class);
    tmp_class_creation_4__class = NULL;

    Py_XDECREF(tmp_class_creation_4__class_dict);
    tmp_class_creation_4__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_class_creation_4__class);
        tmp_assign_source_28 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_CMACBackend, tmp_assign_source_28);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_4__class);
    Py_DECREF(tmp_class_creation_4__class);
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_4__class_dict);
    Py_DECREF(tmp_class_creation_4__class_dict);
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces_80 = tmp_set_locals_5;
        }
        tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_80, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_441df054d0242983b394e063efdef2c3_6, codeobj_441df054d0242983b394e063efdef2c3, module_cryptography$hazmat$backends$interfaces, 0);
        frame_441df054d0242983b394e063efdef2c3_6 = cache_frame_441df054d0242983b394e063efdef2c3_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_441df054d0242983b394e063efdef2c3_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_441df054d0242983b394e063efdef2c3_6) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_args_element_name_30;
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_18 == NULL)) {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_18 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 81;

                goto frame_exception_exit_6;
            }

            tmp_called_instance_10 = tmp_mvar_value_18;
            tmp_args_element_name_30 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported();



            frame_441df054d0242983b394e063efdef2c3_6->m_frame.f_lineno = 81;
            {
                PyObject *call_args[] = {tmp_args_element_name_30};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_80, const_str_plain_pbkdf2_hmac_supported, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_args_element_name_31;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_19 == NULL)) {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_19 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 88;

                goto frame_exception_exit_6;
            }

            tmp_called_instance_11 = tmp_mvar_value_19;
            tmp_args_element_name_31 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac();



            frame_441df054d0242983b394e063efdef2c3_6->m_frame.f_lineno = 88;
            {
                PyObject *call_args[] = {tmp_args_element_name_31};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_80, const_str_plain_derive_pbkdf2_hmac, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_441df054d0242983b394e063efdef2c3_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_441df054d0242983b394e063efdef2c3_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_441df054d0242983b394e063efdef2c3_6, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_441df054d0242983b394e063efdef2c3_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_441df054d0242983b394e063efdef2c3_6, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_441df054d0242983b394e063efdef2c3_6,
            type_description_2
        );


        // Release cached frame.
        if (frame_441df054d0242983b394e063efdef2c3_6 == cache_frame_441df054d0242983b394e063efdef2c3_6) {
            Py_DECREF(frame_441df054d0242983b394e063efdef2c3_6);
        }
        cache_frame_441df054d0242983b394e063efdef2c3_6 = NULL;

        assertFrameObject(frame_441df054d0242983b394e063efdef2c3_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_11;
        skip_nested_handling_5:;
        tmp_assign_source_29 = locals_cryptography$hazmat$backends$interfaces_80;
        Py_INCREF(tmp_assign_source_29);
        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_80);
        locals_cryptography$hazmat$backends$interfaces_80 = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_80);
        locals_cryptography$hazmat$backends$interfaces_80 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_5;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        outline_exception_5:;
        exception_lineno = 80;
        goto try_except_handler_10;
        outline_result_5:;
        assert(tmp_class_creation_5__class_dict == NULL);
        tmp_class_creation_5__class_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_key_name_10;
        tmp_key_name_9 = const_str_plain___metaclass__;
        CHECK_OBJECT(tmp_class_creation_5__class_dict);
        tmp_dict_name_9 = tmp_class_creation_5__class_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_9, tmp_key_name_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_10;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__class_dict);
        tmp_dict_name_10 = tmp_class_creation_5__class_dict;
        tmp_key_name_10 = const_str_plain___metaclass__;
        tmp_assign_source_30 = DICT_GET_ITEM(tmp_dict_name_10, tmp_key_name_10);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_10;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_assign_source_30 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_30);
        condexpr_end_5:;
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_args_element_name_34;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_called_name_13 = tmp_class_creation_5__metaclass;
        tmp_args_element_name_32 = const_str_plain_PBKDF2HMACBackend;
        tmp_args_element_name_33 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_5__class_dict);
        tmp_args_element_name_34 = tmp_class_creation_5__class_dict;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34};
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_13, call_args);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_5__class == NULL);
        tmp_class_creation_5__class = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_36;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_20 == NULL)) {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_20 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 79;

            goto try_except_handler_10;
        }

        tmp_source_name_9 = tmp_mvar_value_20;
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_add_metaclass);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_21 == NULL)) {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_21 == NULL) {
            Py_DECREF(tmp_called_name_15);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 79;

            goto try_except_handler_10;
        }

        tmp_source_name_10 = tmp_mvar_value_21;
        tmp_args_element_name_35 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_ABCMeta);
        if (tmp_args_element_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 79;

            goto try_except_handler_10;
        }
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 79;
        tmp_called_name_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_35);
        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_element_name_35);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        CHECK_OBJECT(tmp_class_creation_5__class);
        tmp_args_element_name_36 = tmp_class_creation_5__class;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 79;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_36);
        Py_DECREF(tmp_called_name_14);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_class_creation_5__class;
            assert(old != NULL);
            tmp_class_creation_5__class = tmp_assign_source_32;
            Py_DECREF(old);
        }

    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__class);
    tmp_class_creation_5__class = NULL;

    Py_XDECREF(tmp_class_creation_5__class_dict);
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_class_creation_5__class);
        tmp_assign_source_33 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_PBKDF2HMACBackend, tmp_assign_source_33);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_5__class);
    Py_DECREF(tmp_class_creation_5__class);
    tmp_class_creation_5__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_5__class_dict);
    Py_DECREF(tmp_class_creation_5__class_dict);
    tmp_class_creation_5__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_6;
            tmp_set_locals_6 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces_97 = tmp_set_locals_6;
        }
        tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_97, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_2fa782de92e34691e9f4e7b9700cf4db_7, codeobj_2fa782de92e34691e9f4e7b9700cf4db, module_cryptography$hazmat$backends$interfaces, 0);
        frame_2fa782de92e34691e9f4e7b9700cf4db_7 = cache_frame_2fa782de92e34691e9f4e7b9700cf4db_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_2fa782de92e34691e9f4e7b9700cf4db_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_2fa782de92e34691e9f4e7b9700cf4db_7) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_12;
            PyObject *tmp_mvar_value_22;
            PyObject *tmp_args_element_name_37;
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_22 == NULL)) {
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_22 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 98;

                goto frame_exception_exit_7;
            }

            tmp_called_instance_12 = tmp_mvar_value_22;
            tmp_args_element_name_37 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key();



            frame_2fa782de92e34691e9f4e7b9700cf4db_7->m_frame.f_lineno = 98;
            {
                PyObject *call_args[] = {tmp_args_element_name_37};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_generate_rsa_private_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_13;
            PyObject *tmp_mvar_value_23;
            PyObject *tmp_args_element_name_38;
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_23 == NULL)) {
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_23 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 105;

                goto frame_exception_exit_7;
            }

            tmp_called_instance_13 = tmp_mvar_value_23;
            tmp_args_element_name_38 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported();



            frame_2fa782de92e34691e9f4e7b9700cf4db_7->m_frame.f_lineno = 105;
            {
                PyObject *call_args[] = {tmp_args_element_name_38};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_13, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_rsa_padding_supported, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_14;
            PyObject *tmp_mvar_value_24;
            PyObject *tmp_args_element_name_39;
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_24 == NULL)) {
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_24 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 111;

                goto frame_exception_exit_7;
            }

            tmp_called_instance_14 = tmp_mvar_value_24;
            tmp_args_element_name_39 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported();



            frame_2fa782de92e34691e9f4e7b9700cf4db_7->m_frame.f_lineno = 111;
            {
                PyObject *call_args[] = {tmp_args_element_name_39};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_14, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_generate_rsa_parameters_supported, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_15;
            PyObject *tmp_mvar_value_25;
            PyObject *tmp_args_element_name_40;
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_25 == NULL)) {
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_25 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 118;

                goto frame_exception_exit_7;
            }

            tmp_called_instance_15 = tmp_mvar_value_25;
            tmp_args_element_name_40 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers();



            frame_2fa782de92e34691e9f4e7b9700cf4db_7->m_frame.f_lineno = 118;
            {
                PyObject *call_args[] = {tmp_args_element_name_40};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_15, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_load_rsa_private_numbers, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_16;
            PyObject *tmp_mvar_value_26;
            PyObject *tmp_args_element_name_41;
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_26 == NULL)) {
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_26 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 124;

                goto frame_exception_exit_7;
            }

            tmp_called_instance_16 = tmp_mvar_value_26;
            tmp_args_element_name_41 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers();



            frame_2fa782de92e34691e9f4e7b9700cf4db_7->m_frame.f_lineno = 124;
            {
                PyObject *call_args[] = {tmp_args_element_name_41};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_16, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_load_rsa_public_numbers, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto frame_exception_exit_7;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2fa782de92e34691e9f4e7b9700cf4db_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2fa782de92e34691e9f4e7b9700cf4db_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2fa782de92e34691e9f4e7b9700cf4db_7, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_2fa782de92e34691e9f4e7b9700cf4db_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2fa782de92e34691e9f4e7b9700cf4db_7, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_2fa782de92e34691e9f4e7b9700cf4db_7,
            type_description_2
        );


        // Release cached frame.
        if (frame_2fa782de92e34691e9f4e7b9700cf4db_7 == cache_frame_2fa782de92e34691e9f4e7b9700cf4db_7) {
            Py_DECREF(frame_2fa782de92e34691e9f4e7b9700cf4db_7);
        }
        cache_frame_2fa782de92e34691e9f4e7b9700cf4db_7 = NULL;

        assertFrameObject(frame_2fa782de92e34691e9f4e7b9700cf4db_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_13;
        skip_nested_handling_6:;
        tmp_assign_source_34 = locals_cryptography$hazmat$backends$interfaces_97;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_13;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_97);
        locals_cryptography$hazmat$backends$interfaces_97 = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_97);
        locals_cryptography$hazmat$backends$interfaces_97 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_6;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        outline_exception_6:;
        exception_lineno = 97;
        goto try_except_handler_12;
        outline_result_6:;
        assert(tmp_class_creation_6__class_dict == NULL);
        tmp_class_creation_6__class_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_11;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_dict_name_12;
        PyObject *tmp_key_name_12;
        tmp_key_name_11 = const_str_plain___metaclass__;
        CHECK_OBJECT(tmp_class_creation_6__class_dict);
        tmp_dict_name_11 = tmp_class_creation_6__class_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_11, tmp_key_name_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_12;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__class_dict);
        tmp_dict_name_12 = tmp_class_creation_6__class_dict;
        tmp_key_name_12 = const_str_plain___metaclass__;
        tmp_assign_source_35 = DICT_GET_ITEM(tmp_dict_name_12, tmp_key_name_12);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_12;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_assign_source_35 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_35);
        condexpr_end_6:;
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_name_16;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_args_element_name_44;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_called_name_16 = tmp_class_creation_6__metaclass;
        tmp_args_element_name_42 = const_str_plain_RSABackend;
        tmp_args_element_name_43 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_6__class_dict);
        tmp_args_element_name_44 = tmp_class_creation_6__class_dict;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_44};
            tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_16, call_args);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_6__class == NULL);
        tmp_class_creation_6__class = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_17;
        PyObject *tmp_called_name_18;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_46;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_27 == NULL)) {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_27 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 96;

            goto try_except_handler_12;
        }

        tmp_source_name_11 = tmp_mvar_value_27;
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_add_metaclass);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_12;
        }
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_28 == NULL)) {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_28 == NULL) {
            Py_DECREF(tmp_called_name_18);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 96;

            goto try_except_handler_12;
        }

        tmp_source_name_12 = tmp_mvar_value_28;
        tmp_args_element_name_45 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_ABCMeta);
        if (tmp_args_element_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 96;

            goto try_except_handler_12;
        }
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 96;
        tmp_called_name_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_45);
        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_element_name_45);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_12;
        }
        CHECK_OBJECT(tmp_class_creation_6__class);
        tmp_args_element_name_46 = tmp_class_creation_6__class;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 96;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_46);
        Py_DECREF(tmp_called_name_17);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_class_creation_6__class;
            assert(old != NULL);
            tmp_class_creation_6__class = tmp_assign_source_37;
            Py_DECREF(old);
        }

    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__class);
    tmp_class_creation_6__class = NULL;

    Py_XDECREF(tmp_class_creation_6__class_dict);
    tmp_class_creation_6__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_class_creation_6__class);
        tmp_assign_source_38 = tmp_class_creation_6__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_RSABackend, tmp_assign_source_38);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_6__class);
    Py_DECREF(tmp_class_creation_6__class);
    tmp_class_creation_6__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_6__class_dict);
    Py_DECREF(tmp_class_creation_6__class_dict);
    tmp_class_creation_6__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_7;
            tmp_set_locals_7 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces_132 = tmp_set_locals_7;
        }
        tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_132, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_006a704c244b10d6d7644723885d09fb_8, codeobj_006a704c244b10d6d7644723885d09fb, module_cryptography$hazmat$backends$interfaces, 0);
        frame_006a704c244b10d6d7644723885d09fb_8 = cache_frame_006a704c244b10d6d7644723885d09fb_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_006a704c244b10d6d7644723885d09fb_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_006a704c244b10d6d7644723885d09fb_8) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_17;
            PyObject *tmp_mvar_value_29;
            PyObject *tmp_args_element_name_47;
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_29 == NULL)) {
                tmp_mvar_value_29 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_29 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 133;

                goto frame_exception_exit_8;
            }

            tmp_called_instance_17 = tmp_mvar_value_29;
            tmp_args_element_name_47 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters();



            frame_006a704c244b10d6d7644723885d09fb_8->m_frame.f_lineno = 133;
            {
                PyObject *call_args[] = {tmp_args_element_name_47};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_17, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_generate_dsa_parameters, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_18;
            PyObject *tmp_mvar_value_30;
            PyObject *tmp_args_element_name_48;
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_30 == NULL)) {
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_30 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 139;

                goto frame_exception_exit_8;
            }

            tmp_called_instance_18 = tmp_mvar_value_30;
            tmp_args_element_name_48 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key();



            frame_006a704c244b10d6d7644723885d09fb_8->m_frame.f_lineno = 139;
            {
                PyObject *call_args[] = {tmp_args_element_name_48};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_18, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_generate_dsa_private_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_19;
            PyObject *tmp_mvar_value_31;
            PyObject *tmp_args_element_name_49;
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_31 == NULL)) {
                tmp_mvar_value_31 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_31 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 146;

                goto frame_exception_exit_8;
            }

            tmp_called_instance_19 = tmp_mvar_value_31;
            tmp_args_element_name_49 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters();



            frame_006a704c244b10d6d7644723885d09fb_8->m_frame.f_lineno = 146;
            {
                PyObject *call_args[] = {tmp_args_element_name_49};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_19, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_generate_dsa_private_key_and_parameters, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_20;
            PyObject *tmp_mvar_value_32;
            PyObject *tmp_args_element_name_50;
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_32 == NULL)) {
                tmp_mvar_value_32 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_32 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 152;

                goto frame_exception_exit_8;
            }

            tmp_called_instance_20 = tmp_mvar_value_32;
            tmp_args_element_name_50 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported();



            frame_006a704c244b10d6d7644723885d09fb_8->m_frame.f_lineno = 152;
            {
                PyObject *call_args[] = {tmp_args_element_name_50};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_20, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_dsa_hash_supported, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_21;
            PyObject *tmp_mvar_value_33;
            PyObject *tmp_args_element_name_51;
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_33 == NULL)) {
                tmp_mvar_value_33 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_33 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 158;

                goto frame_exception_exit_8;
            }

            tmp_called_instance_21 = tmp_mvar_value_33;
            tmp_args_element_name_51 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported();



            frame_006a704c244b10d6d7644723885d09fb_8->m_frame.f_lineno = 158;
            {
                PyObject *call_args[] = {tmp_args_element_name_51};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_21, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_dsa_parameters_supported, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_22;
            PyObject *tmp_mvar_value_34;
            PyObject *tmp_args_element_name_52;
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_34 == NULL)) {
                tmp_mvar_value_34 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_34 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 164;

                goto frame_exception_exit_8;
            }

            tmp_called_instance_22 = tmp_mvar_value_34;
            tmp_args_element_name_52 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers();



            frame_006a704c244b10d6d7644723885d09fb_8->m_frame.f_lineno = 164;
            {
                PyObject *call_args[] = {tmp_args_element_name_52};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_22, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_52);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_load_dsa_private_numbers, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_23;
            PyObject *tmp_mvar_value_35;
            PyObject *tmp_args_element_name_53;
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_35 == NULL)) {
                tmp_mvar_value_35 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_35 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 170;

                goto frame_exception_exit_8;
            }

            tmp_called_instance_23 = tmp_mvar_value_35;
            tmp_args_element_name_53 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers();



            frame_006a704c244b10d6d7644723885d09fb_8->m_frame.f_lineno = 170;
            {
                PyObject *call_args[] = {tmp_args_element_name_53};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_23, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_53);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_load_dsa_public_numbers, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_24;
            PyObject *tmp_mvar_value_36;
            PyObject *tmp_args_element_name_54;
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_36 == NULL)) {
                tmp_mvar_value_36 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_36 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 176;

                goto frame_exception_exit_8;
            }

            tmp_called_instance_24 = tmp_mvar_value_36;
            tmp_args_element_name_54 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers();



            frame_006a704c244b10d6d7644723885d09fb_8->m_frame.f_lineno = 176;
            {
                PyObject *call_args[] = {tmp_args_element_name_54};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_24, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_54);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_load_dsa_parameter_numbers, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_006a704c244b10d6d7644723885d09fb_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_006a704c244b10d6d7644723885d09fb_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_006a704c244b10d6d7644723885d09fb_8, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_006a704c244b10d6d7644723885d09fb_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_006a704c244b10d6d7644723885d09fb_8, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_006a704c244b10d6d7644723885d09fb_8,
            type_description_2
        );


        // Release cached frame.
        if (frame_006a704c244b10d6d7644723885d09fb_8 == cache_frame_006a704c244b10d6d7644723885d09fb_8) {
            Py_DECREF(frame_006a704c244b10d6d7644723885d09fb_8);
        }
        cache_frame_006a704c244b10d6d7644723885d09fb_8 = NULL;

        assertFrameObject(frame_006a704c244b10d6d7644723885d09fb_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_15;
        skip_nested_handling_7:;
        tmp_assign_source_39 = locals_cryptography$hazmat$backends$interfaces_132;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_15;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_132);
        locals_cryptography$hazmat$backends$interfaces_132 = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_132);
        locals_cryptography$hazmat$backends$interfaces_132 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_7;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        outline_exception_7:;
        exception_lineno = 132;
        goto try_except_handler_14;
        outline_result_7:;
        assert(tmp_class_creation_7__class_dict == NULL);
        tmp_class_creation_7__class_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        tmp_key_name_13 = const_str_plain___metaclass__;
        CHECK_OBJECT(tmp_class_creation_7__class_dict);
        tmp_dict_name_13 = tmp_class_creation_7__class_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_13, tmp_key_name_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_14;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__class_dict);
        tmp_dict_name_14 = tmp_class_creation_7__class_dict;
        tmp_key_name_14 = const_str_plain___metaclass__;
        tmp_assign_source_40 = DICT_GET_ITEM(tmp_dict_name_14, tmp_key_name_14);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_14;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_assign_source_40 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_40);
        condexpr_end_7:;
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_args_element_name_57;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_called_name_19 = tmp_class_creation_7__metaclass;
        tmp_args_element_name_55 = const_str_plain_DSABackend;
        tmp_args_element_name_56 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_7__class_dict);
        tmp_args_element_name_57 = tmp_class_creation_7__class_dict;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_args_element_name_55, tmp_args_element_name_56, tmp_args_element_name_57};
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_19, call_args);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_7__class == NULL);
        tmp_class_creation_7__class = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_20;
        PyObject *tmp_called_name_21;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_37;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_38;
        PyObject *tmp_args_element_name_59;
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_37 == NULL)) {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_37 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 131;

            goto try_except_handler_14;
        }

        tmp_source_name_13 = tmp_mvar_value_37;
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_add_metaclass);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_14;
        }
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_38 == NULL)) {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_38 == NULL) {
            Py_DECREF(tmp_called_name_21);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 131;

            goto try_except_handler_14;
        }

        tmp_source_name_14 = tmp_mvar_value_38;
        tmp_args_element_name_58 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_ABCMeta);
        if (tmp_args_element_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 131;

            goto try_except_handler_14;
        }
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 131;
        tmp_called_name_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_58);
        Py_DECREF(tmp_called_name_21);
        Py_DECREF(tmp_args_element_name_58);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_14;
        }
        CHECK_OBJECT(tmp_class_creation_7__class);
        tmp_args_element_name_59 = tmp_class_creation_7__class;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 131;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_59);
        Py_DECREF(tmp_called_name_20);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_class_creation_7__class;
            assert(old != NULL);
            tmp_class_creation_7__class = tmp_assign_source_42;
            Py_DECREF(old);
        }

    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__class);
    tmp_class_creation_7__class = NULL;

    Py_XDECREF(tmp_class_creation_7__class_dict);
    tmp_class_creation_7__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(tmp_class_creation_7__class);
        tmp_assign_source_43 = tmp_class_creation_7__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_DSABackend, tmp_assign_source_43);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_7__class);
    Py_DECREF(tmp_class_creation_7__class);
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_7__class_dict);
    Py_DECREF(tmp_class_creation_7__class_dict);
    tmp_class_creation_7__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        {
            PyObject *tmp_set_locals_8;
            tmp_set_locals_8 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces_184 = tmp_set_locals_8;
        }
        tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_184, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_0c94371b09fc0141130d3fa348e8ce18_9, codeobj_0c94371b09fc0141130d3fa348e8ce18, module_cryptography$hazmat$backends$interfaces, 0);
        frame_0c94371b09fc0141130d3fa348e8ce18_9 = cache_frame_0c94371b09fc0141130d3fa348e8ce18_9;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0c94371b09fc0141130d3fa348e8ce18_9);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0c94371b09fc0141130d3fa348e8ce18_9) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_25;
            PyObject *tmp_mvar_value_39;
            PyObject *tmp_args_element_name_60;
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_39 == NULL)) {
                tmp_mvar_value_39 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_39 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 185;

                goto frame_exception_exit_9;
            }

            tmp_called_instance_25 = tmp_mvar_value_39;
            tmp_args_element_name_60 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported();



            frame_0c94371b09fc0141130d3fa348e8ce18_9->m_frame.f_lineno = 185;
            {
                PyObject *call_args[] = {tmp_args_element_name_60};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_25, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_60);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_184, const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_26;
            PyObject *tmp_mvar_value_40;
            PyObject *tmp_args_element_name_61;
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_40 == NULL)) {
                tmp_mvar_value_40 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_40 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 194;

                goto frame_exception_exit_9;
            }

            tmp_called_instance_26 = tmp_mvar_value_40;
            tmp_args_element_name_61 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported();



            frame_0c94371b09fc0141130d3fa348e8ce18_9->m_frame.f_lineno = 194;
            {
                PyObject *call_args[] = {tmp_args_element_name_61};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_26, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_61);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_elliptic_curve_supported, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_27;
            PyObject *tmp_mvar_value_41;
            PyObject *tmp_args_element_name_62;
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_41 == NULL)) {
                tmp_mvar_value_41 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_41 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 200;

                goto frame_exception_exit_9;
            }

            tmp_called_instance_27 = tmp_mvar_value_41;
            tmp_args_element_name_62 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key();



            frame_0c94371b09fc0141130d3fa348e8ce18_9->m_frame.f_lineno = 200;
            {
                PyObject *call_args[] = {tmp_args_element_name_62};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_27, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_62);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_generate_elliptic_curve_private_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_28;
            PyObject *tmp_mvar_value_42;
            PyObject *tmp_args_element_name_63;
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_42 == NULL)) {
                tmp_mvar_value_42 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_42 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 206;

                goto frame_exception_exit_9;
            }

            tmp_called_instance_28 = tmp_mvar_value_42;
            tmp_args_element_name_63 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers();



            frame_0c94371b09fc0141130d3fa348e8ce18_9->m_frame.f_lineno = 206;
            {
                PyObject *call_args[] = {tmp_args_element_name_63};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_28, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_63);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_load_elliptic_curve_public_numbers, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_29;
            PyObject *tmp_mvar_value_43;
            PyObject *tmp_args_element_name_64;
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_43 == NULL)) {
                tmp_mvar_value_43 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_43 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 212;

                goto frame_exception_exit_9;
            }

            tmp_called_instance_29 = tmp_mvar_value_43;
            tmp_args_element_name_64 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers();



            frame_0c94371b09fc0141130d3fa348e8ce18_9->m_frame.f_lineno = 212;
            {
                PyObject *call_args[] = {tmp_args_element_name_64};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_29, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_64);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_load_elliptic_curve_private_numbers, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_30;
            PyObject *tmp_mvar_value_44;
            PyObject *tmp_args_element_name_65;
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_44 == NULL)) {
                tmp_mvar_value_44 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_44 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 218;

                goto frame_exception_exit_9;
            }

            tmp_called_instance_30 = tmp_mvar_value_44;
            tmp_args_element_name_65 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported();



            frame_0c94371b09fc0141130d3fa348e8ce18_9->m_frame.f_lineno = 218;
            {
                PyObject *call_args[] = {tmp_args_element_name_65};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_30, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_65);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_184, const_str_digest_19dba398fcfd0968a3203d943a394d68, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_31;
            PyObject *tmp_mvar_value_45;
            PyObject *tmp_args_element_name_66;
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_45 == NULL)) {
                tmp_mvar_value_45 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_45 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 224;

                goto frame_exception_exit_9;
            }

            tmp_called_instance_31 = tmp_mvar_value_45;
            tmp_args_element_name_66 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key();



            frame_0c94371b09fc0141130d3fa348e8ce18_9->m_frame.f_lineno = 224;
            {
                PyObject *call_args[] = {tmp_args_element_name_66};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_31, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_66);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_derive_elliptic_curve_private_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto frame_exception_exit_9;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0c94371b09fc0141130d3fa348e8ce18_9);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0c94371b09fc0141130d3fa348e8ce18_9);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0c94371b09fc0141130d3fa348e8ce18_9, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_0c94371b09fc0141130d3fa348e8ce18_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0c94371b09fc0141130d3fa348e8ce18_9, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0c94371b09fc0141130d3fa348e8ce18_9,
            type_description_2
        );


        // Release cached frame.
        if (frame_0c94371b09fc0141130d3fa348e8ce18_9 == cache_frame_0c94371b09fc0141130d3fa348e8ce18_9) {
            Py_DECREF(frame_0c94371b09fc0141130d3fa348e8ce18_9);
        }
        cache_frame_0c94371b09fc0141130d3fa348e8ce18_9 = NULL;

        assertFrameObject(frame_0c94371b09fc0141130d3fa348e8ce18_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;

        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_17;
        skip_nested_handling_8:;
        tmp_assign_source_44 = locals_cryptography$hazmat$backends$interfaces_184;
        Py_INCREF(tmp_assign_source_44);
        goto try_return_handler_17;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_184);
        locals_cryptography$hazmat$backends$interfaces_184 = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_184);
        locals_cryptography$hazmat$backends$interfaces_184 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_8;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        outline_exception_8:;
        exception_lineno = 184;
        goto try_except_handler_16;
        outline_result_8:;
        assert(tmp_class_creation_8__class_dict == NULL);
        tmp_class_creation_8__class_dict = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        PyObject *tmp_dict_name_16;
        PyObject *tmp_key_name_16;
        tmp_key_name_15 = const_str_plain___metaclass__;
        CHECK_OBJECT(tmp_class_creation_8__class_dict);
        tmp_dict_name_15 = tmp_class_creation_8__class_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_15, tmp_key_name_15);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__class_dict);
        tmp_dict_name_16 = tmp_class_creation_8__class_dict;
        tmp_key_name_16 = const_str_plain___metaclass__;
        tmp_assign_source_45 = DICT_GET_ITEM(tmp_dict_name_16, tmp_key_name_16);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_assign_source_45 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_45);
        condexpr_end_8:;
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_22;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_args_element_name_68;
        PyObject *tmp_args_element_name_69;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_called_name_22 = tmp_class_creation_8__metaclass;
        tmp_args_element_name_67 = const_str_plain_EllipticCurveBackend;
        tmp_args_element_name_68 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_8__class_dict);
        tmp_args_element_name_69 = tmp_class_creation_8__class_dict;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = {tmp_args_element_name_67, tmp_args_element_name_68, tmp_args_element_name_69};
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_22, call_args);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_8__class == NULL);
        tmp_class_creation_8__class = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_name_23;
        PyObject *tmp_called_name_24;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_46;
        PyObject *tmp_args_element_name_70;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_47;
        PyObject *tmp_args_element_name_71;
        tmp_mvar_value_46 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_46 == NULL)) {
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_46 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 183;

            goto try_except_handler_16;
        }

        tmp_source_name_15 = tmp_mvar_value_46;
        tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_add_metaclass);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_16;
        }
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_47 == NULL)) {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_47 == NULL) {
            Py_DECREF(tmp_called_name_24);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 183;

            goto try_except_handler_16;
        }

        tmp_source_name_16 = tmp_mvar_value_47;
        tmp_args_element_name_70 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_ABCMeta);
        if (tmp_args_element_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 183;

            goto try_except_handler_16;
        }
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 183;
        tmp_called_name_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_24, tmp_args_element_name_70);
        Py_DECREF(tmp_called_name_24);
        Py_DECREF(tmp_args_element_name_70);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_16;
        }
        CHECK_OBJECT(tmp_class_creation_8__class);
        tmp_args_element_name_71 = tmp_class_creation_8__class;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 183;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_71);
        Py_DECREF(tmp_called_name_23);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_class_creation_8__class;
            assert(old != NULL);
            tmp_class_creation_8__class = tmp_assign_source_47;
            Py_DECREF(old);
        }

    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__class);
    tmp_class_creation_8__class = NULL;

    Py_XDECREF(tmp_class_creation_8__class_dict);
    tmp_class_creation_8__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_48;
        CHECK_OBJECT(tmp_class_creation_8__class);
        tmp_assign_source_48 = tmp_class_creation_8__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_EllipticCurveBackend, tmp_assign_source_48);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_8__class);
    Py_DECREF(tmp_class_creation_8__class);
    tmp_class_creation_8__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_8__class_dict);
    Py_DECREF(tmp_class_creation_8__class_dict);
    tmp_class_creation_8__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_9;
            tmp_set_locals_9 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces_232 = tmp_set_locals_9;
        }
        tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_232, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_126e34bc718565ef55fefe15bd17d3cf_10, codeobj_126e34bc718565ef55fefe15bd17d3cf, module_cryptography$hazmat$backends$interfaces, 0);
        frame_126e34bc718565ef55fefe15bd17d3cf_10 = cache_frame_126e34bc718565ef55fefe15bd17d3cf_10;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_126e34bc718565ef55fefe15bd17d3cf_10);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_126e34bc718565ef55fefe15bd17d3cf_10) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_32;
            PyObject *tmp_mvar_value_48;
            PyObject *tmp_args_element_name_72;
            tmp_mvar_value_48 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_48 == NULL)) {
                tmp_mvar_value_48 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_48 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 233;

                goto frame_exception_exit_10;
            }

            tmp_called_instance_32 = tmp_mvar_value_48;
            tmp_args_element_name_72 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key();



            frame_126e34bc718565ef55fefe15bd17d3cf_10->m_frame.f_lineno = 233;
            {
                PyObject *call_args[] = {tmp_args_element_name_72};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_32, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_72);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto frame_exception_exit_10;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_232, const_str_plain_load_pem_private_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_called_instance_33;
            PyObject *tmp_mvar_value_49;
            PyObject *tmp_args_element_name_73;
            tmp_mvar_value_49 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_49 == NULL)) {
                tmp_mvar_value_49 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_49 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 240;

                goto frame_exception_exit_10;
            }

            tmp_called_instance_33 = tmp_mvar_value_49;
            tmp_args_element_name_73 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key();



            frame_126e34bc718565ef55fefe15bd17d3cf_10->m_frame.f_lineno = 240;
            {
                PyObject *call_args[] = {tmp_args_element_name_73};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_33, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_73);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto frame_exception_exit_10;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_232, const_str_plain_load_pem_public_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_called_instance_34;
            PyObject *tmp_mvar_value_50;
            PyObject *tmp_args_element_name_74;
            tmp_mvar_value_50 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_50 == NULL)) {
                tmp_mvar_value_50 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_50 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 246;

                goto frame_exception_exit_10;
            }

            tmp_called_instance_34 = tmp_mvar_value_50;
            tmp_args_element_name_74 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters();



            frame_126e34bc718565ef55fefe15bd17d3cf_10->m_frame.f_lineno = 246;
            {
                PyObject *call_args[] = {tmp_args_element_name_74};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_34, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_74);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto frame_exception_exit_10;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_232, const_str_plain_load_pem_parameters, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto frame_exception_exit_10;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_126e34bc718565ef55fefe15bd17d3cf_10);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;

        frame_exception_exit_10:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_126e34bc718565ef55fefe15bd17d3cf_10);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_126e34bc718565ef55fefe15bd17d3cf_10, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_126e34bc718565ef55fefe15bd17d3cf_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_126e34bc718565ef55fefe15bd17d3cf_10, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_126e34bc718565ef55fefe15bd17d3cf_10,
            type_description_2
        );


        // Release cached frame.
        if (frame_126e34bc718565ef55fefe15bd17d3cf_10 == cache_frame_126e34bc718565ef55fefe15bd17d3cf_10) {
            Py_DECREF(frame_126e34bc718565ef55fefe15bd17d3cf_10);
        }
        cache_frame_126e34bc718565ef55fefe15bd17d3cf_10 = NULL;

        assertFrameObject(frame_126e34bc718565ef55fefe15bd17d3cf_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;

        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_19;
        skip_nested_handling_9:;
        tmp_assign_source_49 = locals_cryptography$hazmat$backends$interfaces_232;
        Py_INCREF(tmp_assign_source_49);
        goto try_return_handler_19;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_232);
        locals_cryptography$hazmat$backends$interfaces_232 = NULL;
        goto outline_result_9;
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

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_232);
        locals_cryptography$hazmat$backends$interfaces_232 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_9;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        outline_exception_9:;
        exception_lineno = 232;
        goto try_except_handler_18;
        outline_result_9:;
        assert(tmp_class_creation_9__class_dict == NULL);
        tmp_class_creation_9__class_dict = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_17;
        PyObject *tmp_dict_name_17;
        PyObject *tmp_dict_name_18;
        PyObject *tmp_key_name_18;
        tmp_key_name_17 = const_str_plain___metaclass__;
        CHECK_OBJECT(tmp_class_creation_9__class_dict);
        tmp_dict_name_17 = tmp_class_creation_9__class_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_17, tmp_key_name_17);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_18;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_9__class_dict);
        tmp_dict_name_18 = tmp_class_creation_9__class_dict;
        tmp_key_name_18 = const_str_plain___metaclass__;
        tmp_assign_source_50 = DICT_GET_ITEM(tmp_dict_name_18, tmp_key_name_18);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_18;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_assign_source_50 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_50);
        condexpr_end_9:;
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_name_25;
        PyObject *tmp_args_element_name_75;
        PyObject *tmp_args_element_name_76;
        PyObject *tmp_args_element_name_77;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_called_name_25 = tmp_class_creation_9__metaclass;
        tmp_args_element_name_75 = const_str_plain_PEMSerializationBackend;
        tmp_args_element_name_76 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_9__class_dict);
        tmp_args_element_name_77 = tmp_class_creation_9__class_dict;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_name_75, tmp_args_element_name_76, tmp_args_element_name_77};
            tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_25, call_args);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_9__class == NULL);
        tmp_class_creation_9__class = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_name_26;
        PyObject *tmp_called_name_27;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_51;
        PyObject *tmp_args_element_name_78;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_52;
        PyObject *tmp_args_element_name_79;
        tmp_mvar_value_51 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_51 == NULL)) {
            tmp_mvar_value_51 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_51 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 231;

            goto try_except_handler_18;
        }

        tmp_source_name_17 = tmp_mvar_value_51;
        tmp_called_name_27 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_add_metaclass);
        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_18;
        }
        tmp_mvar_value_52 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_52 == NULL)) {
            tmp_mvar_value_52 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_52 == NULL) {
            Py_DECREF(tmp_called_name_27);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 231;

            goto try_except_handler_18;
        }

        tmp_source_name_18 = tmp_mvar_value_52;
        tmp_args_element_name_78 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_ABCMeta);
        if (tmp_args_element_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_27);

            exception_lineno = 231;

            goto try_except_handler_18;
        }
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 231;
        tmp_called_name_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, tmp_args_element_name_78);
        Py_DECREF(tmp_called_name_27);
        Py_DECREF(tmp_args_element_name_78);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_18;
        }
        CHECK_OBJECT(tmp_class_creation_9__class);
        tmp_args_element_name_79 = tmp_class_creation_9__class;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 231;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, tmp_args_element_name_79);
        Py_DECREF(tmp_called_name_26);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_18;
        }
        {
            PyObject *old = tmp_class_creation_9__class;
            assert(old != NULL);
            tmp_class_creation_9__class = tmp_assign_source_52;
            Py_DECREF(old);
        }

    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__class);
    tmp_class_creation_9__class = NULL;

    Py_XDECREF(tmp_class_creation_9__class_dict);
    tmp_class_creation_9__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(tmp_class_creation_9__class);
        tmp_assign_source_53 = tmp_class_creation_9__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_PEMSerializationBackend, tmp_assign_source_53);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_9__class);
    Py_DECREF(tmp_class_creation_9__class);
    tmp_class_creation_9__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_9__class_dict);
    Py_DECREF(tmp_class_creation_9__class_dict);
    tmp_class_creation_9__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        {
            PyObject *tmp_set_locals_10;
            tmp_set_locals_10 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces_254 = tmp_set_locals_10;
        }
        tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_254, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_40bab78ef31aafc379e20440db4260a7_11, codeobj_40bab78ef31aafc379e20440db4260a7, module_cryptography$hazmat$backends$interfaces, 0);
        frame_40bab78ef31aafc379e20440db4260a7_11 = cache_frame_40bab78ef31aafc379e20440db4260a7_11;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_40bab78ef31aafc379e20440db4260a7_11);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_40bab78ef31aafc379e20440db4260a7_11) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_35;
            PyObject *tmp_mvar_value_53;
            PyObject *tmp_args_element_name_80;
            tmp_mvar_value_53 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_53 == NULL)) {
                tmp_mvar_value_53 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_53 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 255;

                goto frame_exception_exit_11;
            }

            tmp_called_instance_35 = tmp_mvar_value_53;
            tmp_args_element_name_80 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key();



            frame_40bab78ef31aafc379e20440db4260a7_11->m_frame.f_lineno = 255;
            {
                PyObject *call_args[] = {tmp_args_element_name_80};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_35, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_80);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto frame_exception_exit_11;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_254, const_str_plain_load_der_private_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_called_instance_36;
            PyObject *tmp_mvar_value_54;
            PyObject *tmp_args_element_name_81;
            tmp_mvar_value_54 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_54 == NULL)) {
                tmp_mvar_value_54 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_54 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 262;

                goto frame_exception_exit_11;
            }

            tmp_called_instance_36 = tmp_mvar_value_54;
            tmp_args_element_name_81 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key();



            frame_40bab78ef31aafc379e20440db4260a7_11->m_frame.f_lineno = 262;
            {
                PyObject *call_args[] = {tmp_args_element_name_81};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_36, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_81);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto frame_exception_exit_11;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_254, const_str_plain_load_der_public_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_called_instance_37;
            PyObject *tmp_mvar_value_55;
            PyObject *tmp_args_element_name_82;
            tmp_mvar_value_55 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_55 == NULL)) {
                tmp_mvar_value_55 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_55 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 268;

                goto frame_exception_exit_11;
            }

            tmp_called_instance_37 = tmp_mvar_value_55;
            tmp_args_element_name_82 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters();



            frame_40bab78ef31aafc379e20440db4260a7_11->m_frame.f_lineno = 268;
            {
                PyObject *call_args[] = {tmp_args_element_name_82};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_37, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_82);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto frame_exception_exit_11;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_254, const_str_plain_load_der_parameters, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;

                goto frame_exception_exit_11;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_40bab78ef31aafc379e20440db4260a7_11);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;

        frame_exception_exit_11:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_40bab78ef31aafc379e20440db4260a7_11);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_40bab78ef31aafc379e20440db4260a7_11, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_40bab78ef31aafc379e20440db4260a7_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_40bab78ef31aafc379e20440db4260a7_11, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_40bab78ef31aafc379e20440db4260a7_11,
            type_description_2
        );


        // Release cached frame.
        if (frame_40bab78ef31aafc379e20440db4260a7_11 == cache_frame_40bab78ef31aafc379e20440db4260a7_11) {
            Py_DECREF(frame_40bab78ef31aafc379e20440db4260a7_11);
        }
        cache_frame_40bab78ef31aafc379e20440db4260a7_11 = NULL;

        assertFrameObject(frame_40bab78ef31aafc379e20440db4260a7_11);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;

        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_21;
        skip_nested_handling_10:;
        tmp_assign_source_54 = locals_cryptography$hazmat$backends$interfaces_254;
        Py_INCREF(tmp_assign_source_54);
        goto try_return_handler_21;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_254);
        locals_cryptography$hazmat$backends$interfaces_254 = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_254);
        locals_cryptography$hazmat$backends$interfaces_254 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_10;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        outline_exception_10:;
        exception_lineno = 254;
        goto try_except_handler_20;
        outline_result_10:;
        assert(tmp_class_creation_10__class_dict == NULL);
        tmp_class_creation_10__class_dict = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_name_19;
        PyObject *tmp_dict_name_20;
        PyObject *tmp_key_name_20;
        tmp_key_name_19 = const_str_plain___metaclass__;
        CHECK_OBJECT(tmp_class_creation_10__class_dict);
        tmp_dict_name_19 = tmp_class_creation_10__class_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_19, tmp_key_name_19);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto try_except_handler_20;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_10__class_dict);
        tmp_dict_name_20 = tmp_class_creation_10__class_dict;
        tmp_key_name_20 = const_str_plain___metaclass__;
        tmp_assign_source_55 = DICT_GET_ITEM(tmp_dict_name_20, tmp_key_name_20);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto try_except_handler_20;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_assign_source_55 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_55);
        condexpr_end_10:;
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_name_28;
        PyObject *tmp_args_element_name_83;
        PyObject *tmp_args_element_name_84;
        PyObject *tmp_args_element_name_85;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_called_name_28 = tmp_class_creation_10__metaclass;
        tmp_args_element_name_83 = const_str_plain_DERSerializationBackend;
        tmp_args_element_name_84 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_10__class_dict);
        tmp_args_element_name_85 = tmp_class_creation_10__class_dict;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_name_83, tmp_args_element_name_84, tmp_args_element_name_85};
            tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_28, call_args);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_10__class == NULL);
        tmp_class_creation_10__class = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_name_29;
        PyObject *tmp_called_name_30;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_56;
        PyObject *tmp_args_element_name_86;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_57;
        PyObject *tmp_args_element_name_87;
        tmp_mvar_value_56 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_56 == NULL)) {
            tmp_mvar_value_56 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_56 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 253;

            goto try_except_handler_20;
        }

        tmp_source_name_19 = tmp_mvar_value_56;
        tmp_called_name_30 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_add_metaclass);
        if (tmp_called_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_20;
        }
        tmp_mvar_value_57 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_57 == NULL)) {
            tmp_mvar_value_57 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_57 == NULL) {
            Py_DECREF(tmp_called_name_30);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 253;

            goto try_except_handler_20;
        }

        tmp_source_name_20 = tmp_mvar_value_57;
        tmp_args_element_name_86 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain_ABCMeta);
        if (tmp_args_element_name_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 253;

            goto try_except_handler_20;
        }
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 253;
        tmp_called_name_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_30, tmp_args_element_name_86);
        Py_DECREF(tmp_called_name_30);
        Py_DECREF(tmp_args_element_name_86);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_20;
        }
        CHECK_OBJECT(tmp_class_creation_10__class);
        tmp_args_element_name_87 = tmp_class_creation_10__class;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 253;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_87);
        Py_DECREF(tmp_called_name_29);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_class_creation_10__class;
            assert(old != NULL);
            tmp_class_creation_10__class = tmp_assign_source_57;
            Py_DECREF(old);
        }

    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__class);
    tmp_class_creation_10__class = NULL;

    Py_XDECREF(tmp_class_creation_10__class_dict);
    tmp_class_creation_10__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(tmp_class_creation_10__class);
        tmp_assign_source_58 = tmp_class_creation_10__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_DERSerializationBackend, tmp_assign_source_58);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_10__class);
    Py_DECREF(tmp_class_creation_10__class);
    tmp_class_creation_10__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_10__class_dict);
    Py_DECREF(tmp_class_creation_10__class_dict);
    tmp_class_creation_10__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_11;
            tmp_set_locals_11 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces_276 = tmp_set_locals_11;
        }
        tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_276, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_0fbe5f7fa832f53e48656b7910af33b3_12, codeobj_0fbe5f7fa832f53e48656b7910af33b3, module_cryptography$hazmat$backends$interfaces, 0);
        frame_0fbe5f7fa832f53e48656b7910af33b3_12 = cache_frame_0fbe5f7fa832f53e48656b7910af33b3_12;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0fbe5f7fa832f53e48656b7910af33b3_12);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0fbe5f7fa832f53e48656b7910af33b3_12) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_38;
            PyObject *tmp_mvar_value_58;
            PyObject *tmp_args_element_name_88;
            tmp_mvar_value_58 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_58 == NULL)) {
                tmp_mvar_value_58 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_58 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 277;

                goto frame_exception_exit_12;
            }

            tmp_called_instance_38 = tmp_mvar_value_58;
            tmp_args_element_name_88 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate();



            frame_0fbe5f7fa832f53e48656b7910af33b3_12->m_frame.f_lineno = 277;
            {
                PyObject *call_args[] = {tmp_args_element_name_88};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_38, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_88);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_load_pem_x509_certificate, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_39;
            PyObject *tmp_mvar_value_59;
            PyObject *tmp_args_element_name_89;
            tmp_mvar_value_59 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_59 == NULL)) {
                tmp_mvar_value_59 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_59 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 283;

                goto frame_exception_exit_12;
            }

            tmp_called_instance_39 = tmp_mvar_value_59;
            tmp_args_element_name_89 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate();



            frame_0fbe5f7fa832f53e48656b7910af33b3_12->m_frame.f_lineno = 283;
            {
                PyObject *call_args[] = {tmp_args_element_name_89};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_39, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_89);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_load_der_x509_certificate, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_40;
            PyObject *tmp_mvar_value_60;
            PyObject *tmp_args_element_name_90;
            tmp_mvar_value_60 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_60 == NULL)) {
                tmp_mvar_value_60 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_60 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 289;

                goto frame_exception_exit_12;
            }

            tmp_called_instance_40 = tmp_mvar_value_60;
            tmp_args_element_name_90 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr();



            frame_0fbe5f7fa832f53e48656b7910af33b3_12->m_frame.f_lineno = 289;
            {
                PyObject *call_args[] = {tmp_args_element_name_90};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_40, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_90);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_load_der_x509_csr, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_41;
            PyObject *tmp_mvar_value_61;
            PyObject *tmp_args_element_name_91;
            tmp_mvar_value_61 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_61 == NULL)) {
                tmp_mvar_value_61 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_61 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 295;

                goto frame_exception_exit_12;
            }

            tmp_called_instance_41 = tmp_mvar_value_61;
            tmp_args_element_name_91 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr();



            frame_0fbe5f7fa832f53e48656b7910af33b3_12->m_frame.f_lineno = 295;
            {
                PyObject *call_args[] = {tmp_args_element_name_91};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_41, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_91);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_load_pem_x509_csr, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_42;
            PyObject *tmp_mvar_value_62;
            PyObject *tmp_args_element_name_92;
            tmp_mvar_value_62 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_62 == NULL)) {
                tmp_mvar_value_62 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_62 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 301;

                goto frame_exception_exit_12;
            }

            tmp_called_instance_42 = tmp_mvar_value_62;
            tmp_args_element_name_92 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr();



            frame_0fbe5f7fa832f53e48656b7910af33b3_12->m_frame.f_lineno = 301;
            {
                PyObject *call_args[] = {tmp_args_element_name_92};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_42, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_92);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_create_x509_csr, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_43;
            PyObject *tmp_mvar_value_63;
            PyObject *tmp_args_element_name_93;
            tmp_mvar_value_63 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_63 == NULL)) {
                tmp_mvar_value_63 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_63 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 307;

                goto frame_exception_exit_12;
            }

            tmp_called_instance_43 = tmp_mvar_value_63;
            tmp_args_element_name_93 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate();



            frame_0fbe5f7fa832f53e48656b7910af33b3_12->m_frame.f_lineno = 307;
            {
                PyObject *call_args[] = {tmp_args_element_name_93};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_43, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_93);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_create_x509_certificate, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_44;
            PyObject *tmp_mvar_value_64;
            PyObject *tmp_args_element_name_94;
            tmp_mvar_value_64 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_64 == NULL)) {
                tmp_mvar_value_64 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_64 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 313;

                goto frame_exception_exit_12;
            }

            tmp_called_instance_44 = tmp_mvar_value_64;
            tmp_args_element_name_94 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl();



            frame_0fbe5f7fa832f53e48656b7910af33b3_12->m_frame.f_lineno = 313;
            {
                PyObject *call_args[] = {tmp_args_element_name_94};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_44, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_94);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_create_x509_crl, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_45;
            PyObject *tmp_mvar_value_65;
            PyObject *tmp_args_element_name_95;
            tmp_mvar_value_65 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_65 == NULL)) {
                tmp_mvar_value_65 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_65 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 320;

                goto frame_exception_exit_12;
            }

            tmp_called_instance_45 = tmp_mvar_value_65;
            tmp_args_element_name_95 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate();



            frame_0fbe5f7fa832f53e48656b7910af33b3_12->m_frame.f_lineno = 320;
            {
                PyObject *call_args[] = {tmp_args_element_name_95};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_45, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_95);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_create_x509_revoked_certificate, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_46;
            PyObject *tmp_mvar_value_66;
            PyObject *tmp_args_element_name_96;
            tmp_mvar_value_66 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_66 == NULL)) {
                tmp_mvar_value_66 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_66 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 327;

                goto frame_exception_exit_12;
            }

            tmp_called_instance_46 = tmp_mvar_value_66;
            tmp_args_element_name_96 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes();



            frame_0fbe5f7fa832f53e48656b7910af33b3_12->m_frame.f_lineno = 327;
            {
                PyObject *call_args[] = {tmp_args_element_name_96};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_46, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_96);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;

                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_x509_name_bytes, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;

                goto frame_exception_exit_12;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0fbe5f7fa832f53e48656b7910af33b3_12);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_11;

        frame_exception_exit_12:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0fbe5f7fa832f53e48656b7910af33b3_12);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0fbe5f7fa832f53e48656b7910af33b3_12, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_0fbe5f7fa832f53e48656b7910af33b3_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0fbe5f7fa832f53e48656b7910af33b3_12, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0fbe5f7fa832f53e48656b7910af33b3_12,
            type_description_2
        );


        // Release cached frame.
        if (frame_0fbe5f7fa832f53e48656b7910af33b3_12 == cache_frame_0fbe5f7fa832f53e48656b7910af33b3_12) {
            Py_DECREF(frame_0fbe5f7fa832f53e48656b7910af33b3_12);
        }
        cache_frame_0fbe5f7fa832f53e48656b7910af33b3_12 = NULL;

        assertFrameObject(frame_0fbe5f7fa832f53e48656b7910af33b3_12);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_11;

        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_23;
        skip_nested_handling_11:;
        tmp_assign_source_59 = locals_cryptography$hazmat$backends$interfaces_276;
        Py_INCREF(tmp_assign_source_59);
        goto try_return_handler_23;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_276);
        locals_cryptography$hazmat$backends$interfaces_276 = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_276);
        locals_cryptography$hazmat$backends$interfaces_276 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto outline_exception_11;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        outline_exception_11:;
        exception_lineno = 276;
        goto try_except_handler_22;
        outline_result_11:;
        assert(tmp_class_creation_11__class_dict == NULL);
        tmp_class_creation_11__class_dict = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_name_21;
        PyObject *tmp_dict_name_22;
        PyObject *tmp_key_name_22;
        tmp_key_name_21 = const_str_plain___metaclass__;
        CHECK_OBJECT(tmp_class_creation_11__class_dict);
        tmp_dict_name_21 = tmp_class_creation_11__class_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_21, tmp_key_name_21);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_22;
        }
        tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_11__class_dict);
        tmp_dict_name_22 = tmp_class_creation_11__class_dict;
        tmp_key_name_22 = const_str_plain___metaclass__;
        tmp_assign_source_60 = DICT_GET_ITEM(tmp_dict_name_22, tmp_key_name_22);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_22;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_assign_source_60 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_60);
        condexpr_end_11:;
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_name_31;
        PyObject *tmp_args_element_name_97;
        PyObject *tmp_args_element_name_98;
        PyObject *tmp_args_element_name_99;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_called_name_31 = tmp_class_creation_11__metaclass;
        tmp_args_element_name_97 = const_str_plain_X509Backend;
        tmp_args_element_name_98 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_11__class_dict);
        tmp_args_element_name_99 = tmp_class_creation_11__class_dict;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_name_97, tmp_args_element_name_98, tmp_args_element_name_99};
            tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_31, call_args);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_11__class == NULL);
        tmp_class_creation_11__class = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_name_32;
        PyObject *tmp_called_name_33;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_67;
        PyObject *tmp_args_element_name_100;
        PyObject *tmp_source_name_22;
        PyObject *tmp_mvar_value_68;
        PyObject *tmp_args_element_name_101;
        tmp_mvar_value_67 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_67 == NULL)) {
            tmp_mvar_value_67 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_67 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 275;

            goto try_except_handler_22;
        }

        tmp_source_name_21 = tmp_mvar_value_67;
        tmp_called_name_33 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_add_metaclass);
        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto try_except_handler_22;
        }
        tmp_mvar_value_68 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_68 == NULL)) {
            tmp_mvar_value_68 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_68 == NULL) {
            Py_DECREF(tmp_called_name_33);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 275;

            goto try_except_handler_22;
        }

        tmp_source_name_22 = tmp_mvar_value_68;
        tmp_args_element_name_100 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain_ABCMeta);
        if (tmp_args_element_name_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_33);

            exception_lineno = 275;

            goto try_except_handler_22;
        }
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 275;
        tmp_called_name_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, tmp_args_element_name_100);
        Py_DECREF(tmp_called_name_33);
        Py_DECREF(tmp_args_element_name_100);
        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto try_except_handler_22;
        }
        CHECK_OBJECT(tmp_class_creation_11__class);
        tmp_args_element_name_101 = tmp_class_creation_11__class;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 275;
        tmp_assign_source_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_32, tmp_args_element_name_101);
        Py_DECREF(tmp_called_name_32);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto try_except_handler_22;
        }
        {
            PyObject *old = tmp_class_creation_11__class;
            assert(old != NULL);
            tmp_class_creation_11__class = tmp_assign_source_62;
            Py_DECREF(old);
        }

    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__class);
    tmp_class_creation_11__class = NULL;

    Py_XDECREF(tmp_class_creation_11__class_dict);
    tmp_class_creation_11__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(tmp_class_creation_11__class);
        tmp_assign_source_63 = tmp_class_creation_11__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_X509Backend, tmp_assign_source_63);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_11__class);
    Py_DECREF(tmp_class_creation_11__class);
    tmp_class_creation_11__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_11__class_dict);
    Py_DECREF(tmp_class_creation_11__class_dict);
    tmp_class_creation_11__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_64;
        {
            PyObject *tmp_set_locals_12;
            tmp_set_locals_12 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces_335 = tmp_set_locals_12;
        }
        tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_335, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_1c87ee0eae6744dcbadc9080f2c61a1f_13, codeobj_1c87ee0eae6744dcbadc9080f2c61a1f, module_cryptography$hazmat$backends$interfaces, 0);
        frame_1c87ee0eae6744dcbadc9080f2c61a1f_13 = cache_frame_1c87ee0eae6744dcbadc9080f2c61a1f_13;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_1c87ee0eae6744dcbadc9080f2c61a1f_13);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_1c87ee0eae6744dcbadc9080f2c61a1f_13) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_47;
            PyObject *tmp_mvar_value_69;
            PyObject *tmp_args_element_name_102;
            tmp_mvar_value_69 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_69 == NULL)) {
                tmp_mvar_value_69 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_69 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 336;

                goto frame_exception_exit_13;
            }

            tmp_called_instance_47 = tmp_mvar_value_69;
            tmp_args_element_name_102 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters();



            frame_1c87ee0eae6744dcbadc9080f2c61a1f_13->m_frame.f_lineno = 336;
            {
                PyObject *call_args[] = {tmp_args_element_name_102};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_47, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_102);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_generate_dh_parameters, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;

                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_48;
            PyObject *tmp_mvar_value_70;
            PyObject *tmp_args_element_name_103;
            tmp_mvar_value_70 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_70 == NULL)) {
                tmp_mvar_value_70 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_70 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 343;

                goto frame_exception_exit_13;
            }

            tmp_called_instance_48 = tmp_mvar_value_70;
            tmp_args_element_name_103 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key();



            frame_1c87ee0eae6744dcbadc9080f2c61a1f_13->m_frame.f_lineno = 343;
            {
                PyObject *call_args[] = {tmp_args_element_name_103};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_48, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_103);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_generate_dh_private_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_49;
            PyObject *tmp_mvar_value_71;
            PyObject *tmp_args_element_name_104;
            tmp_mvar_value_71 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_71 == NULL)) {
                tmp_mvar_value_71 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_71 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 350;

                goto frame_exception_exit_13;
            }

            tmp_called_instance_49 = tmp_mvar_value_71;
            tmp_args_element_name_104 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters();



            frame_1c87ee0eae6744dcbadc9080f2c61a1f_13->m_frame.f_lineno = 350;
            {
                PyObject *call_args[] = {tmp_args_element_name_104};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_49, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_104);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_generate_dh_private_key_and_parameters, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;

                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_50;
            PyObject *tmp_mvar_value_72;
            PyObject *tmp_args_element_name_105;
            tmp_mvar_value_72 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_72 == NULL)) {
                tmp_mvar_value_72 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_72 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 357;

                goto frame_exception_exit_13;
            }

            tmp_called_instance_50 = tmp_mvar_value_72;
            tmp_args_element_name_105 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers();



            frame_1c87ee0eae6744dcbadc9080f2c61a1f_13->m_frame.f_lineno = 357;
            {
                PyObject *call_args[] = {tmp_args_element_name_105};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_50, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_105);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 357;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_load_dh_private_numbers, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 357;

                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_51;
            PyObject *tmp_mvar_value_73;
            PyObject *tmp_args_element_name_106;
            tmp_mvar_value_73 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_73 == NULL)) {
                tmp_mvar_value_73 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_73 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 363;

                goto frame_exception_exit_13;
            }

            tmp_called_instance_51 = tmp_mvar_value_73;
            tmp_args_element_name_106 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers();



            frame_1c87ee0eae6744dcbadc9080f2c61a1f_13->m_frame.f_lineno = 363;
            {
                PyObject *call_args[] = {tmp_args_element_name_106};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_51, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_106);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_load_dh_public_numbers, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;

                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_52;
            PyObject *tmp_mvar_value_74;
            PyObject *tmp_args_element_name_107;
            tmp_mvar_value_74 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_74 == NULL)) {
                tmp_mvar_value_74 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_74 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 369;

                goto frame_exception_exit_13;
            }

            tmp_called_instance_52 = tmp_mvar_value_74;
            tmp_args_element_name_107 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers();



            frame_1c87ee0eae6744dcbadc9080f2c61a1f_13->m_frame.f_lineno = 369;
            {
                PyObject *call_args[] = {tmp_args_element_name_107};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_52, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_107);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_load_dh_parameter_numbers, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;

                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_53;
            PyObject *tmp_mvar_value_75;
            PyObject *tmp_args_element_name_108;
            PyObject *tmp_defaults_1;
            tmp_mvar_value_75 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_75 == NULL)) {
                tmp_mvar_value_75 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_75 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 375;

                goto frame_exception_exit_13;
            }

            tmp_called_instance_53 = tmp_mvar_value_75;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_1);
            tmp_args_element_name_108 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported(tmp_defaults_1);



            frame_1c87ee0eae6744dcbadc9080f2c61a1f_13->m_frame.f_lineno = 375;
            {
                PyObject *call_args[] = {tmp_args_element_name_108};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_53, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_108);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_dh_parameters_supported, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;

                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_54;
            PyObject *tmp_mvar_value_76;
            PyObject *tmp_args_element_name_109;
            tmp_mvar_value_76 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_76 == NULL)) {
                tmp_mvar_value_76 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_76 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 381;

                goto frame_exception_exit_13;
            }

            tmp_called_instance_54 = tmp_mvar_value_76;
            tmp_args_element_name_109 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported();



            frame_1c87ee0eae6744dcbadc9080f2c61a1f_13->m_frame.f_lineno = 381;
            {
                PyObject *call_args[] = {tmp_args_element_name_109};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_54, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_109);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;

                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_dh_x942_serialization_supported, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;

                goto frame_exception_exit_13;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1c87ee0eae6744dcbadc9080f2c61a1f_13);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_12;

        frame_exception_exit_13:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1c87ee0eae6744dcbadc9080f2c61a1f_13);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1c87ee0eae6744dcbadc9080f2c61a1f_13, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_1c87ee0eae6744dcbadc9080f2c61a1f_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1c87ee0eae6744dcbadc9080f2c61a1f_13, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_1c87ee0eae6744dcbadc9080f2c61a1f_13,
            type_description_2
        );


        // Release cached frame.
        if (frame_1c87ee0eae6744dcbadc9080f2c61a1f_13 == cache_frame_1c87ee0eae6744dcbadc9080f2c61a1f_13) {
            Py_DECREF(frame_1c87ee0eae6744dcbadc9080f2c61a1f_13);
        }
        cache_frame_1c87ee0eae6744dcbadc9080f2c61a1f_13 = NULL;

        assertFrameObject(frame_1c87ee0eae6744dcbadc9080f2c61a1f_13);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_12;

        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_25;
        skip_nested_handling_12:;
        tmp_assign_source_64 = locals_cryptography$hazmat$backends$interfaces_335;
        Py_INCREF(tmp_assign_source_64);
        goto try_return_handler_25;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_335);
        locals_cryptography$hazmat$backends$interfaces_335 = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_335);
        locals_cryptography$hazmat$backends$interfaces_335 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_12;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        outline_exception_12:;
        exception_lineno = 335;
        goto try_except_handler_24;
        outline_result_12:;
        assert(tmp_class_creation_12__class_dict == NULL);
        tmp_class_creation_12__class_dict = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_key_name_23;
        PyObject *tmp_dict_name_23;
        PyObject *tmp_dict_name_24;
        PyObject *tmp_key_name_24;
        tmp_key_name_23 = const_str_plain___metaclass__;
        CHECK_OBJECT(tmp_class_creation_12__class_dict);
        tmp_dict_name_23 = tmp_class_creation_12__class_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_23, tmp_key_name_23);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto try_except_handler_24;
        }
        tmp_condition_result_12 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_12__class_dict);
        tmp_dict_name_24 = tmp_class_creation_12__class_dict;
        tmp_key_name_24 = const_str_plain___metaclass__;
        tmp_assign_source_65 = DICT_GET_ITEM(tmp_dict_name_24, tmp_key_name_24);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto try_except_handler_24;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_assign_source_65 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_65);
        condexpr_end_12:;
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_name_34;
        PyObject *tmp_args_element_name_110;
        PyObject *tmp_args_element_name_111;
        PyObject *tmp_args_element_name_112;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_called_name_34 = tmp_class_creation_12__metaclass;
        tmp_args_element_name_110 = const_str_plain_DHBackend;
        tmp_args_element_name_111 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_12__class_dict);
        tmp_args_element_name_112 = tmp_class_creation_12__class_dict;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 335;
        {
            PyObject *call_args[] = {tmp_args_element_name_110, tmp_args_element_name_111, tmp_args_element_name_112};
            tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_34, call_args);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_12__class == NULL);
        tmp_class_creation_12__class = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_name_35;
        PyObject *tmp_called_name_36;
        PyObject *tmp_source_name_23;
        PyObject *tmp_mvar_value_77;
        PyObject *tmp_args_element_name_113;
        PyObject *tmp_source_name_24;
        PyObject *tmp_mvar_value_78;
        PyObject *tmp_args_element_name_114;
        tmp_mvar_value_77 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_77 == NULL)) {
            tmp_mvar_value_77 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_77 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 334;

            goto try_except_handler_24;
        }

        tmp_source_name_23 = tmp_mvar_value_77;
        tmp_called_name_36 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain_add_metaclass);
        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_24;
        }
        tmp_mvar_value_78 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_78 == NULL)) {
            tmp_mvar_value_78 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_78 == NULL) {
            Py_DECREF(tmp_called_name_36);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 334;

            goto try_except_handler_24;
        }

        tmp_source_name_24 = tmp_mvar_value_78;
        tmp_args_element_name_113 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain_ABCMeta);
        if (tmp_args_element_name_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 334;

            goto try_except_handler_24;
        }
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 334;
        tmp_called_name_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_36, tmp_args_element_name_113);
        Py_DECREF(tmp_called_name_36);
        Py_DECREF(tmp_args_element_name_113);
        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_24;
        }
        CHECK_OBJECT(tmp_class_creation_12__class);
        tmp_args_element_name_114 = tmp_class_creation_12__class;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 334;
        tmp_assign_source_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_35, tmp_args_element_name_114);
        Py_DECREF(tmp_called_name_35);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto try_except_handler_24;
        }
        {
            PyObject *old = tmp_class_creation_12__class;
            assert(old != NULL);
            tmp_class_creation_12__class = tmp_assign_source_67;
            Py_DECREF(old);
        }

    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__class);
    tmp_class_creation_12__class = NULL;

    Py_XDECREF(tmp_class_creation_12__class_dict);
    tmp_class_creation_12__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    {
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(tmp_class_creation_12__class);
        tmp_assign_source_68 = tmp_class_creation_12__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_DHBackend, tmp_assign_source_68);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_12__class);
    Py_DECREF(tmp_class_creation_12__class);
    tmp_class_creation_12__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_12__class_dict);
    Py_DECREF(tmp_class_creation_12__class_dict);
    tmp_class_creation_12__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        {
            PyObject *tmp_set_locals_13;
            tmp_set_locals_13 = PyDict_New();
            locals_cryptography$hazmat$backends$interfaces_390 = tmp_set_locals_13;
        }
        tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_390, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_dfc1927ce0197293681eb1bfbad6bb3f_14, codeobj_dfc1927ce0197293681eb1bfbad6bb3f, module_cryptography$hazmat$backends$interfaces, 0);
        frame_dfc1927ce0197293681eb1bfbad6bb3f_14 = cache_frame_dfc1927ce0197293681eb1bfbad6bb3f_14;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_dfc1927ce0197293681eb1bfbad6bb3f_14);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_dfc1927ce0197293681eb1bfbad6bb3f_14) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_55;
            PyObject *tmp_mvar_value_79;
            PyObject *tmp_args_element_name_115;
            tmp_mvar_value_79 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_79 == NULL)) {
                tmp_mvar_value_79 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_79 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 391;

                goto frame_exception_exit_14;
            }

            tmp_called_instance_55 = tmp_mvar_value_79;
            tmp_args_element_name_115 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt();



            frame_dfc1927ce0197293681eb1bfbad6bb3f_14->m_frame.f_lineno = 391;
            {
                PyObject *call_args[] = {tmp_args_element_name_115};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_55, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_115);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto frame_exception_exit_14;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$interfaces_390, const_str_plain_derive_scrypt, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto frame_exception_exit_14;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dfc1927ce0197293681eb1bfbad6bb3f_14);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_13;

        frame_exception_exit_14:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dfc1927ce0197293681eb1bfbad6bb3f_14);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dfc1927ce0197293681eb1bfbad6bb3f_14, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_dfc1927ce0197293681eb1bfbad6bb3f_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dfc1927ce0197293681eb1bfbad6bb3f_14, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_dfc1927ce0197293681eb1bfbad6bb3f_14,
            type_description_2
        );


        // Release cached frame.
        if (frame_dfc1927ce0197293681eb1bfbad6bb3f_14 == cache_frame_dfc1927ce0197293681eb1bfbad6bb3f_14) {
            Py_DECREF(frame_dfc1927ce0197293681eb1bfbad6bb3f_14);
        }
        cache_frame_dfc1927ce0197293681eb1bfbad6bb3f_14 = NULL;

        assertFrameObject(frame_dfc1927ce0197293681eb1bfbad6bb3f_14);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_13;

        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_13:;

        goto try_except_handler_27;
        skip_nested_handling_13:;
        tmp_assign_source_69 = locals_cryptography$hazmat$backends$interfaces_390;
        Py_INCREF(tmp_assign_source_69);
        goto try_return_handler_27;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_390);
        locals_cryptography$hazmat$backends$interfaces_390 = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces_390);
        locals_cryptography$hazmat$backends$interfaces_390 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_13;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$interfaces);
        return NULL;
        outline_exception_13:;
        exception_lineno = 390;
        goto try_except_handler_26;
        outline_result_13:;
        assert(tmp_class_creation_13__class_dict == NULL);
        tmp_class_creation_13__class_dict = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_25;
        PyObject *tmp_dict_name_25;
        PyObject *tmp_dict_name_26;
        PyObject *tmp_key_name_26;
        tmp_key_name_25 = const_str_plain___metaclass__;
        CHECK_OBJECT(tmp_class_creation_13__class_dict);
        tmp_dict_name_25 = tmp_class_creation_13__class_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_25, tmp_key_name_25);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto try_except_handler_26;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_13__class_dict);
        tmp_dict_name_26 = tmp_class_creation_13__class_dict;
        tmp_key_name_26 = const_str_plain___metaclass__;
        tmp_assign_source_70 = DICT_GET_ITEM(tmp_dict_name_26, tmp_key_name_26);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto try_except_handler_26;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        tmp_assign_source_70 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_70);
        condexpr_end_13:;
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_name_37;
        PyObject *tmp_args_element_name_116;
        PyObject *tmp_args_element_name_117;
        PyObject *tmp_args_element_name_118;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_called_name_37 = tmp_class_creation_13__metaclass;
        tmp_args_element_name_116 = const_str_plain_ScryptBackend;
        tmp_args_element_name_117 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_13__class_dict);
        tmp_args_element_name_118 = tmp_class_creation_13__class_dict;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 390;
        {
            PyObject *call_args[] = {tmp_args_element_name_116, tmp_args_element_name_117, tmp_args_element_name_118};
            tmp_assign_source_71 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_37, call_args);
        }

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_13__class == NULL);
        tmp_class_creation_13__class = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_name_38;
        PyObject *tmp_called_name_39;
        PyObject *tmp_source_name_25;
        PyObject *tmp_mvar_value_80;
        PyObject *tmp_args_element_name_119;
        PyObject *tmp_source_name_26;
        PyObject *tmp_mvar_value_81;
        PyObject *tmp_args_element_name_120;
        tmp_mvar_value_80 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_80 == NULL)) {
            tmp_mvar_value_80 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_80 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 389;

            goto try_except_handler_26;
        }

        tmp_source_name_25 = tmp_mvar_value_80;
        tmp_called_name_39 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain_add_metaclass);
        if (tmp_called_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_26;
        }
        tmp_mvar_value_81 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_81 == NULL)) {
            tmp_mvar_value_81 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_81 == NULL) {
            Py_DECREF(tmp_called_name_39);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 389;

            goto try_except_handler_26;
        }

        tmp_source_name_26 = tmp_mvar_value_81;
        tmp_args_element_name_119 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain_ABCMeta);
        if (tmp_args_element_name_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 389;

            goto try_except_handler_26;
        }
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 389;
        tmp_called_name_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_39, tmp_args_element_name_119);
        Py_DECREF(tmp_called_name_39);
        Py_DECREF(tmp_args_element_name_119);
        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_26;
        }
        CHECK_OBJECT(tmp_class_creation_13__class);
        tmp_args_element_name_120 = tmp_class_creation_13__class;
        frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame.f_lineno = 389;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_38, tmp_args_element_name_120);
        Py_DECREF(tmp_called_name_38);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_26;
        }
        {
            PyObject *old = tmp_class_creation_13__class;
            assert(old != NULL);
            tmp_class_creation_13__class = tmp_assign_source_72;
            Py_DECREF(old);
        }

    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__class);
    tmp_class_creation_13__class = NULL;

    Py_XDECREF(tmp_class_creation_13__class_dict);
    tmp_class_creation_13__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_10d9f4c759cadf00a4fbc1f439bf7e0a);
#endif
    popFrameStack();

    assertFrameObject(frame_10d9f4c759cadf00a4fbc1f439bf7e0a);

    goto frame_no_exception_14;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_10d9f4c759cadf00a4fbc1f439bf7e0a);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_10d9f4c759cadf00a4fbc1f439bf7e0a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_10d9f4c759cadf00a4fbc1f439bf7e0a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10d9f4c759cadf00a4fbc1f439bf7e0a, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_14:;
    {
        PyObject *tmp_assign_source_73;
        CHECK_OBJECT(tmp_class_creation_13__class);
        tmp_assign_source_73 = tmp_class_creation_13__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_ScryptBackend, tmp_assign_source_73);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_13__class);
    Py_DECREF(tmp_class_creation_13__class);
    tmp_class_creation_13__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_13__class_dict);
    Py_DECREF(tmp_class_creation_13__class_dict);
    tmp_class_creation_13__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;


    return module_cryptography$hazmat$backends$interfaces;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
