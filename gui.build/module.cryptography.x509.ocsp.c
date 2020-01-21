/* Generated code for Python module 'cryptography.x509.ocsp'
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

/* The "_module_cryptography$x509$ocsp" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$x509$ocsp;
PyDictObject *moduledict_cryptography$x509$ocsp;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_SHA256;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_digest_7b04aff9d25a2baa76a35cbb646b9d21;
extern PyObject *const_tuple_str_plain_data_str_plain_backend_tuple;
extern PyObject *const_str_plain_build;
static PyObject *const_str_plain_OCSPResponseBuilder;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_7cdebb5f9ad33f02224a085838631714;
static PyObject *const_str_digest_135d19079028306a4c20e62f7315aed3;
static PyObject *const_str_digest_6bc610284c59e8c6c9f83e77f6a7a1fb;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_produced_at;
extern PyObject *const_tuple_f166ade4e70e6d21279bc1fa68e30a26_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_extension_str_plain_critical_tuple;
extern PyObject *const_str_plain_hash_algorithm;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_next_update;
extern PyObject *const_str_plain_backend;
static PyObject *const_str_digest_417bc1351879048743830a24c91ef13e;
static PyObject *const_tuple_str_plain_cls_str_plain_response_status_str_plain_backend_tuple;
extern PyObject *const_str_plain_extensions;
extern PyObject *const_str_plain__reject_duplicate_extension;
static PyObject *const_str_plain_MALFORMED_REQUEST;
extern PyObject *const_str_plain_REVOKED;
extern PyObject *const_str_plain_OCSPRequest;
extern PyObject *const_str_plain_responder_cert;
extern PyObject *const_str_plain_issuer_name_hash;
extern PyObject *const_str_plain_abstractmethod;
extern PyObject *const_str_plain__cert_status;
static PyObject *const_str_digest_64523dea7d1e99bb72e8a8784eaf7d34;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_signature;
static PyObject *const_str_digest_8a186eaf06e64a30f8176e9f9e79210d;
static PyObject *const_str_plain_OCSPRequestBuilder;
extern PyObject *const_str_plain__cert;
static PyObject *const_str_digest_d229c9eed643eee60d1ab52111e943a6;
extern PyObject *const_str_plain_Enum;
extern PyObject *const_str_plain_algorithm;
extern PyObject *const_tuple_str_plain_Enum_tuple;
static PyObject *const_str_plain_add_certificate;
extern PyObject *const_str_plain_create_ocsp_request;
static PyObject *const_str_digest_173e1f5936576e525a4ec0c436e18865;
extern PyObject *const_str_plain__request;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_signature_hash_algorithm;
static PyObject *const_str_digest_db0053b51be31b73175e4b706eeb071d;
static PyObject *const_str_digest_089f90728c4b730f63c7d992ccdcebde;
extern PyObject *const_str_plain__revocation_time;
extern PyObject *const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
static PyObject *const_tuple_a5a3994aa13b09e25b566d2fa604ce58_tuple;
extern PyObject *const_str_plain_SHA1;
extern PyObject *const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
extern PyObject *const_tuple_str_plain_self_str_plain_encoding_tuple;
static PyObject *const_str_digest_c834f18bb73a01711dd784328a5feb72;
extern PyObject *const_str_plain_ABCMeta;
static PyObject *const_str_digest_f1a3a125e3ba714b022de01f55589c5a;
extern PyObject *const_str_plain_OCSPCertStatus;
static PyObject *const_str_digest_fac64a568c98dcf01e5a6aeb3d4dae70;
extern PyObject *const_str_plain_response_status;
extern PyObject *const_str_plain_private_key;
extern PyObject *const_str_plain__EARLIEST_UTC_TIME;
extern PyObject *const_str_plain_UNAUTHORIZED;
extern PyObject *const_str_plain_abstractproperty;
extern PyObject *const_str_plain__extensions;
extern PyObject *const_str_plain__issuer;
extern PyObject *const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
extern PyObject *const_str_plain_SUCCESSFUL;
static PyObject *const_str_digest_d5501c4718b7c887f0d053e467278836;
extern PyObject *const_str_plain_abc;
static PyObject *const_str_digest_a1d03a0afb523717a753a213904cc192;
extern PyObject *const_tuple_str_plain_self_str_plain_backend_tuple;
extern PyObject *const_str_plain__RESPONSE_STATUS_TO_ENUM;
static PyObject *const_str_digest_91d1cdc36c68313cdd0a89259cd9d216;
static PyObject *const_tuple_str_plain_self_str_plain_request_str_plain_extensions_tuple;
extern PyObject *const_str_plain_OCSPResponseStatus;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_plain__next_update;
static PyObject *const_str_digest_65b530f15541aaeee94ab7b7dbde259c;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_d320c4f96061871a2ea480cb45f84c6e;
extern PyObject *const_str_plain_Extension;
extern PyObject *const_int_pos_6;
static PyObject *const_str_digest_1c9a992c5af933927b6653bf116d68fc;
extern PyObject *const_str_plain_Certificate;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_digest_99d507f2ac89b982963447ed05345806;
extern PyObject *const_str_plain_request;
static PyObject *const_tuple_bd38329603d033d1de4004f843766dc2_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_b748c93313cc612300dbdce6bc0417b9;
static PyObject *const_str_digest_79c50ec227b35df8e19f6bd36cdc474a;
extern PyObject *const_str_plain_OCSPResponderEncoding;
static PyObject *const_str_digest_ef265d53a3abbd80162dfeeff2b1b653;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_tuple_str_plain_algorithm_tuple;
extern PyObject *const_str_plain_this_update;
static PyObject *const_str_digest_5c750b487d5010e7466a2d1eaa26f22c;
extern PyObject *const_int_pos_5;
static PyObject *const_str_plain__SingleResponse;
extern PyObject *const_tuple_str_plain_hashes_tuple;
extern PyObject *const_str_plain_critical;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain__algorithm;
static PyObject *const_str_digest_b7c4a76d8d2eee68808f67039932e4c7;
static PyObject *const_str_plain__ALLOWED_HASHES;
static PyObject *const_str_digest_0803e6568131d3ace6a97c0848babbec;
static PyObject *const_str_digest_41405f026fd915aaca466f4e1b3ea1d9;
extern PyObject *const_str_plain_SHA224;
extern PyObject *const_str_plain_enum;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple;
static PyObject *const_str_digest_97841e0407a21a46fa17b8ec8f246b28;
static PyObject *const_str_digest_0d6c085154d81c4fc564ab07d3f6dd63;
extern PyObject *const_str_plain_HashAlgorithm;
extern PyObject *const_str_digest_f0b1544196c3e6daaf368b98ad3c6594;
extern PyObject *const_str_plain_data;
static PyObject *const_str_digest_e2f0f4177ab1ab3498fd8acfbbb86275;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_singleresp;
extern PyObject *const_str_plain_responder_key_hash;
static PyObject *const_str_plain_INTERNAL_ERROR;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain_load_der_ocsp_request;
static PyObject *const_str_digest_65e7a1b514a856378ca7ddbf66ed88d7;
extern PyObject *const_str_plain__CERT_STATUS_TO_ENUM;
static PyObject *const_str_digest_def803b62a8438702e7fa6e95ce69665;
static PyObject *const_str_plain_GOOD;
extern PyObject *const_str_plain__certs;
extern PyObject *const_str_plain_add_extension;
static PyObject *const_str_plain_TRY_LATER;
extern PyObject *const_str_plain_issuer_key_hash;
extern PyObject *const_tuple_str_plain_x509_tuple;
extern PyObject *const_str_plain_public_bytes;
static PyObject *const_str_digest_693ac668d00156b83095e145c5bd4cde;
static PyObject *const_str_digest_94557de83454f1dc2ecf5e90de6f06e3;
extern PyObject *const_str_plain_revocation_time;
static PyObject *const_str_digest_6f2673571deef5894c0114a72c423238;
static PyObject *const_str_plain_cert_status;
static PyObject *const_str_plain_UNKNOWN;
extern PyObject *const_str_plain_certs;
extern PyObject *const_str_plain_serial_number;
extern PyObject *const_str_plain_ReasonFlags;
static PyObject *const_str_digest_09946f148ee0372feb9a08e6dda8281c;
static PyObject *const_str_digest_eaeff09629549f9f70f7ef52807e664d;
static PyObject *const_str_digest_6eec9db0a9e799e06ad4618b1a2d6bde;
static PyObject *const_tuple_d39f9e716cdbb1c02d01256267218513_tuple;
static PyObject *const_str_digest_e600056fa813ee20b834db2400ca93c0;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain_HASH;
static PyObject *const_str_digest_ecc40804a91b6e6178935f28a7360431;
extern PyObject *const_str_plain__this_update;
static PyObject *const_str_plain_SIG_REQUIRED;
extern PyObject *const_str_plain_certificates;
extern PyObject *const_str_plain_responder_name;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_SHA512;
extern PyObject *const_str_plain__response;
static PyObject *const_str_plain_NAME;
extern PyObject *const_str_plain_OCSPResponse;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_revocation_reason;
extern PyObject *const_tuple_str_plain_backend_tuple;
static PyObject *const_str_digest_c7ef7d093c77366587d3ae719b523a52;
static PyObject *const_tuple_str_plain_self_str_plain_encoding_str_plain_responder_cert_tuple;
extern PyObject *const_str_plain_oid;
extern PyObject *const_str_plain__revocation_reason;
static PyObject *const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple;
static PyObject *const_str_digest_f6672a4031538be2131c35c3a4d7b9d9;
static PyObject *const_str_digest_6cf5b98336437d37c50bc673c82ea14f;
static PyObject *const_str_plain_build_unsuccessful;
extern PyObject *const_str_plain__convert_to_naive_utc_time;
extern PyObject *const_str_plain_x509;
extern PyObject *const_str_plain_cryptography;
extern PyObject *const_str_plain_extension;
static PyObject *const_tuple_827d29e762c30a31f08e46c699d821b0_tuple;
extern PyObject *const_str_plain_issuer;
static PyObject *const_tuple_str_plain_self_str_plain_certs_tuple;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_70df9fead972d9ab43c8b20fadce06ec;
extern PyObject *const_str_plain_cert;
static PyObject *const_str_plain__verify_algorithm;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_6bee51ce80640157396f88c651564342;
extern PyObject *const_str_plain__OIDS_TO_HASH;
extern PyObject *const_int_0;
static PyObject *const_str_digest_ececf41bfab5efb57e44fd8dac31fad8;
extern PyObject *const_str_plain__responder_id;
extern PyObject *const_str_plain_six;
static PyObject *const_str_digest_f0a38bfa5d6912ff8ce8e3d120aced3d;
static PyObject *const_str_digest_4fcf11bc6d439713857131f8070264ba;
extern PyObject *const_str_plain_hashes;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_8835d56aac8a3d020679344bdd06ae7a;
extern PyObject *const_str_plain_load_der_ocsp_response;
extern PyObject *const_str_plain_SHA384;
static PyObject *const_str_digest_217f7df2bea3402123131c30ec62609c;
static PyObject *const_str_digest_e6024771248f11d8a1f2216c5ac092ae;
static PyObject *const_str_digest_25293882a45b97196127daf10b677333;
extern PyObject *const_str_plain_signature_algorithm_oid;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_add_metaclass;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain_certificate_status;
extern PyObject *const_str_plain_create_ocsp_response;
static PyObject *const_str_digest_ebd4760caa2584dc3ed207ac08ddd807;
extern PyObject *const_str_plain_tbs_response_bytes;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_responder_id;
static PyObject *const_str_plain_add_response;
extern PyObject *const_str_plain_ExtensionType;
static PyObject *const_str_digest_60329b99acc2facf1fb40d9cbc14ffa4;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_OCSPResponseBuilder = UNSTREAM_STRING(&constant_bin[ 38734 ], 19, 1);
    const_str_digest_7cdebb5f9ad33f02224a085838631714 = UNSTREAM_STRING(&constant_bin[ 631109 ], 36, 0);
    const_str_digest_135d19079028306a4c20e62f7315aed3 = UNSTREAM_STRING(&constant_bin[ 631145 ], 36, 0);
    const_str_digest_6bc610284c59e8c6c9f83e77f6a7a1fb = UNSTREAM_STRING(&constant_bin[ 631181 ], 52, 0);
    const_str_digest_417bc1351879048743830a24c91ef13e = UNSTREAM_STRING(&constant_bin[ 631233 ], 35, 0);
    const_tuple_str_plain_cls_str_plain_response_status_str_plain_backend_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_cls_str_plain_response_status_str_plain_backend_tuple, 0, const_str_plain_cls); Py_INCREF(const_str_plain_cls);
    PyTuple_SET_ITEM(const_tuple_str_plain_cls_str_plain_response_status_str_plain_backend_tuple, 1, const_str_plain_response_status); Py_INCREF(const_str_plain_response_status);
    PyTuple_SET_ITEM(const_tuple_str_plain_cls_str_plain_response_status_str_plain_backend_tuple, 2, const_str_plain_backend); Py_INCREF(const_str_plain_backend);
    const_str_plain_MALFORMED_REQUEST = UNSTREAM_STRING(&constant_bin[ 631268 ], 17, 1);
    const_str_digest_64523dea7d1e99bb72e8a8784eaf7d34 = UNSTREAM_STRING(&constant_bin[ 631285 ], 38, 0);
    const_str_digest_8a186eaf06e64a30f8176e9f9e79210d = UNSTREAM_STRING(&constant_bin[ 631323 ], 94, 0);
    const_str_plain_OCSPRequestBuilder = UNSTREAM_STRING(&constant_bin[ 38643 ], 18, 1);
    const_str_digest_d229c9eed643eee60d1ab52111e943a6 = UNSTREAM_STRING(&constant_bin[ 631417 ], 55, 0);
    const_str_plain_add_certificate = UNSTREAM_STRING(&constant_bin[ 631472 ], 15, 1);
    const_str_digest_173e1f5936576e525a4ec0c436e18865 = UNSTREAM_STRING(&constant_bin[ 181535 ], 22, 0);
    const_str_digest_db0053b51be31b73175e4b706eeb071d = UNSTREAM_STRING(&constant_bin[ 631487 ], 42, 0);
    const_str_digest_089f90728c4b730f63c7d992ccdcebde = UNSTREAM_STRING(&constant_bin[ 631529 ], 33, 0);
    const_tuple_a5a3994aa13b09e25b566d2fa604ce58_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_a5a3994aa13b09e25b566d2fa604ce58_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_a5a3994aa13b09e25b566d2fa604ce58_tuple, 1, const_str_plain_cert); Py_INCREF(const_str_plain_cert);
    PyTuple_SET_ITEM(const_tuple_a5a3994aa13b09e25b566d2fa604ce58_tuple, 2, const_str_plain_issuer); Py_INCREF(const_str_plain_issuer);
    PyTuple_SET_ITEM(const_tuple_a5a3994aa13b09e25b566d2fa604ce58_tuple, 3, const_str_plain_algorithm); Py_INCREF(const_str_plain_algorithm);
    const_str_digest_c834f18bb73a01711dd784328a5feb72 = UNSTREAM_STRING(&constant_bin[ 631562 ], 75, 0);
    const_str_digest_f1a3a125e3ba714b022de01f55589c5a = UNSTREAM_STRING(&constant_bin[ 631637 ], 51, 0);
    const_str_digest_fac64a568c98dcf01e5a6aeb3d4dae70 = UNSTREAM_STRING(&constant_bin[ 631688 ], 57, 0);
    const_str_digest_d5501c4718b7c887f0d053e467278836 = UNSTREAM_STRING(&constant_bin[ 181513 ], 22, 0);
    const_str_digest_a1d03a0afb523717a753a213904cc192 = UNSTREAM_STRING(&constant_bin[ 631745 ], 46, 0);
    const_str_digest_91d1cdc36c68313cdd0a89259cd9d216 = UNSTREAM_STRING(&constant_bin[ 631791 ], 7, 0);
    const_tuple_str_plain_self_str_plain_request_str_plain_extensions_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_request_str_plain_extensions_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_request_str_plain_extensions_tuple, 1, const_str_plain_request); Py_INCREF(const_str_plain_request);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_request_str_plain_extensions_tuple, 2, const_str_plain_extensions); Py_INCREF(const_str_plain_extensions);
    const_str_digest_65b530f15541aaeee94ab7b7dbde259c = UNSTREAM_STRING(&constant_bin[ 631798 ], 77, 0);
    const_str_digest_d320c4f96061871a2ea480cb45f84c6e = UNSTREAM_STRING(&constant_bin[ 631875 ], 36, 0);
    const_str_digest_1c9a992c5af933927b6653bf116d68fc = UNSTREAM_STRING(&constant_bin[ 631911 ], 37, 0);
    const_tuple_bd38329603d033d1de4004f843766dc2_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_bd38329603d033d1de4004f843766dc2_tuple, 0, const_str_plain__EARLIEST_UTC_TIME); Py_INCREF(const_str_plain__EARLIEST_UTC_TIME);
    PyTuple_SET_ITEM(const_tuple_bd38329603d033d1de4004f843766dc2_tuple, 1, const_str_plain__convert_to_naive_utc_time); Py_INCREF(const_str_plain__convert_to_naive_utc_time);
    PyTuple_SET_ITEM(const_tuple_bd38329603d033d1de4004f843766dc2_tuple, 2, const_str_plain__reject_duplicate_extension); Py_INCREF(const_str_plain__reject_duplicate_extension);
    const_str_digest_b748c93313cc612300dbdce6bc0417b9 = UNSTREAM_STRING(&constant_bin[ 181557 ], 22, 0);
    const_str_digest_79c50ec227b35df8e19f6bd36cdc474a = UNSTREAM_STRING(&constant_bin[ 631948 ], 31, 0);
    const_str_digest_ef265d53a3abbd80162dfeeff2b1b653 = UNSTREAM_STRING(&constant_bin[ 631979 ], 89, 0);
    const_str_digest_5c750b487d5010e7466a2d1eaa26f22c = UNSTREAM_STRING(&constant_bin[ 632068 ], 25, 0);
    const_str_plain__SingleResponse = UNSTREAM_STRING(&constant_bin[ 38690 ], 15, 1);
    const_str_digest_b7c4a76d8d2eee68808f67039932e4c7 = UNSTREAM_STRING(&constant_bin[ 632093 ], 31, 0);
    const_str_plain__ALLOWED_HASHES = UNSTREAM_STRING(&constant_bin[ 38553 ], 15, 1);
    const_str_digest_0803e6568131d3ace6a97c0848babbec = UNSTREAM_STRING(&constant_bin[ 181453 ], 22, 0);
    const_str_digest_41405f026fd915aaca466f4e1b3ea1d9 = UNSTREAM_STRING(&constant_bin[ 632124 ], 67, 0);
    const_str_digest_97841e0407a21a46fa17b8ec8f246b28 = UNSTREAM_STRING(&constant_bin[ 181621 ], 13, 0);
    const_str_digest_0d6c085154d81c4fc564ab07d3f6dd63 = UNSTREAM_STRING(&constant_bin[ 632191 ], 187, 0);
    const_str_digest_e2f0f4177ab1ab3498fd8acfbbb86275 = UNSTREAM_STRING(&constant_bin[ 632378 ], 45, 0);
    const_str_plain_singleresp = UNSTREAM_STRING(&constant_bin[ 632423 ], 10, 1);
    const_str_plain_INTERNAL_ERROR = UNSTREAM_STRING(&constant_bin[ 632433 ], 14, 1);
    const_str_digest_65e7a1b514a856378ca7ddbf66ed88d7 = UNSTREAM_STRING(&constant_bin[ 632447 ], 33, 0);
    const_str_digest_def803b62a8438702e7fa6e95ce69665 = UNSTREAM_STRING(&constant_bin[ 632480 ], 43, 0);
    const_str_plain_GOOD = UNSTREAM_STRING(&constant_bin[ 632523 ], 4, 1);
    const_str_plain_TRY_LATER = UNSTREAM_STRING(&constant_bin[ 632527 ], 9, 1);
    const_str_digest_693ac668d00156b83095e145c5bd4cde = UNSTREAM_STRING(&constant_bin[ 632536 ], 7, 0);
    const_str_digest_94557de83454f1dc2ecf5e90de6f06e3 = UNSTREAM_STRING(&constant_bin[ 632543 ], 129, 0);
    const_str_digest_6f2673571deef5894c0114a72c423238 = UNSTREAM_STRING(&constant_bin[ 632672 ], 50, 0);
    const_str_plain_cert_status = UNSTREAM_STRING(&constant_bin[ 632722 ], 11, 1);
    const_str_plain_UNKNOWN = UNSTREAM_STRING(&constant_bin[ 43952 ], 7, 1);
    const_str_digest_09946f148ee0372feb9a08e6dda8281c = UNSTREAM_STRING(&constant_bin[ 632733 ], 55, 0);
    const_str_digest_eaeff09629549f9f70f7ef52807e664d = UNSTREAM_STRING(&constant_bin[ 632788 ], 47, 0);
    const_str_digest_6eec9db0a9e799e06ad4618b1a2d6bde = UNSTREAM_STRING(&constant_bin[ 632835 ], 37, 0);
    const_tuple_d39f9e716cdbb1c02d01256267218513_tuple = PyTuple_New(10);
    PyTuple_SET_ITEM(const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 1, const_str_plain_cert); Py_INCREF(const_str_plain_cert);
    PyTuple_SET_ITEM(const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 2, const_str_plain_issuer); Py_INCREF(const_str_plain_issuer);
    PyTuple_SET_ITEM(const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 3, const_str_plain_algorithm); Py_INCREF(const_str_plain_algorithm);
    PyTuple_SET_ITEM(const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 4, const_str_plain_cert_status); Py_INCREF(const_str_plain_cert_status);
    PyTuple_SET_ITEM(const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 5, const_str_plain_this_update); Py_INCREF(const_str_plain_this_update);
    PyTuple_SET_ITEM(const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 6, const_str_plain_next_update); Py_INCREF(const_str_plain_next_update);
    PyTuple_SET_ITEM(const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 7, const_str_plain_revocation_time); Py_INCREF(const_str_plain_revocation_time);
    PyTuple_SET_ITEM(const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 8, const_str_plain_revocation_reason); Py_INCREF(const_str_plain_revocation_reason);
    PyTuple_SET_ITEM(const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 9, const_str_plain_singleresp); Py_INCREF(const_str_plain_singleresp);
    const_str_digest_e600056fa813ee20b834db2400ca93c0 = UNSTREAM_STRING(&constant_bin[ 632872 ], 109, 0);
    const_str_digest_ecc40804a91b6e6178935f28a7360431 = UNSTREAM_STRING(&constant_bin[ 632981 ], 56, 0);
    const_str_plain_SIG_REQUIRED = UNSTREAM_STRING(&constant_bin[ 633037 ], 12, 1);
    const_str_plain_NAME = UNSTREAM_STRING(&constant_bin[ 9537 ], 4, 1);
    const_str_digest_c7ef7d093c77366587d3ae719b523a52 = UNSTREAM_STRING(&constant_bin[ 633049 ], 54, 0);
    const_tuple_str_plain_self_str_plain_encoding_str_plain_responder_cert_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_encoding_str_plain_responder_cert_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_encoding_str_plain_responder_cert_tuple, 1, const_str_plain_encoding); Py_INCREF(const_str_plain_encoding);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_encoding_str_plain_responder_cert_tuple, 2, const_str_plain_responder_cert); Py_INCREF(const_str_plain_responder_cert);
    const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple, 1, const_str_plain_response); Py_INCREF(const_str_plain_response);
    const_str_plain_responder_id = UNSTREAM_STRING(&constant_bin[ 631529 ], 12, 1);
    PyTuple_SET_ITEM(const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple, 2, const_str_plain_responder_id); Py_INCREF(const_str_plain_responder_id);
    PyTuple_SET_ITEM(const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple, 3, const_str_plain_certs); Py_INCREF(const_str_plain_certs);
    PyTuple_SET_ITEM(const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple, 4, const_str_plain_extensions); Py_INCREF(const_str_plain_extensions);
    const_str_digest_f6672a4031538be2131c35c3a4d7b9d9 = UNSTREAM_STRING(&constant_bin[ 633103 ], 45, 0);
    const_str_digest_6cf5b98336437d37c50bc673c82ea14f = UNSTREAM_STRING(&constant_bin[ 633148 ], 37, 0);
    const_str_plain_build_unsuccessful = UNSTREAM_STRING(&constant_bin[ 633185 ], 18, 1);
    const_tuple_827d29e762c30a31f08e46c699d821b0_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 1, const_str_plain_cert); Py_INCREF(const_str_plain_cert);
    PyTuple_SET_ITEM(const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 2, const_str_plain_issuer); Py_INCREF(const_str_plain_issuer);
    PyTuple_SET_ITEM(const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 3, const_str_plain_algorithm); Py_INCREF(const_str_plain_algorithm);
    PyTuple_SET_ITEM(const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 4, const_str_plain_cert_status); Py_INCREF(const_str_plain_cert_status);
    PyTuple_SET_ITEM(const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 5, const_str_plain_this_update); Py_INCREF(const_str_plain_this_update);
    PyTuple_SET_ITEM(const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 6, const_str_plain_next_update); Py_INCREF(const_str_plain_next_update);
    PyTuple_SET_ITEM(const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 7, const_str_plain_revocation_time); Py_INCREF(const_str_plain_revocation_time);
    PyTuple_SET_ITEM(const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 8, const_str_plain_revocation_reason); Py_INCREF(const_str_plain_revocation_reason);
    const_tuple_str_plain_self_str_plain_certs_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_certs_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_certs_tuple, 1, const_str_plain_certs); Py_INCREF(const_str_plain_certs);
    const_str_digest_70df9fead972d9ab43c8b20fadce06ec = UNSTREAM_STRING(&constant_bin[ 633203 ], 82, 0);
    const_str_plain__verify_algorithm = UNSTREAM_STRING(&constant_bin[ 38597 ], 17, 1);
    const_str_digest_6bee51ce80640157396f88c651564342 = UNSTREAM_STRING(&constant_bin[ 633285 ], 41, 0);
    const_str_digest_ececf41bfab5efb57e44fd8dac31fad8 = UNSTREAM_STRING(&constant_bin[ 618472 ], 88, 0);
    const_str_digest_f0a38bfa5d6912ff8ce8e3d120aced3d = UNSTREAM_STRING(&constant_bin[ 633326 ], 46, 0);
    const_str_digest_4fcf11bc6d439713857131f8070264ba = UNSTREAM_STRING(&constant_bin[ 633372 ], 105, 0);
    const_str_digest_8835d56aac8a3d020679344bdd06ae7a = UNSTREAM_STRING(&constant_bin[ 633477 ], 65, 0);
    const_str_digest_217f7df2bea3402123131c30ec62609c = UNSTREAM_STRING(&constant_bin[ 633542 ], 66, 0);
    const_str_digest_e6024771248f11d8a1f2216c5ac092ae = UNSTREAM_STRING(&constant_bin[ 633608 ], 67, 0);
    const_str_digest_25293882a45b97196127daf10b677333 = UNSTREAM_STRING(&constant_bin[ 633675 ], 68, 0);
    const_str_digest_ebd4760caa2584dc3ed207ac08ddd807 = UNSTREAM_STRING(&constant_bin[ 633743 ], 80, 0);
    const_str_plain_add_response = UNSTREAM_STRING(&constant_bin[ 633823 ], 12, 1);
    const_str_digest_60329b99acc2facf1fb40d9cbc14ffa4 = UNSTREAM_STRING(&constant_bin[ 633835 ], 42, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$x509$ocsp(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_89ce5c6ce5c2efb4960053db01603717;
static PyCodeObject *codeobj_66db9d92d9b32af984bc2be6c2d08e81;
static PyCodeObject *codeobj_1e8aa55a9eafb266e83c1ac7ed613f50;
static PyCodeObject *codeobj_033a20ad47d2eb6bef6e9d012ae4ab5f;
static PyCodeObject *codeobj_d88b496a17da499cffc0d944abefb2a6;
static PyCodeObject *codeobj_4facc0402928495c6ad9efbb0fa26262;
static PyCodeObject *codeobj_790749f48b7fd2c49b434e0621a87806;
static PyCodeObject *codeobj_b8956c982c7993f335314f432614b619;
static PyCodeObject *codeobj_28e31c9acc2ce33d9b513bf22f82eb4f;
static PyCodeObject *codeobj_10eebe6f45f88b2bb030f6cd5d07d42e;
static PyCodeObject *codeobj_70876c6d6322eedc9e6a9de4e10da9a5;
static PyCodeObject *codeobj_091c94b643521510cb1068bfaa3ffb16;
static PyCodeObject *codeobj_e9c27759b1d2c309ff7602b9bbe46908;
static PyCodeObject *codeobj_11c42c2bf66897e79c374eb194940e0d;
static PyCodeObject *codeobj_1bd650accbef2c736cc4ec0451d38428;
static PyCodeObject *codeobj_bd51ba9e7210036242ab8a175b4a28be;
static PyCodeObject *codeobj_8fe1035b2a1a2784360ec14b6bec2b7b;
static PyCodeObject *codeobj_01eb7ce505729ea778286867318c17c3;
static PyCodeObject *codeobj_9772adc2ce5d685d7a8e14c427257657;
static PyCodeObject *codeobj_50673a574d79303b8a7c40abafc975de;
static PyCodeObject *codeobj_1c12e3d8845cc1faef415ef8384cb8a1;
static PyCodeObject *codeobj_6c075553d89a097c0875c9d11d3a5ffe;
static PyCodeObject *codeobj_1751a8d0cfee00f7af49de5afd437ef5;
static PyCodeObject *codeobj_ca2d53c76229bdfd7696a8e235ecade3;
static PyCodeObject *codeobj_ecfa330ee57d766b4469fcf5203802e5;
static PyCodeObject *codeobj_b598b38c240d607fad71ea1e2d3fc5f2;
static PyCodeObject *codeobj_b29e843fd0aa66d62c7476ae4432a7c8;
static PyCodeObject *codeobj_5e69f636ef5ce30200e78b1d43736f23;
static PyCodeObject *codeobj_e32acdaeb7f04e346cc5835899f9c878;
static PyCodeObject *codeobj_64292a79d25a6663b98b02cd206b5e87;
static PyCodeObject *codeobj_cea58b66bc74d74e26127256abb3cb60;
static PyCodeObject *codeobj_8b924079e64a594f7283d83e806e8a10;
static PyCodeObject *codeobj_0b6a3e77c00f5699cf83ff37453e189c;
static PyCodeObject *codeobj_af992773f274e35c3c1e068638a99d22;
static PyCodeObject *codeobj_245d5ea5e8fbf3d6786735270a1827f4;
static PyCodeObject *codeobj_4741366d399ada087df6cf5750d4b6ad;
static PyCodeObject *codeobj_2f20cca8f0e8c02628678fb7561ca940;
static PyCodeObject *codeobj_84c889d15513cccb42529d0ddd4db38a;
static PyCodeObject *codeobj_9b337a602b8b3359f4cc1bded6a276ce;
static PyCodeObject *codeobj_9fceef760096235f1cd63a601c8fa4c4;
static PyCodeObject *codeobj_1783d6939d9b46880c76aa746108edee;
static PyCodeObject *codeobj_40ecdeb4031d1d2ecae1ae31344453e8;
static PyCodeObject *codeobj_94f1414814d477d054a3e03bad8f2316;
static PyCodeObject *codeobj_bbec608633f68b485786085e93fa93d0;
static PyCodeObject *codeobj_3775882e7e636cddeeb29263e64d685f;
static PyCodeObject *codeobj_f84d3e7b8efa257e55fedf53ef6e3f40;
static PyCodeObject *codeobj_984a78bda66136ebc37f036364a9b482;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_5c750b487d5010e7466a2d1eaa26f22c);
    codeobj_89ce5c6ce5c2efb4960053db01603717 = MAKE_CODEOBJECT(module_filename_obj, 43, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_angle_genexpr, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple, 1, 0, 0);
    codeobj_66db9d92d9b32af984bc2be6c2d08e81 = MAKE_CODEOBJECT(module_filename_obj, 63, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_angle_genexpr, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple, 1, 0, 0);
    codeobj_1e8aa55a9eafb266e83c1ac7ed613f50 = MAKE_CODEOBJECT(module_filename_obj, 218, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_angle_genexpr, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple, 1, 0, 0);
    codeobj_033a20ad47d2eb6bef6e9d012ae4ab5f = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_b7c4a76d8d2eee68808f67039932e4c7, const_tuple_empty, 0, 0, 0);
    codeobj_d88b496a17da499cffc0d944abefb2a6 = MAKE_CODEOBJECT(module_filename_obj, 265, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_OCSPRequest, const_tuple_empty, 0, 0, 0);
    codeobj_4facc0402928495c6ad9efbb0fa26262 = MAKE_CODEOBJECT(module_filename_obj, 303, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_OCSPResponse, const_tuple_empty, 0, 0, 0);
    codeobj_790749f48b7fd2c49b434e0621a87806 = MAKE_CODEOBJECT(module_filename_obj, 175, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_OCSPResponseBuilder, const_tuple_empty, 0, 0, 0);
    codeobj_b8956c982c7993f335314f432614b619 = MAKE_CODEOBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain___init__, const_tuple_827d29e762c30a31f08e46c699d821b0_tuple, 9, 0, 0);
    codeobj_28e31c9acc2ce33d9b513bf22f82eb4f = MAKE_CODEOBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain___init__, const_tuple_str_plain_self_str_plain_request_str_plain_extensions_tuple, 3, 0, 0);
    codeobj_10eebe6f45f88b2bb030f6cd5d07d42e = MAKE_CODEOBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain___init__, const_tuple_afe2946a12a3f0cb528f1a93782e25e1_tuple, 5, 0, 0);
    codeobj_70876c6d6322eedc9e6a9de4e10da9a5 = MAKE_CODEOBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain__verify_algorithm, const_tuple_str_plain_algorithm_tuple, 1, 0, 0);
    codeobj_091c94b643521510cb1068bfaa3ffb16 = MAKE_CODEOBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_add_certificate, const_tuple_a5a3994aa13b09e25b566d2fa604ce58_tuple, 4, 0, 0);
    codeobj_e9c27759b1d2c309ff7602b9bbe46908 = MAKE_CODEOBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_add_extension, const_tuple_str_plain_self_str_plain_extension_str_plain_critical_tuple, 3, 0, 0);
    codeobj_11c42c2bf66897e79c374eb194940e0d = MAKE_CODEOBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_add_extension, const_tuple_str_plain_self_str_plain_extension_str_plain_critical_tuple, 3, 0, 0);
    codeobj_1bd650accbef2c736cc4ec0451d38428 = MAKE_CODEOBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_add_response, const_tuple_d39f9e716cdbb1c02d01256267218513_tuple, 9, 0, 0);
    codeobj_bd51ba9e7210036242ab8a175b4a28be = MAKE_CODEOBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_build, const_tuple_str_plain_self_str_plain_backend_tuple, 1, 0, 0);
    codeobj_8fe1035b2a1a2784360ec14b6bec2b7b = MAKE_CODEOBJECT(module_filename_obj, 251, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_build_unsuccessful, const_tuple_str_plain_cls_str_plain_response_status_str_plain_backend_tuple, 2, 0, 0);
    codeobj_01eb7ce505729ea778286867318c17c3 = MAKE_CODEOBJECT(module_filename_obj, 361, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_certificate_status, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_9772adc2ce5d685d7a8e14c427257657 = MAKE_CODEOBJECT(module_filename_obj, 335, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_certificates, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_50673a574d79303b8a7c40abafc975de = MAKE_CODEOBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_certificates, const_tuple_str_plain_self_str_plain_certs_tuple, 2, 0, 0);
    codeobj_1c12e3d8845cc1faef415ef8384cb8a1 = MAKE_CODEOBJECT(module_filename_obj, 295, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_extensions, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_6c075553d89a097c0875c9d11d3a5ffe = MAKE_CODEOBJECT(module_filename_obj, 418, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_extensions, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_1751a8d0cfee00f7af49de5afd437ef5 = MAKE_CODEOBJECT(module_filename_obj, 278, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_hash_algorithm, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_ca2d53c76229bdfd7696a8e235ecade3 = MAKE_CODEOBJECT(module_filename_obj, 406, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_hash_algorithm, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_ecfa330ee57d766b4469fcf5203802e5 = MAKE_CODEOBJECT(module_filename_obj, 266, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_issuer_key_hash, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_b598b38c240d607fad71ea1e2d3fc5f2 = MAKE_CODEOBJECT(module_filename_obj, 394, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_issuer_key_hash, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_b29e843fd0aa66d62c7476ae4432a7c8 = MAKE_CODEOBJECT(module_filename_obj, 272, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_issuer_name_hash, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_5e69f636ef5ce30200e78b1d43736f23 = MAKE_CODEOBJECT(module_filename_obj, 400, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_issuer_name_hash, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_e32acdaeb7f04e346cc5835899f9c878 = MAKE_CODEOBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_der_ocsp_request, const_tuple_str_plain_data_str_plain_backend_tuple, 1, 0, 0);
    codeobj_64292a79d25a6663b98b02cd206b5e87 = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_load_der_ocsp_response, const_tuple_str_plain_data_str_plain_backend_tuple, 1, 0, 0);
    codeobj_cea58b66bc74d74e26127256abb3cb60 = MAKE_CODEOBJECT(module_filename_obj, 388, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_next_update, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_8b924079e64a594f7283d83e806e8a10 = MAKE_CODEOBJECT(module_filename_obj, 355, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_produced_at, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_0b6a3e77c00f5699cf83ff37453e189c = MAKE_CODEOBJECT(module_filename_obj, 289, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_public_bytes, const_tuple_str_plain_self_str_plain_encoding_tuple, 2, 0, 0);
    codeobj_af992773f274e35c3c1e068638a99d22 = MAKE_CODEOBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_responder_id, const_tuple_str_plain_self_str_plain_encoding_str_plain_responder_cert_tuple, 3, 0, 0);
    codeobj_245d5ea5e8fbf3d6786735270a1827f4 = MAKE_CODEOBJECT(module_filename_obj, 343, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_responder_key_hash, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_4741366d399ada087df6cf5750d4b6ad = MAKE_CODEOBJECT(module_filename_obj, 349, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_responder_name, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_2f20cca8f0e8c02628678fb7561ca940 = MAKE_CODEOBJECT(module_filename_obj, 304, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_response_status, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_84c889d15513cccb42529d0ddd4db38a = MAKE_CODEOBJECT(module_filename_obj, 374, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_revocation_reason, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_9b337a602b8b3359f4cc1bded6a276ce = MAKE_CODEOBJECT(module_filename_obj, 367, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_revocation_time, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_9fceef760096235f1cd63a601c8fa4c4 = MAKE_CODEOBJECT(module_filename_obj, 284, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_serial_number, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_1783d6939d9b46880c76aa746108edee = MAKE_CODEOBJECT(module_filename_obj, 412, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_serial_number, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_40ecdeb4031d1d2ecae1ae31344453e8 = MAKE_CODEOBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_sign, const_tuple_f166ade4e70e6d21279bc1fa68e30a26_tuple, 3, 0, 0);
    codeobj_94f1414814d477d054a3e03bad8f2316 = MAKE_CODEOBJECT(module_filename_obj, 323, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_signature, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_bbec608633f68b485786085e93fa93d0 = MAKE_CODEOBJECT(module_filename_obj, 311, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_signature_algorithm_oid, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_3775882e7e636cddeeb29263e64d685f = MAKE_CODEOBJECT(module_filename_obj, 317, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_signature_hash_algorithm, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_f84d3e7b8efa257e55fedf53ef6e3f40 = MAKE_CODEOBJECT(module_filename_obj, 329, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_tbs_response_bytes, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_984a78bda66136ebc37f036364a9b482 = MAKE_CODEOBJECT(module_filename_obj, 381, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_this_update, const_tuple_str_plain_self_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *cryptography$x509$ocsp$$$genexpr_1_genexpr_maker(void);


static PyObject *cryptography$x509$ocsp$$$genexpr_2_genexpr_maker(void);


static PyObject *cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_maker(void);


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_10_add_response();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_11_responder_id();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_12_certificates();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_13_add_extension();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_14_sign();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_15_build_unsuccessful();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_16_issuer_key_hash();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_17_issuer_name_hash();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_18_hash_algorithm();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_19_serial_number();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_1__verify_algorithm();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_20_public_bytes();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_21_extensions();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_22_response_status();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_23_signature_algorithm_oid();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_24_signature_hash_algorithm();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_25_signature();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_26_tbs_response_bytes();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_27_certificates();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_28_responder_key_hash();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_29_responder_name();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_2_load_der_ocsp_request();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_30_produced_at();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_31_certificate_status();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_32_revocation_time();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_33_revocation_reason();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_34_this_update();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_35_next_update();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_36_issuer_key_hash();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_37_issuer_name_hash();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_38_hash_algorithm();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_39_serial_number();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_3_load_der_ocsp_response();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_40_extensions();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_4___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_5_add_certificate();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_6_add_extension();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_7_build();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_8___init__();


static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_9___init__(PyObject *defaults);


// The module function definitions.

struct cryptography$x509$ocsp$$$genexpr_1_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *cryptography$x509$ocsp$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value ) {
    CHECK_OBJECT((PyObject *)generator);
    assert(Nuitka_Generator_Check( (PyObject *)generator ));

    // Heap access if used.
    struct cryptography$x509$ocsp$$$genexpr_1_genexpr_locals *generator_heap = (struct cryptography$x509$ocsp$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_m_frame, codeobj_89ce5c6ce5c2efb4960053db01603717, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *));
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
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(PyCell_GET(generator->m_closure[0]));
        tmp_next_source_1 = PyCell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 43;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_source_name_1 = generator_heap->var_x;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_value);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_expression_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_x);
        tmp_tuple_element_1 = generator_heap->var_x;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_expression_name_1, 1, tmp_tuple_element_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 43;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 43;
        generator_heap->type_description_1 = "No";
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

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

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
            NULL,
            generator_heap->var_x
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;



    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *cryptography$x509$ocsp$$$genexpr_1_genexpr_maker(void) {
    return Nuitka_Generator_New(
        cryptography$x509$ocsp$$$genexpr_1_genexpr_context,
        module_cryptography$x509$ocsp,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_89ce5c6ce5c2efb4960053db01603717,
        1,
        sizeof(struct cryptography$x509$ocsp$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_cryptography$x509$ocsp$$$function_1__verify_algorithm(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_algorithm = python_pars[0];
    struct Nuitka_FrameObject *frame_70876c6d6322eedc9e6a9de4e10da9a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_70876c6d6322eedc9e6a9de4e10da9a5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_70876c6d6322eedc9e6a9de4e10da9a5, codeobj_70876c6d6322eedc9e6a9de4e10da9a5, module_cryptography$x509$ocsp, sizeof(void *));
    frame_70876c6d6322eedc9e6a9de4e10da9a5 = cache_frame_70876c6d6322eedc9e6a9de4e10da9a5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_70876c6d6322eedc9e6a9de4e10da9a5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_70876c6d6322eedc9e6a9de4e10da9a5) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_algorithm);
        tmp_isinstance_inst_1 = par_algorithm;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__ALLOWED_HASHES);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__ALLOWED_HASHES);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 38540 ], 44, 0);
            exception_tb = NULL;

            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
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
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_fac64a568c98dcf01e5a6aeb3d4dae70;
            frame_70876c6d6322eedc9e6a9de4e10da9a5->m_frame.f_lineno = 52;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 52;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_70876c6d6322eedc9e6a9de4e10da9a5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_70876c6d6322eedc9e6a9de4e10da9a5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_70876c6d6322eedc9e6a9de4e10da9a5, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_70876c6d6322eedc9e6a9de4e10da9a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70876c6d6322eedc9e6a9de4e10da9a5, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_70876c6d6322eedc9e6a9de4e10da9a5,
        type_description_1,
        par_algorithm
    );


    // Release cached frame.
    if (frame_70876c6d6322eedc9e6a9de4e10da9a5 == cache_frame_70876c6d6322eedc9e6a9de4e10da9a5) {
        Py_DECREF(frame_70876c6d6322eedc9e6a9de4e10da9a5);
    }
    cache_frame_70876c6d6322eedc9e6a9de4e10da9a5 = NULL;

    assertFrameObject(frame_70876c6d6322eedc9e6a9de4e10da9a5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_1__verify_algorithm);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct cryptography$x509$ocsp$$$genexpr_2_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *cryptography$x509$ocsp$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value ) {
    CHECK_OBJECT((PyObject *)generator);
    assert(Nuitka_Generator_Check( (PyObject *)generator ));

    // Heap access if used.
    struct cryptography$x509$ocsp$$$genexpr_2_genexpr_locals *generator_heap = (struct cryptography$x509$ocsp$$$genexpr_2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_m_frame, codeobj_66db9d92d9b32af984bc2be6c2d08e81, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *));
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
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(PyCell_GET(generator->m_closure[0]));
        tmp_next_source_1 = PyCell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 63;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_source_name_1 = generator_heap->var_x;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_value);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 63;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_expression_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_x);
        tmp_tuple_element_1 = generator_heap->var_x;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_expression_name_1, 1, tmp_tuple_element_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 63;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 63;
        generator_heap->type_description_1 = "No";
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

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

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
            NULL,
            generator_heap->var_x
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;



    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *cryptography$x509$ocsp$$$genexpr_2_genexpr_maker(void) {
    return Nuitka_Generator_New(
        cryptography$x509$ocsp$$$genexpr_2_genexpr_context,
        module_cryptography$x509$ocsp,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_66db9d92d9b32af984bc2be6c2d08e81,
        1,
        sizeof(struct cryptography$x509$ocsp$$$genexpr_2_genexpr_locals)
    );
}


static PyObject *impl_cryptography$x509$ocsp$$$function_2_load_der_ocsp_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_backend = NULL;
    struct Nuitka_FrameObject *frame_e32acdaeb7f04e346cc5835899f9c878;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e32acdaeb7f04e346cc5835899f9c878 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_e32acdaeb7f04e346cc5835899f9c878, codeobj_e32acdaeb7f04e346cc5835899f9c878, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *));
    frame_e32acdaeb7f04e346cc5835899f9c878 = cache_frame_e32acdaeb7f04e346cc5835899f9c878;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e32acdaeb7f04e346cc5835899f9c878);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e32acdaeb7f04e346cc5835899f9c878) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$x509$ocsp;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
        tmp_level_name_1 = const_int_0;
        frame_e32acdaeb7f04e346cc5835899f9c878->m_frame.f_lineno = 67;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_backend);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_backend == NULL);
        var_backend = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_backend);
        tmp_called_instance_1 = var_backend;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_1 = par_data;
        frame_e32acdaeb7f04e346cc5835899f9c878->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_load_der_ocsp_request, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e32acdaeb7f04e346cc5835899f9c878);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e32acdaeb7f04e346cc5835899f9c878);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e32acdaeb7f04e346cc5835899f9c878);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e32acdaeb7f04e346cc5835899f9c878, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e32acdaeb7f04e346cc5835899f9c878->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e32acdaeb7f04e346cc5835899f9c878, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e32acdaeb7f04e346cc5835899f9c878,
        type_description_1,
        par_data,
        var_backend
    );


    // Release cached frame.
    if (frame_e32acdaeb7f04e346cc5835899f9c878 == cache_frame_e32acdaeb7f04e346cc5835899f9c878) {
        Py_DECREF(frame_e32acdaeb7f04e346cc5835899f9c878);
    }
    cache_frame_e32acdaeb7f04e346cc5835899f9c878 = NULL;

    assertFrameObject(frame_e32acdaeb7f04e346cc5835899f9c878);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_2_load_der_ocsp_request);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_backend);
    Py_DECREF(var_backend);
    var_backend = NULL;

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

    Py_XDECREF(var_backend);
    var_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_2_load_der_ocsp_request);
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


static PyObject *impl_cryptography$x509$ocsp$$$function_3_load_der_ocsp_response(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_backend = NULL;
    struct Nuitka_FrameObject *frame_64292a79d25a6663b98b02cd206b5e87;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_64292a79d25a6663b98b02cd206b5e87 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_64292a79d25a6663b98b02cd206b5e87, codeobj_64292a79d25a6663b98b02cd206b5e87, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *));
    frame_64292a79d25a6663b98b02cd206b5e87 = cache_frame_64292a79d25a6663b98b02cd206b5e87;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_64292a79d25a6663b98b02cd206b5e87);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_64292a79d25a6663b98b02cd206b5e87) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$x509$ocsp;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
        tmp_level_name_1 = const_int_0;
        frame_64292a79d25a6663b98b02cd206b5e87->m_frame.f_lineno = 72;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_backend);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_backend == NULL);
        var_backend = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_backend);
        tmp_called_instance_1 = var_backend;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_1 = par_data;
        frame_64292a79d25a6663b98b02cd206b5e87->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_load_der_ocsp_response, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_64292a79d25a6663b98b02cd206b5e87);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_64292a79d25a6663b98b02cd206b5e87);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_64292a79d25a6663b98b02cd206b5e87);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_64292a79d25a6663b98b02cd206b5e87, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_64292a79d25a6663b98b02cd206b5e87->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64292a79d25a6663b98b02cd206b5e87, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_64292a79d25a6663b98b02cd206b5e87,
        type_description_1,
        par_data,
        var_backend
    );


    // Release cached frame.
    if (frame_64292a79d25a6663b98b02cd206b5e87 == cache_frame_64292a79d25a6663b98b02cd206b5e87) {
        Py_DECREF(frame_64292a79d25a6663b98b02cd206b5e87);
    }
    cache_frame_64292a79d25a6663b98b02cd206b5e87 = NULL;

    assertFrameObject(frame_64292a79d25a6663b98b02cd206b5e87);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_3_load_der_ocsp_response);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_backend);
    Py_DECREF(var_backend);
    var_backend = NULL;

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

    Py_XDECREF(var_backend);
    var_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_3_load_der_ocsp_response);
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


static PyObject *impl_cryptography$x509$ocsp$$$function_4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_extensions = python_pars[2];
    struct Nuitka_FrameObject *frame_28e31c9acc2ce33d9b513bf22f82eb4f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_28e31c9acc2ce33d9b513bf22f82eb4f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_28e31c9acc2ce33d9b513bf22f82eb4f, codeobj_28e31c9acc2ce33d9b513bf22f82eb4f, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_28e31c9acc2ce33d9b513bf22f82eb4f = cache_frame_28e31c9acc2ce33d9b513bf22f82eb4f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_28e31c9acc2ce33d9b513bf22f82eb4f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_28e31c9acc2ce33d9b513bf22f82eb4f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_request);
        tmp_assattr_name_1 = par_request;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__request, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_extensions);
        tmp_assattr_name_2 = par_extensions;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__extensions, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_28e31c9acc2ce33d9b513bf22f82eb4f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_28e31c9acc2ce33d9b513bf22f82eb4f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_28e31c9acc2ce33d9b513bf22f82eb4f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_28e31c9acc2ce33d9b513bf22f82eb4f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28e31c9acc2ce33d9b513bf22f82eb4f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_28e31c9acc2ce33d9b513bf22f82eb4f,
        type_description_1,
        par_self,
        par_request,
        par_extensions
    );


    // Release cached frame.
    if (frame_28e31c9acc2ce33d9b513bf22f82eb4f == cache_frame_28e31c9acc2ce33d9b513bf22f82eb4f) {
        Py_DECREF(frame_28e31c9acc2ce33d9b513bf22f82eb4f);
    }
    cache_frame_28e31c9acc2ce33d9b513bf22f82eb4f = NULL;

    assertFrameObject(frame_28e31c9acc2ce33d9b513bf22f82eb4f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_4___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_extensions);
    Py_DECREF(par_extensions);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_extensions);
    Py_DECREF(par_extensions);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$x509$ocsp$$$function_5_add_certificate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cert = python_pars[1];
    PyObject *par_issuer = python_pars[2];
    PyObject *par_algorithm = python_pars[3];
    struct Nuitka_FrameObject *frame_091c94b643521510cb1068bfaa3ffb16;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_091c94b643521510cb1068bfaa3ffb16 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_091c94b643521510cb1068bfaa3ffb16, codeobj_091c94b643521510cb1068bfaa3ffb16, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_091c94b643521510cb1068bfaa3ffb16 = cache_frame_091c94b643521510cb1068bfaa3ffb16;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_091c94b643521510cb1068bfaa3ffb16);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_091c94b643521510cb1068bfaa3ffb16) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__request);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_a1d03a0afb523717a753a213904cc192;
            frame_091c94b643521510cb1068bfaa3ffb16->m_frame.f_lineno = 83;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 83;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__verify_algorithm);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_algorithm);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 38584 ], 46, 0);
            exception_tb = NULL;

            exception_lineno = 85;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_algorithm);
        tmp_args_element_name_1 = par_algorithm;
        frame_091c94b643521510cb1068bfaa3ffb16->m_frame.f_lineno = 85;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT(par_cert);
        tmp_isinstance_inst_1 = par_cert;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_x509);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3675 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_Certificate);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_issuer);
        tmp_isinstance_inst_2 = par_issuer;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_x509);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3675 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 88;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_Certificate);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_make_exception_arg_2 = const_str_digest_6cf5b98336437d37c50bc673c82ea14f;
            frame_091c94b643521510cb1068bfaa3ffb16->m_frame.f_lineno = 90;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
            assert(!(tmp_raise_type_2 == NULL));
            exception_type = tmp_raise_type_2;
            exception_lineno = 90;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPRequestBuilder);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPRequestBuilder);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 38630 ], 47, 0);
            exception_tb = NULL;

            exception_lineno = 92;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT(par_cert);
        tmp_tuple_element_1 = par_cert;
        tmp_args_element_name_2 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_element_name_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_issuer);
        tmp_tuple_element_1 = par_issuer;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_element_name_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_algorithm);
        tmp_tuple_element_1 = par_algorithm;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_element_name_2, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__extensions);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 92;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_091c94b643521510cb1068bfaa3ffb16->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_091c94b643521510cb1068bfaa3ffb16);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_091c94b643521510cb1068bfaa3ffb16);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_091c94b643521510cb1068bfaa3ffb16);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_091c94b643521510cb1068bfaa3ffb16, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_091c94b643521510cb1068bfaa3ffb16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_091c94b643521510cb1068bfaa3ffb16, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_091c94b643521510cb1068bfaa3ffb16,
        type_description_1,
        par_self,
        par_cert,
        par_issuer,
        par_algorithm
    );


    // Release cached frame.
    if (frame_091c94b643521510cb1068bfaa3ffb16 == cache_frame_091c94b643521510cb1068bfaa3ffb16) {
        Py_DECREF(frame_091c94b643521510cb1068bfaa3ffb16);
    }
    cache_frame_091c94b643521510cb1068bfaa3ffb16 = NULL;

    assertFrameObject(frame_091c94b643521510cb1068bfaa3ffb16);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_5_add_certificate);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    CHECK_OBJECT(par_issuer);
    Py_DECREF(par_issuer);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    CHECK_OBJECT(par_issuer);
    Py_DECREF(par_issuer);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$x509$ocsp$$$function_6_add_extension(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_extension = python_pars[1];
    PyObject *par_critical = python_pars[2];
    struct Nuitka_FrameObject *frame_e9c27759b1d2c309ff7602b9bbe46908;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e9c27759b1d2c309ff7602b9bbe46908 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_e9c27759b1d2c309ff7602b9bbe46908, codeobj_e9c27759b1d2c309ff7602b9bbe46908, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_e9c27759b1d2c309ff7602b9bbe46908 = cache_frame_e9c27759b1d2c309ff7602b9bbe46908;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e9c27759b1d2c309ff7602b9bbe46908);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e9c27759b1d2c309ff7602b9bbe46908) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_extension);
        tmp_isinstance_inst_1 = par_extension;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_x509);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3675 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 95;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_ExtensionType);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
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
            tmp_make_exception_arg_1 = const_str_digest_f0b1544196c3e6daaf368b98ad3c6594;
            frame_e9c27759b1d2c309ff7602b9bbe46908->m_frame.f_lineno = 96;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 96;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_x509);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3675 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_Extension);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_extension);
        tmp_source_name_3 = par_extension;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_oid);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_critical);
        tmp_args_element_name_2 = par_critical;
        CHECK_OBJECT(par_extension);
        tmp_args_element_name_3 = par_extension;
        frame_e9c27759b1d2c309ff7602b9bbe46908->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_extension;
            assert(old != NULL);
            par_extension = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__reject_duplicate_extension);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__reject_duplicate_extension);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35557 ], 56, 0);
            exception_tb = NULL;

            exception_lineno = 99;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT(par_extension);
        tmp_args_element_name_4 = par_extension;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__extensions);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_e9c27759b1d2c309ff7602b9bbe46908->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_right_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPRequestBuilder);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPRequestBuilder);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 38630 ], 47, 0);
            exception_tb = NULL;

            exception_lineno = 101;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__request);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__extensions);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_6);

            exception_lineno = 102;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_extension);
        tmp_list_element_1 = par_extension;
        tmp_right_name_1 = PyList_New(1);
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_right_name_1, 0, tmp_list_element_1);
        tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_LIST(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_6);

            exception_lineno = 102;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_e9c27759b1d2c309ff7602b9bbe46908->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9c27759b1d2c309ff7602b9bbe46908);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9c27759b1d2c309ff7602b9bbe46908);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9c27759b1d2c309ff7602b9bbe46908);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e9c27759b1d2c309ff7602b9bbe46908, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e9c27759b1d2c309ff7602b9bbe46908->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e9c27759b1d2c309ff7602b9bbe46908, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e9c27759b1d2c309ff7602b9bbe46908,
        type_description_1,
        par_self,
        par_extension,
        par_critical
    );


    // Release cached frame.
    if (frame_e9c27759b1d2c309ff7602b9bbe46908 == cache_frame_e9c27759b1d2c309ff7602b9bbe46908) {
        Py_DECREF(frame_e9c27759b1d2c309ff7602b9bbe46908);
    }
    cache_frame_e9c27759b1d2c309ff7602b9bbe46908 = NULL;

    assertFrameObject(frame_e9c27759b1d2c309ff7602b9bbe46908);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_6_add_extension);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_extension);
    Py_DECREF(par_extension);
    par_extension = NULL;

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

    CHECK_OBJECT((PyObject *)par_extension);
    Py_DECREF(par_extension);
    par_extension = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_6_add_extension);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_critical);
    Py_DECREF(par_critical);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_critical);
    Py_DECREF(par_critical);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$x509$ocsp$$$function_7_build(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_backend = NULL;
    struct Nuitka_FrameObject *frame_bd51ba9e7210036242ab8a175b4a28be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bd51ba9e7210036242ab8a175b4a28be = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_bd51ba9e7210036242ab8a175b4a28be, codeobj_bd51ba9e7210036242ab8a175b4a28be, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *));
    frame_bd51ba9e7210036242ab8a175b4a28be = cache_frame_bd51ba9e7210036242ab8a175b4a28be;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bd51ba9e7210036242ab8a175b4a28be);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bd51ba9e7210036242ab8a175b4a28be) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$x509$ocsp;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
        tmp_level_name_1 = const_int_0;
        frame_bd51ba9e7210036242ab8a175b4a28be->m_frame.f_lineno = 106;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_backend);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_backend == NULL);
        var_backend = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__request);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_db0053b51be31b73175e4b706eeb071d;
            frame_bd51ba9e7210036242ab8a175b4a28be->m_frame.f_lineno = 108;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 108;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_backend);
        tmp_called_instance_1 = var_backend;
        CHECK_OBJECT(par_self);
        tmp_args_element_name_1 = par_self;
        frame_bd51ba9e7210036242ab8a175b4a28be->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_create_ocsp_request, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd51ba9e7210036242ab8a175b4a28be);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd51ba9e7210036242ab8a175b4a28be);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd51ba9e7210036242ab8a175b4a28be);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bd51ba9e7210036242ab8a175b4a28be, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_bd51ba9e7210036242ab8a175b4a28be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd51ba9e7210036242ab8a175b4a28be, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bd51ba9e7210036242ab8a175b4a28be,
        type_description_1,
        par_self,
        var_backend
    );


    // Release cached frame.
    if (frame_bd51ba9e7210036242ab8a175b4a28be == cache_frame_bd51ba9e7210036242ab8a175b4a28be) {
        Py_DECREF(frame_bd51ba9e7210036242ab8a175b4a28be);
    }
    cache_frame_bd51ba9e7210036242ab8a175b4a28be = NULL;

    assertFrameObject(frame_bd51ba9e7210036242ab8a175b4a28be);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_7_build);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_backend);
    Py_DECREF(var_backend);
    var_backend = NULL;

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

    Py_XDECREF(var_backend);
    var_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_7_build);
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


static PyObject *impl_cryptography$x509$ocsp$$$function_8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cert = python_pars[1];
    PyObject *par_issuer = python_pars[2];
    PyObject *par_algorithm = python_pars[3];
    PyObject *par_cert_status = python_pars[4];
    PyObject *par_this_update = python_pars[5];
    PyObject *par_next_update = python_pars[6];
    PyObject *par_revocation_time = python_pars[7];
    PyObject *par_revocation_reason = python_pars[8];
    struct Nuitka_FrameObject *frame_b8956c982c7993f335314f432614b619;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b8956c982c7993f335314f432614b619 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_b8956c982c7993f335314f432614b619, codeobj_b8956c982c7993f335314f432614b619, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_b8956c982c7993f335314f432614b619 = cache_frame_b8956c982c7993f335314f432614b619;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b8956c982c7993f335314f432614b619);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b8956c982c7993f335314f432614b619) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(par_cert);
        tmp_isinstance_inst_1 = par_cert;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_x509);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3675 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 117;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_Certificate);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_issuer);
        tmp_isinstance_inst_2 = par_issuer;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_x509);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3675 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 118;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_Certificate);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_6cf5b98336437d37c50bc673c82ea14f;
            frame_b8956c982c7993f335314f432614b619->m_frame.f_lineno = 120;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 120;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__verify_algorithm);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_algorithm);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 38584 ], 46, 0);
            exception_tb = NULL;

            exception_lineno = 122;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        CHECK_OBJECT(par_algorithm);
        tmp_args_element_name_1 = par_algorithm;
        frame_b8956c982c7993f335314f432614b619->m_frame.f_lineno = 122;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT(par_this_update);
        tmp_isinstance_inst_3 = par_this_update;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_datetime);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3880 ], 37, 0);
            exception_tb = NULL;

            exception_lineno = 123;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_datetime);
        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        Py_DECREF(tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_1c9a992c5af933927b6653bf116d68fc;
            frame_b8956c982c7993f335314f432614b619->m_frame.f_lineno = 124;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
            assert(!(tmp_raise_type_2 == NULL));
            exception_type = tmp_raise_type_2;
            exception_lineno = 124;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT(par_next_update);
        tmp_compexpr_left_1 = par_next_update;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_next_update);
        tmp_isinstance_inst_4 = par_next_update;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_datetime);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3880 ], 37, 0);
            exception_tb = NULL;

            exception_lineno = 127;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_isinstance_cls_4 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_datetime);
        if (tmp_isinstance_cls_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        Py_DECREF(tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_f6672a4031538be2131c35c3a4d7b9d9;
            frame_b8956c982c7993f335314f432614b619->m_frame.f_lineno = 129;
            tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
            assert(!(tmp_raise_type_3 == NULL));
            exception_type = tmp_raise_type_3;
            exception_lineno = 129;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_cert);
        tmp_assattr_name_1 = par_cert;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__cert, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_issuer);
        tmp_assattr_name_2 = par_issuer;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__issuer, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_algorithm);
        tmp_assattr_name_3 = par_algorithm;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__algorithm, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_this_update);
        tmp_assattr_name_4 = par_this_update;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__this_update, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_next_update);
        tmp_assattr_name_5 = par_next_update;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__next_update, tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_isinstance_inst_5;
        PyObject *tmp_isinstance_cls_5;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT(par_cert_status);
        tmp_isinstance_inst_5 = par_cert_status;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPCertStatus);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPCertStatus);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28991 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 137;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_5 = tmp_mvar_value_6;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_raise_type_4;
            PyObject *tmp_make_exception_arg_4;
            tmp_make_exception_arg_4 = const_str_digest_ecc40804a91b6e6178935f28a7360431;
            frame_b8956c982c7993f335314f432614b619->m_frame.f_lineno = 138;
            tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_4);
            assert(!(tmp_raise_type_4 == NULL));
            exception_type = tmp_raise_type_4;
            exception_lineno = 138;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_7;
        CHECK_OBJECT(par_cert_status);
        tmp_compexpr_left_2 = par_cert_status;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPCertStatus);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPCertStatus);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28991 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 141;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_7;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_REVOKED);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(par_revocation_time);
            tmp_compexpr_left_3 = par_revocation_time;
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_6 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_raise_type_5;
                PyObject *tmp_make_exception_arg_5;
                tmp_make_exception_arg_5 = const_str_digest_217f7df2bea3402123131c30ec62609c;
                frame_b8956c982c7993f335314f432614b619->m_frame.f_lineno = 143;
                tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_5);
                assert(!(tmp_raise_type_5 == NULL));
                exception_type = tmp_raise_type_5;
                exception_lineno = 143;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_6:;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT(par_revocation_reason);
            tmp_compexpr_left_4 = par_revocation_reason;
            tmp_compexpr_right_4 = Py_None;
            tmp_condition_result_7 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_raise_type_6;
                PyObject *tmp_make_exception_arg_6;
                tmp_make_exception_arg_6 = const_str_digest_25293882a45b97196127daf10b677333;
                frame_b8956c982c7993f335314f432614b619->m_frame.f_lineno = 148;
                tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_6);
                assert(!(tmp_raise_type_6 == NULL));
                exception_type = tmp_raise_type_6;
                exception_lineno = 148;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_7:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_6;
            PyObject *tmp_isinstance_inst_6;
            PyObject *tmp_isinstance_cls_6;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_8;
            CHECK_OBJECT(par_revocation_time);
            tmp_isinstance_inst_6 = par_revocation_time;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_datetime);

            if (unlikely(tmp_mvar_value_8 == NULL)) {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime);
            }

            if (tmp_mvar_value_8 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 3880 ], 37, 0);
                exception_tb = NULL;

                exception_lineno = 153;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_8;
            tmp_isinstance_cls_6 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_datetime);
            if (tmp_isinstance_cls_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
            Py_DECREF(tmp_isinstance_cls_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_6 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                PyObject *tmp_raise_type_7;
                PyObject *tmp_make_exception_arg_7;
                tmp_make_exception_arg_7 = const_str_digest_6bee51ce80640157396f88c651564342;
                frame_b8956c982c7993f335314f432614b619->m_frame.f_lineno = 154;
                tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_7);
                assert(!(tmp_raise_type_7 == NULL));
                exception_type = tmp_raise_type_7;
                exception_lineno = 154;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__convert_to_naive_utc_time);

            if (unlikely(tmp_mvar_value_9 == NULL)) {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_to_naive_utc_time);
            }

            if (tmp_mvar_value_9 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 35696 ], 55, 0);
                exception_tb = NULL;

                exception_lineno = 156;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_9;
            CHECK_OBJECT(par_revocation_time);
            tmp_args_element_name_2 = par_revocation_time;
            frame_b8956c982c7993f335314f432614b619->m_frame.f_lineno = 156;
            tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_revocation_time;
                assert(old != NULL);
                par_revocation_time = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_mvar_value_10;
            CHECK_OBJECT(par_revocation_time);
            tmp_compexpr_left_5 = par_revocation_time;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__EARLIEST_UTC_TIME);

            if (unlikely(tmp_mvar_value_10 == NULL)) {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__EARLIEST_UTC_TIME);
            }

            if (tmp_mvar_value_10 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 35751 ], 47, 0);
                exception_tb = NULL;

                exception_lineno = 157;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_5 = tmp_mvar_value_10;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
            branch_yes_9:;
            {
                PyObject *tmp_raise_type_8;
                PyObject *tmp_make_exception_arg_8;
                tmp_make_exception_arg_8 = const_str_digest_d229c9eed643eee60d1ab52111e943a6;
                frame_b8956c982c7993f335314f432614b619->m_frame.f_lineno = 158;
                tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_8);
                assert(!(tmp_raise_type_8 == NULL));
                exception_type = tmp_raise_type_8;
                exception_lineno = 158;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_9:;
        }
        {
            nuitka_bool tmp_condition_result_10;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_operand_name_7;
            PyObject *tmp_isinstance_inst_7;
            PyObject *tmp_isinstance_cls_7;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_11;
            CHECK_OBJECT(par_revocation_reason);
            tmp_compexpr_left_6 = par_revocation_reason;
            tmp_compexpr_right_6 = Py_None;
            tmp_and_left_value_2 = (tmp_compexpr_left_6 != tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_and_left_truth_2 == 1) {
                goto and_right_2;
            } else {
                goto and_left_2;
            }
            and_right_2:;
            CHECK_OBJECT(par_revocation_reason);
            tmp_isinstance_inst_7 = par_revocation_reason;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509);

            if (unlikely(tmp_mvar_value_11 == NULL)) {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_x509);
            }

            if (tmp_mvar_value_11 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 3675 ], 33, 0);
                exception_tb = NULL;

                exception_lineno = 163;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_11;
            tmp_isinstance_cls_7 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_ReasonFlags);
            if (tmp_isinstance_cls_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_7, tmp_isinstance_cls_7);
            Py_DECREF(tmp_isinstance_cls_7);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_7 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_10 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_10 = tmp_and_left_value_2;
            and_end_2:;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
            branch_yes_10:;
            {
                PyObject *tmp_raise_type_9;
                PyObject *tmp_make_exception_arg_9;
                tmp_make_exception_arg_9 = const_str_digest_e6024771248f11d8a1f2216c5ac092ae;
                frame_b8956c982c7993f335314f432614b619->m_frame.f_lineno = 165;
                tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_9);
                assert(!(tmp_raise_type_9 == NULL));
                exception_type = tmp_raise_type_9;
                exception_lineno = 165;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_10:;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_cert_status);
        tmp_assattr_name_6 = par_cert_status;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain__cert_status, tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_revocation_time);
        tmp_assattr_name_7 = par_revocation_time;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain__revocation_time, tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_revocation_reason);
        tmp_assattr_name_8 = par_revocation_reason;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain__revocation_reason, tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b8956c982c7993f335314f432614b619);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b8956c982c7993f335314f432614b619);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b8956c982c7993f335314f432614b619, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b8956c982c7993f335314f432614b619->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b8956c982c7993f335314f432614b619, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b8956c982c7993f335314f432614b619,
        type_description_1,
        par_self,
        par_cert,
        par_issuer,
        par_algorithm,
        par_cert_status,
        par_this_update,
        par_next_update,
        par_revocation_time,
        par_revocation_reason
    );


    // Release cached frame.
    if (frame_b8956c982c7993f335314f432614b619 == cache_frame_b8956c982c7993f335314f432614b619) {
        Py_DECREF(frame_b8956c982c7993f335314f432614b619);
    }
    cache_frame_b8956c982c7993f335314f432614b619 = NULL;

    assertFrameObject(frame_b8956c982c7993f335314f432614b619);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_8___init__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_revocation_time);
    Py_DECREF(par_revocation_time);
    par_revocation_time = NULL;

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

    Py_XDECREF(par_revocation_time);
    par_revocation_time = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_8___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_revocation_reason);
    Py_DECREF(par_revocation_reason);
    CHECK_OBJECT(par_cert_status);
    Py_DECREF(par_cert_status);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_next_update);
    Py_DECREF(par_next_update);
    CHECK_OBJECT(par_this_update);
    Py_DECREF(par_this_update);
    CHECK_OBJECT(par_issuer);
    Py_DECREF(par_issuer);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_revocation_reason);
    Py_DECREF(par_revocation_reason);
    CHECK_OBJECT(par_cert_status);
    Py_DECREF(par_cert_status);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_next_update);
    Py_DECREF(par_next_update);
    CHECK_OBJECT(par_this_update);
    Py_DECREF(par_this_update);
    CHECK_OBJECT(par_issuer);
    Py_DECREF(par_issuer);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$x509$ocsp$$$function_9___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_response = python_pars[1];
    PyObject *par_responder_id = python_pars[2];
    PyObject *par_certs = python_pars[3];
    PyObject *par_extensions = python_pars[4];
    struct Nuitka_FrameObject *frame_10eebe6f45f88b2bb030f6cd5d07d42e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10eebe6f45f88b2bb030f6cd5d07d42e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_10eebe6f45f88b2bb030f6cd5d07d42e, codeobj_10eebe6f45f88b2bb030f6cd5d07d42e, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_10eebe6f45f88b2bb030f6cd5d07d42e = cache_frame_10eebe6f45f88b2bb030f6cd5d07d42e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_10eebe6f45f88b2bb030f6cd5d07d42e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_10eebe6f45f88b2bb030f6cd5d07d42e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_response);
        tmp_assattr_name_1 = par_response;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__response, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_responder_id);
        tmp_assattr_name_2 = par_responder_id;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__responder_id, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_certs);
        tmp_assattr_name_3 = par_certs;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__certs, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_extensions);
        tmp_assattr_name_4 = par_extensions;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__extensions, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10eebe6f45f88b2bb030f6cd5d07d42e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10eebe6f45f88b2bb030f6cd5d07d42e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_10eebe6f45f88b2bb030f6cd5d07d42e, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_10eebe6f45f88b2bb030f6cd5d07d42e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10eebe6f45f88b2bb030f6cd5d07d42e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10eebe6f45f88b2bb030f6cd5d07d42e,
        type_description_1,
        par_self,
        par_response,
        par_responder_id,
        par_certs,
        par_extensions
    );


    // Release cached frame.
    if (frame_10eebe6f45f88b2bb030f6cd5d07d42e == cache_frame_10eebe6f45f88b2bb030f6cd5d07d42e) {
        Py_DECREF(frame_10eebe6f45f88b2bb030f6cd5d07d42e);
    }
    cache_frame_10eebe6f45f88b2bb030f6cd5d07d42e = NULL;

    assertFrameObject(frame_10eebe6f45f88b2bb030f6cd5d07d42e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_9___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_extensions);
    Py_DECREF(par_extensions);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_certs);
    Py_DECREF(par_certs);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);
    CHECK_OBJECT(par_responder_id);
    Py_DECREF(par_responder_id);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_extensions);
    Py_DECREF(par_extensions);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_certs);
    Py_DECREF(par_certs);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);
    CHECK_OBJECT(par_responder_id);
    Py_DECREF(par_responder_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$x509$ocsp$$$function_10_add_response(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cert = python_pars[1];
    PyObject *par_issuer = python_pars[2];
    PyObject *par_algorithm = python_pars[3];
    PyObject *par_cert_status = python_pars[4];
    PyObject *par_this_update = python_pars[5];
    PyObject *par_next_update = python_pars[6];
    PyObject *par_revocation_time = python_pars[7];
    PyObject *par_revocation_reason = python_pars[8];
    PyObject *var_singleresp = NULL;
    struct Nuitka_FrameObject *frame_1bd650accbef2c736cc4ec0451d38428;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1bd650accbef2c736cc4ec0451d38428 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_1bd650accbef2c736cc4ec0451d38428, codeobj_1bd650accbef2c736cc4ec0451d38428, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_1bd650accbef2c736cc4ec0451d38428 = cache_frame_1bd650accbef2c736cc4ec0451d38428;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1bd650accbef2c736cc4ec0451d38428);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1bd650accbef2c736cc4ec0451d38428) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__response);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_417bc1351879048743830a24c91ef13e;
            frame_1bd650accbef2c736cc4ec0451d38428->m_frame.f_lineno = 186;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 186;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__SingleResponse);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__SingleResponse);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 38677 ], 44, 0);
            exception_tb = NULL;

            exception_lineno = 188;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_cert);
        tmp_args_element_name_1 = par_cert;
        CHECK_OBJECT(par_issuer);
        tmp_args_element_name_2 = par_issuer;
        CHECK_OBJECT(par_algorithm);
        tmp_args_element_name_3 = par_algorithm;
        CHECK_OBJECT(par_cert_status);
        tmp_args_element_name_4 = par_cert_status;
        CHECK_OBJECT(par_this_update);
        tmp_args_element_name_5 = par_this_update;
        CHECK_OBJECT(par_next_update);
        tmp_args_element_name_6 = par_next_update;
        CHECK_OBJECT(par_revocation_time);
        tmp_args_element_name_7 = par_revocation_time;
        CHECK_OBJECT(par_revocation_reason);
        tmp_args_element_name_8 = par_revocation_reason;
        frame_1bd650accbef2c736cc4ec0451d38428->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS8(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_singleresp == NULL);
        var_singleresp = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 38721 ], 48, 0);
            exception_tb = NULL;

            exception_lineno = 192;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(var_singleresp);
        tmp_args_element_name_9 = var_singleresp;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__responder_id);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__certs);
        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_10);

            exception_lineno = 194;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__extensions);
        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_10);
            Py_DECREF(tmp_args_element_name_11);

            exception_lineno = 194;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1bd650accbef2c736cc4ec0451d38428->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_10);
        Py_DECREF(tmp_args_element_name_11);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1bd650accbef2c736cc4ec0451d38428);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1bd650accbef2c736cc4ec0451d38428);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1bd650accbef2c736cc4ec0451d38428);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1bd650accbef2c736cc4ec0451d38428, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1bd650accbef2c736cc4ec0451d38428->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1bd650accbef2c736cc4ec0451d38428, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1bd650accbef2c736cc4ec0451d38428,
        type_description_1,
        par_self,
        par_cert,
        par_issuer,
        par_algorithm,
        par_cert_status,
        par_this_update,
        par_next_update,
        par_revocation_time,
        par_revocation_reason,
        var_singleresp
    );


    // Release cached frame.
    if (frame_1bd650accbef2c736cc4ec0451d38428 == cache_frame_1bd650accbef2c736cc4ec0451d38428) {
        Py_DECREF(frame_1bd650accbef2c736cc4ec0451d38428);
    }
    cache_frame_1bd650accbef2c736cc4ec0451d38428 = NULL;

    assertFrameObject(frame_1bd650accbef2c736cc4ec0451d38428);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_10_add_response);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_singleresp);
    Py_DECREF(var_singleresp);
    var_singleresp = NULL;

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

    Py_XDECREF(var_singleresp);
    var_singleresp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_10_add_response);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_revocation_reason);
    Py_DECREF(par_revocation_reason);
    CHECK_OBJECT(par_cert_status);
    Py_DECREF(par_cert_status);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_revocation_time);
    Py_DECREF(par_revocation_time);
    CHECK_OBJECT(par_next_update);
    Py_DECREF(par_next_update);
    CHECK_OBJECT(par_this_update);
    Py_DECREF(par_this_update);
    CHECK_OBJECT(par_issuer);
    Py_DECREF(par_issuer);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_revocation_reason);
    Py_DECREF(par_revocation_reason);
    CHECK_OBJECT(par_cert_status);
    Py_DECREF(par_cert_status);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_revocation_time);
    Py_DECREF(par_revocation_time);
    CHECK_OBJECT(par_next_update);
    Py_DECREF(par_next_update);
    CHECK_OBJECT(par_this_update);
    Py_DECREF(par_this_update);
    CHECK_OBJECT(par_issuer);
    Py_DECREF(par_issuer);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$x509$ocsp$$$function_11_responder_id(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    PyObject *par_responder_cert = python_pars[2];
    struct Nuitka_FrameObject *frame_af992773f274e35c3c1e068638a99d22;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_af992773f274e35c3c1e068638a99d22 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_af992773f274e35c3c1e068638a99d22, codeobj_af992773f274e35c3c1e068638a99d22, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_af992773f274e35c3c1e068638a99d22 = cache_frame_af992773f274e35c3c1e068638a99d22;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_af992773f274e35c3c1e068638a99d22);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_af992773f274e35c3c1e068638a99d22) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__responder_id);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_089f90728c4b730f63c7d992ccdcebde;
            frame_af992773f274e35c3c1e068638a99d22->m_frame.f_lineno = 199;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 199;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_responder_cert);
        tmp_isinstance_inst_1 = par_responder_cert;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_x509);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3675 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_Certificate);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
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
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_7cdebb5f9ad33f02224a085838631714;
            frame_af992773f274e35c3c1e068638a99d22->m_frame.f_lineno = 201;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
            assert(!(tmp_raise_type_2 == NULL));
            exception_type = tmp_raise_type_2;
            exception_lineno = 201;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(par_encoding);
        tmp_isinstance_inst_2 = par_encoding;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponderEncoding);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponderEncoding);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 38769 ], 50, 0);
            exception_tb = NULL;

            exception_lineno = 202;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_2 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_c7ef7d093c77366587d3ae719b523a52;
            frame_af992773f274e35c3c1e068638a99d22->m_frame.f_lineno = 203;
            tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
            assert(!(tmp_raise_type_3 == NULL));
            exception_type = tmp_raise_type_3;
            exception_lineno = 203;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 38721 ], 48, 0);
            exception_tb = NULL;

            exception_lineno = 207;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__response);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_responder_cert);
        tmp_tuple_element_1 = par_responder_cert;
        tmp_args_element_name_2 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_element_name_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_encoding);
        tmp_tuple_element_1 = par_encoding;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_element_name_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__certs);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 209;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__extensions);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 209;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_af992773f274e35c3c1e068638a99d22->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_af992773f274e35c3c1e068638a99d22);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_af992773f274e35c3c1e068638a99d22);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_af992773f274e35c3c1e068638a99d22);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_af992773f274e35c3c1e068638a99d22, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_af992773f274e35c3c1e068638a99d22->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af992773f274e35c3c1e068638a99d22, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_af992773f274e35c3c1e068638a99d22,
        type_description_1,
        par_self,
        par_encoding,
        par_responder_cert
    );


    // Release cached frame.
    if (frame_af992773f274e35c3c1e068638a99d22 == cache_frame_af992773f274e35c3c1e068638a99d22) {
        Py_DECREF(frame_af992773f274e35c3c1e068638a99d22);
    }
    cache_frame_af992773f274e35c3c1e068638a99d22 = NULL;

    assertFrameObject(frame_af992773f274e35c3c1e068638a99d22);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_11_responder_id);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_responder_cert);
    Py_DECREF(par_responder_cert);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_responder_cert);
    Py_DECREF(par_responder_cert);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$x509$ocsp$$$function_12_certificates(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_certs = python_pars[1];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_50673a574d79303b8a7c40abafc975de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_50673a574d79303b8a7c40abafc975de = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_50673a574d79303b8a7c40abafc975de, codeobj_50673a574d79303b8a7c40abafc975de, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *));
    frame_50673a574d79303b8a7c40abafc975de = cache_frame_50673a574d79303b8a7c40abafc975de;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_50673a574d79303b8a7c40abafc975de);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_50673a574d79303b8a7c40abafc975de) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__certs);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_65e7a1b514a856378ca7ddbf66ed88d7;
            frame_50673a574d79303b8a7c40abafc975de->m_frame.f_lineno = 214;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 214;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT(par_certs);
        tmp_list_arg_1 = par_certs;
        tmp_assign_source_1 = PySequence_List(tmp_list_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_certs;
            assert(old != NULL);
            par_certs = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_certs);
        tmp_len_arg_1 = par_certs;
        tmp_compexpr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        assert(!(tmp_compexpr_left_2 == NULL));
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_79c50ec227b35df8e19f6bd36cdc474a;
            frame_50673a574d79303b8a7c40abafc975de->m_frame.f_lineno = 217;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
            assert(!(tmp_raise_type_2 == NULL));
            exception_type = tmp_raise_type_2;
            exception_lineno = 217;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_all_arg_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_certs);
            tmp_iter_arg_1 = par_certs;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        tmp_all_arg_1 = cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_all_arg_1)->m_closure[0] = PyCell_NEW0(tmp_genexpr_1__$0);


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_12_certificates);
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT((PyObject *)tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT((PyObject *)tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_12_certificates);
        return NULL;
        outline_result_1:;
        tmp_operand_name_1 = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_135d19079028306a4c20e62f7315aed3;
            frame_50673a574d79303b8a7c40abafc975de->m_frame.f_lineno = 219;
            tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
            assert(!(tmp_raise_type_3 == NULL));
            exception_type = tmp_raise_type_3;
            exception_lineno = 219;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 38721 ], 48, 0);
            exception_tb = NULL;

            exception_lineno = 220;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__response);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__responder_id);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 221;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_certs);
        tmp_args_element_name_3 = par_certs;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__extensions);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_50673a574d79303b8a7c40abafc975de->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_50673a574d79303b8a7c40abafc975de);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_50673a574d79303b8a7c40abafc975de);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_50673a574d79303b8a7c40abafc975de);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_50673a574d79303b8a7c40abafc975de, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_50673a574d79303b8a7c40abafc975de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50673a574d79303b8a7c40abafc975de, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_50673a574d79303b8a7c40abafc975de,
        type_description_1,
        par_self,
        par_certs
    );


    // Release cached frame.
    if (frame_50673a574d79303b8a7c40abafc975de == cache_frame_50673a574d79303b8a7c40abafc975de) {
        Py_DECREF(frame_50673a574d79303b8a7c40abafc975de);
    }
    cache_frame_50673a574d79303b8a7c40abafc975de = NULL;

    assertFrameObject(frame_50673a574d79303b8a7c40abafc975de);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_12_certificates);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_certs);
    Py_DECREF(par_certs);
    par_certs = NULL;

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

    CHECK_OBJECT((PyObject *)par_certs);
    Py_DECREF(par_certs);
    par_certs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_12_certificates);
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



struct cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value ) {
    CHECK_OBJECT((PyObject *)generator);
    assert(Nuitka_Generator_Check( (PyObject *)generator ));

    // Heap access if used.
    struct cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_locals *generator_heap = (struct cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_m_frame, codeobj_1e8aa55a9eafb266e83c1ac7ed613f50, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *));
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
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(PyCell_GET(generator->m_closure[0]));
        tmp_next_source_1 = PyCell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 218;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_isinstance_inst_1 = generator_heap->var_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_x509);
        }

        if (tmp_mvar_value_1 == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 3675 ], 33, 0);
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_Certificate);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_name_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_expression_name_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 218;
        generator_heap->type_description_1 = "No";
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

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

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
            NULL,
            generator_heap->var_x
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;



    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_maker(void) {
    return Nuitka_Generator_New(
        cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_context,
        module_cryptography$x509$ocsp,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_1e8aa55a9eafb266e83c1ac7ed613f50,
        1,
        sizeof(struct cryptography$x509$ocsp$$$function_12_certificates$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_cryptography$x509$ocsp$$$function_13_add_extension(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_extension = python_pars[1];
    PyObject *par_critical = python_pars[2];
    struct Nuitka_FrameObject *frame_11c42c2bf66897e79c374eb194940e0d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_11c42c2bf66897e79c374eb194940e0d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_11c42c2bf66897e79c374eb194940e0d, codeobj_11c42c2bf66897e79c374eb194940e0d, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_11c42c2bf66897e79c374eb194940e0d = cache_frame_11c42c2bf66897e79c374eb194940e0d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_11c42c2bf66897e79c374eb194940e0d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_11c42c2bf66897e79c374eb194940e0d) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_extension);
        tmp_isinstance_inst_1 = par_extension;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_x509);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3675 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 226;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_ExtensionType);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
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
            tmp_make_exception_arg_1 = const_str_digest_f0b1544196c3e6daaf368b98ad3c6594;
            frame_11c42c2bf66897e79c374eb194940e0d->m_frame.f_lineno = 227;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 227;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_x509);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3675 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 229;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_Extension);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_extension);
        tmp_source_name_3 = par_extension;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_oid);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 229;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_critical);
        tmp_args_element_name_2 = par_critical;
        CHECK_OBJECT(par_extension);
        tmp_args_element_name_3 = par_extension;
        frame_11c42c2bf66897e79c374eb194940e0d->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_extension;
            assert(old != NULL);
            par_extension = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__reject_duplicate_extension);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__reject_duplicate_extension);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35557 ], 56, 0);
            exception_tb = NULL;

            exception_lineno = 230;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT(par_extension);
        tmp_args_element_name_4 = par_extension;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__extensions);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_11c42c2bf66897e79c374eb194940e0d->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_8;
        PyObject *tmp_right_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 38721 ], 48, 0);
            exception_tb = NULL;

            exception_lineno = 232;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__response);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__responder_id);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_6);

            exception_lineno = 233;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_7 = par_self;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__certs);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 234;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_8 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain__extensions);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_7);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 234;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_extension);
        tmp_list_element_1 = par_extension;
        tmp_right_name_1 = PyList_New(1);
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_right_name_1, 0, tmp_list_element_1);
        tmp_args_element_name_9 = BINARY_OPERATION_ADD_OBJECT_LIST(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_7);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 234;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_11c42c2bf66897e79c374eb194940e0d->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_7);
        Py_DECREF(tmp_args_element_name_8);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_11c42c2bf66897e79c374eb194940e0d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_11c42c2bf66897e79c374eb194940e0d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_11c42c2bf66897e79c374eb194940e0d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_11c42c2bf66897e79c374eb194940e0d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_11c42c2bf66897e79c374eb194940e0d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_11c42c2bf66897e79c374eb194940e0d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_11c42c2bf66897e79c374eb194940e0d,
        type_description_1,
        par_self,
        par_extension,
        par_critical
    );


    // Release cached frame.
    if (frame_11c42c2bf66897e79c374eb194940e0d == cache_frame_11c42c2bf66897e79c374eb194940e0d) {
        Py_DECREF(frame_11c42c2bf66897e79c374eb194940e0d);
    }
    cache_frame_11c42c2bf66897e79c374eb194940e0d = NULL;

    assertFrameObject(frame_11c42c2bf66897e79c374eb194940e0d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_13_add_extension);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_extension);
    Py_DECREF(par_extension);
    par_extension = NULL;

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

    CHECK_OBJECT((PyObject *)par_extension);
    Py_DECREF(par_extension);
    par_extension = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_13_add_extension);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_critical);
    Py_DECREF(par_critical);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_critical);
    Py_DECREF(par_critical);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$x509$ocsp$$$function_14_sign(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_private_key = python_pars[1];
    PyObject *par_algorithm = python_pars[2];
    PyObject *var_backend = NULL;
    struct Nuitka_FrameObject *frame_40ecdeb4031d1d2ecae1ae31344453e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_40ecdeb4031d1d2ecae1ae31344453e8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_40ecdeb4031d1d2ecae1ae31344453e8, codeobj_40ecdeb4031d1d2ecae1ae31344453e8, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_40ecdeb4031d1d2ecae1ae31344453e8 = cache_frame_40ecdeb4031d1d2ecae1ae31344453e8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_40ecdeb4031d1d2ecae1ae31344453e8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_40ecdeb4031d1d2ecae1ae31344453e8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$x509$ocsp;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
        tmp_level_name_1 = const_int_0;
        frame_40ecdeb4031d1d2ecae1ae31344453e8->m_frame.f_lineno = 238;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_backend);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_backend == NULL);
        var_backend = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__response);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_64523dea7d1e99bb72e8a8784eaf7d34;
            frame_40ecdeb4031d1d2ecae1ae31344453e8->m_frame.f_lineno = 240;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 240;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__responder_id);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_60329b99acc2facf1fb40d9cbc14ffa4;
            frame_40ecdeb4031d1d2ecae1ae31344453e8->m_frame.f_lineno = 242;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
            assert(!(tmp_raise_type_2 == NULL));
            exception_type = tmp_raise_type_2;
            exception_lineno = 242;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_algorithm);
        tmp_isinstance_inst_1 = par_algorithm;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20483 ], 35, 0);
            exception_tb = NULL;

            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_HashAlgorithm);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
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
            tmp_make_exception_arg_3 = const_str_digest_7b04aff9d25a2baa76a35cbb646b9d21;
            frame_40ecdeb4031d1d2ecae1ae31344453e8->m_frame.f_lineno = 245;
            tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
            assert(!(tmp_raise_type_3 == NULL));
            exception_type = tmp_raise_type_3;
            exception_lineno = 245;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_backend);
        tmp_source_name_4 = var_backend;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_create_ocsp_response);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28800 ], 47, 0);
            exception_tb = NULL;

            exception_lineno = 248;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_2;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_SUCCESSFUL);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 248;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_name_2 = par_self;
        CHECK_OBJECT(par_private_key);
        tmp_args_element_name_3 = par_private_key;
        CHECK_OBJECT(par_algorithm);
        tmp_args_element_name_4 = par_algorithm;
        frame_40ecdeb4031d1d2ecae1ae31344453e8->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_40ecdeb4031d1d2ecae1ae31344453e8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_40ecdeb4031d1d2ecae1ae31344453e8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_40ecdeb4031d1d2ecae1ae31344453e8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_40ecdeb4031d1d2ecae1ae31344453e8, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_40ecdeb4031d1d2ecae1ae31344453e8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_40ecdeb4031d1d2ecae1ae31344453e8, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_40ecdeb4031d1d2ecae1ae31344453e8,
        type_description_1,
        par_self,
        par_private_key,
        par_algorithm,
        var_backend
    );


    // Release cached frame.
    if (frame_40ecdeb4031d1d2ecae1ae31344453e8 == cache_frame_40ecdeb4031d1d2ecae1ae31344453e8) {
        Py_DECREF(frame_40ecdeb4031d1d2ecae1ae31344453e8);
    }
    cache_frame_40ecdeb4031d1d2ecae1ae31344453e8 = NULL;

    assertFrameObject(frame_40ecdeb4031d1d2ecae1ae31344453e8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_14_sign);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_backend);
    Py_DECREF(var_backend);
    var_backend = NULL;

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

    Py_XDECREF(var_backend);
    var_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_14_sign);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_private_key);
    Py_DECREF(par_private_key);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_private_key);
    Py_DECREF(par_private_key);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$x509$ocsp$$$function_15_build_unsuccessful(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_response_status = python_pars[1];
    PyObject *var_backend = NULL;
    struct Nuitka_FrameObject *frame_8fe1035b2a1a2784360ec14b6bec2b7b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8fe1035b2a1a2784360ec14b6bec2b7b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_8fe1035b2a1a2784360ec14b6bec2b7b, codeobj_8fe1035b2a1a2784360ec14b6bec2b7b, module_cryptography$x509$ocsp, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_8fe1035b2a1a2784360ec14b6bec2b7b = cache_frame_8fe1035b2a1a2784360ec14b6bec2b7b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8fe1035b2a1a2784360ec14b6bec2b7b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8fe1035b2a1a2784360ec14b6bec2b7b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$x509$ocsp;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
        tmp_level_name_1 = const_int_0;
        frame_8fe1035b2a1a2784360ec14b6bec2b7b->m_frame.f_lineno = 253;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_backend);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_backend == NULL);
        var_backend = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_response_status);
        tmp_isinstance_inst_1 = par_response_status;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28800 ], 47, 0);
            exception_tb = NULL;

            exception_lineno = 254;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
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
            tmp_make_exception_arg_1 = const_str_digest_09946f148ee0372feb9a08e6dda8281c;
            frame_8fe1035b2a1a2784360ec14b6bec2b7b->m_frame.f_lineno = 255;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 255;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(par_response_status);
        tmp_compexpr_left_1 = par_response_status;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28800 ], 47, 0);
            exception_tb = NULL;

            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_SUCCESSFUL);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_d320c4f96061871a2ea480cb45f84c6e;
            frame_8fe1035b2a1a2784360ec14b6bec2b7b->m_frame.f_lineno = 259;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
            assert(!(tmp_raise_type_2 == NULL));
            exception_type = tmp_raise_type_2;
            exception_lineno = 259;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_backend);
        tmp_called_instance_1 = var_backend;
        CHECK_OBJECT(par_response_status);
        tmp_args_element_name_1 = par_response_status;
        tmp_args_element_name_2 = Py_None;
        tmp_args_element_name_3 = Py_None;
        tmp_args_element_name_4 = Py_None;
        frame_8fe1035b2a1a2784360ec14b6bec2b7b->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_return_value = CALL_METHOD_WITH_ARGS4(tmp_called_instance_1, const_str_plain_create_ocsp_response, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8fe1035b2a1a2784360ec14b6bec2b7b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8fe1035b2a1a2784360ec14b6bec2b7b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8fe1035b2a1a2784360ec14b6bec2b7b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8fe1035b2a1a2784360ec14b6bec2b7b, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_8fe1035b2a1a2784360ec14b6bec2b7b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8fe1035b2a1a2784360ec14b6bec2b7b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8fe1035b2a1a2784360ec14b6bec2b7b,
        type_description_1,
        par_cls,
        par_response_status,
        var_backend
    );


    // Release cached frame.
    if (frame_8fe1035b2a1a2784360ec14b6bec2b7b == cache_frame_8fe1035b2a1a2784360ec14b6bec2b7b) {
        Py_DECREF(frame_8fe1035b2a1a2784360ec14b6bec2b7b);
    }
    cache_frame_8fe1035b2a1a2784360ec14b6bec2b7b = NULL;

    assertFrameObject(frame_8fe1035b2a1a2784360ec14b6bec2b7b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_15_build_unsuccessful);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_backend);
    Py_DECREF(var_backend);
    var_backend = NULL;

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

    Py_XDECREF(var_backend);
    var_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp$$$function_15_build_unsuccessful);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_response_status);
    Py_DECREF(par_response_status);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_response_status);
    Py_DECREF(par_response_status);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_10_add_response() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_10_add_response,
        const_str_plain_add_response,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1bd650accbef2c736cc4ec0451d38428,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_11_responder_id() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_11_responder_id,
        const_str_plain_responder_id,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_af992773f274e35c3c1e068638a99d22,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_12_certificates() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_12_certificates,
        const_str_plain_certificates,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_50673a574d79303b8a7c40abafc975de,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_13_add_extension() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_13_add_extension,
        const_str_plain_add_extension,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_11c42c2bf66897e79c374eb194940e0d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_14_sign() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_14_sign,
        const_str_plain_sign,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_40ecdeb4031d1d2ecae1ae31344453e8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_15_build_unsuccessful() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_15_build_unsuccessful,
        const_str_plain_build_unsuccessful,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8fe1035b2a1a2784360ec14b6bec2b7b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_16_issuer_key_hash() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_issuer_key_hash,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ecfa330ee57d766b4469fcf5203802e5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_f1a3a125e3ba714b022de01f55589c5a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_17_issuer_name_hash() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_issuer_name_hash,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b29e843fd0aa66d62c7476ae4432a7c8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_e2f0f4177ab1ab3498fd8acfbbb86275,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_18_hash_algorithm() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_hash_algorithm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1751a8d0cfee00f7af49de5afd437ef5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_c834f18bb73a01711dd784328a5feb72,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_19_serial_number() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_serial_number,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9fceef760096235f1cd63a601c8fa4c4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_65b530f15541aaeee94ab7b7dbde259c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_1__verify_algorithm() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_1__verify_algorithm,
        const_str_plain__verify_algorithm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_70876c6d6322eedc9e6a9de4e10da9a5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_20_public_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_public_bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0b6a3e77c00f5699cf83ff37453e189c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_eaeff09629549f9f70f7ef52807e664d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_21_extensions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_extensions,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1c12e3d8845cc1faef415ef8384cb8a1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_ebd4760caa2584dc3ed207ac08ddd807,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_22_response_status() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_response_status,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2f20cca8f0e8c02628678fb7561ca940,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_e600056fa813ee20b834db2400ca93c0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_23_signature_algorithm_oid() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_signature_algorithm_oid,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bbec608633f68b485786085e93fa93d0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_8835d56aac8a3d020679344bdd06ae7a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_24_signature_hash_algorithm() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_signature_hash_algorithm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3775882e7e636cddeeb29263e64d685f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_ececf41bfab5efb57e44fd8dac31fad8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_25_signature() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_signature,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_94f1414814d477d054a3e03bad8f2316,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_6eec9db0a9e799e06ad4618b1a2d6bde,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_26_tbs_response_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_tbs_response_bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f84d3e7b8efa257e55fedf53ef6e3f40,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_def803b62a8438702e7fa6e95ce69665,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_27_certificates() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_certificates,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9772adc2ce5d685d7a8e14c427257657,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_0d6c085154d81c4fc564ab07d3f6dd63,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_28_responder_key_hash() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_responder_key_hash,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_245d5ea5e8fbf3d6786735270a1827f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_6f2673571deef5894c0114a72c423238,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_29_responder_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_responder_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4741366d399ada087df6cf5750d4b6ad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_f0a38bfa5d6912ff8ce8e3d120aced3d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_2_load_der_ocsp_request() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_2_load_der_ocsp_request,
        const_str_plain_load_der_ocsp_request,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e32acdaeb7f04e346cc5835899f9c878,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_30_produced_at() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_produced_at,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8b924079e64a594f7283d83e806e8a10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_6bc610284c59e8c6c9f83e77f6a7a1fb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_31_certificate_status() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_certificate_status,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_01eb7ce505729ea778286867318c17c3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_ef265d53a3abbd80162dfeeff2b1b653,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_32_revocation_time() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_revocation_time,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9b337a602b8b3359f4cc1bded6a276ce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_8a186eaf06e64a30f8176e9f9e79210d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_33_revocation_reason() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_revocation_reason,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_84c889d15513cccb42529d0ddd4db38a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_4fcf11bc6d439713857131f8070264ba,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_34_this_update() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_this_update,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_984a78bda66136ebc37f036364a9b482,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_94557de83454f1dc2ecf5e90de6f06e3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_35_next_update() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_next_update,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cea58b66bc74d74e26127256abb3cb60,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_41405f026fd915aaca466f4e1b3ea1d9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_36_issuer_key_hash() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_issuer_key_hash,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b598b38c240d607fad71ea1e2d3fc5f2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_f1a3a125e3ba714b022de01f55589c5a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_37_issuer_name_hash() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_issuer_name_hash,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5e69f636ef5ce30200e78b1d43736f23,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_e2f0f4177ab1ab3498fd8acfbbb86275,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_38_hash_algorithm() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_hash_algorithm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ca2d53c76229bdfd7696a8e235ecade3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_c834f18bb73a01711dd784328a5feb72,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_39_serial_number() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_serial_number,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1783d6939d9b46880c76aa746108edee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_65b530f15541aaeee94ab7b7dbde259c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_3_load_der_ocsp_response() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_3_load_der_ocsp_response,
        const_str_plain_load_der_ocsp_response,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_64292a79d25a6663b98b02cd206b5e87,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_40_extensions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_extensions,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6c075553d89a097c0875c9d11d3a5ffe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        const_str_digest_70df9fead972d9ab43c8b20fadce06ec,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_4___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_28e31c9acc2ce33d9b513bf22f82eb4f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_5_add_certificate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_5_add_certificate,
        const_str_plain_add_certificate,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_091c94b643521510cb1068bfaa3ffb16,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_6_add_extension() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_6_add_extension,
        const_str_plain_add_extension,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e9c27759b1d2c309ff7602b9bbe46908,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_7_build() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_7_build,
        const_str_plain_build,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bd51ba9e7210036242ab8a175b4a28be,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_8___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b8956c982c7993f335314f432614b619,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$ocsp$$$function_9___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$ocsp$$$function_9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_10eebe6f45f88b2bb030f6cd5d07d42e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$ocsp,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$x509$ocsp =
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

function_impl_code functable_cryptography$x509$ocsp[] = {
    impl_cryptography$x509$ocsp$$$function_1__verify_algorithm,
    impl_cryptography$x509$ocsp$$$function_2_load_der_ocsp_request,
    impl_cryptography$x509$ocsp$$$function_3_load_der_ocsp_response,
    impl_cryptography$x509$ocsp$$$function_4___init__,
    impl_cryptography$x509$ocsp$$$function_5_add_certificate,
    impl_cryptography$x509$ocsp$$$function_6_add_extension,
    impl_cryptography$x509$ocsp$$$function_7_build,
    impl_cryptography$x509$ocsp$$$function_8___init__,
    impl_cryptography$x509$ocsp$$$function_9___init__,
    impl_cryptography$x509$ocsp$$$function_10_add_response,
    impl_cryptography$x509$ocsp$$$function_11_responder_id,
    impl_cryptography$x509$ocsp$$$function_12_certificates,
    impl_cryptography$x509$ocsp$$$function_13_add_extension,
    impl_cryptography$x509$ocsp$$$function_14_sign,
    impl_cryptography$x509$ocsp$$$function_15_build_unsuccessful,
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

    function_impl_code *current = functable_cryptography$x509$ocsp;
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

    if (offset > sizeof(functable_cryptography$x509$ocsp) || offset < 0) {
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
        functable_cryptography$x509$ocsp[offset],
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
        module_cryptography$x509$ocsp,
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
PyObject *modulecode_cryptography$x509$ocsp(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_cryptography$x509$ocsp;
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
    PRINT_STRING("cryptography.x509.ocsp: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.x509.ocsp: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.x509.ocsp: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$x509$ocsp\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$x509$ocsp = Py_InitModule4(
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
    mdef_cryptography$x509$ocsp.m_name = module_full_name;
    module_cryptography$x509$ocsp = PyModule_Create(&mdef_cryptography$x509$ocsp);
#endif

    moduledict_cryptography$x509$ocsp = MODULE_DICT(module_cryptography$x509$ocsp);

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
        moduledict_cryptography$x509$ocsp,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$x509$ocsp,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$x509$ocsp,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$x509$ocsp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$x509$ocsp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$x509$ocsp);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_cryptography$x509$ocsp);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_locals_cryptography$x509$ocsp_113_key___init__ = NULL;
    PyObject *tmp_locals_cryptography$x509$ocsp_76_key___init__ = NULL;
    PyObject *tmp_locals_cryptography$x509$ocsp_76_key_add_certificate = NULL;
    PyObject *tmp_locals_cryptography$x509$ocsp_76_key_add_extension = NULL;
    PyObject *tmp_locals_cryptography$x509$ocsp_76_key_build = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    struct Nuitka_FrameObject *frame_033a20ad47d2eb6bef6e9d012ae4ab5f;
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
    PyObject *locals_cryptography$x509$ocsp_29 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_cryptography$x509$ocsp_34 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_cryptography$x509$ocsp_57 = NULL;
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
    PyObject *locals_cryptography$x509$ocsp_175 = NULL;
    struct Nuitka_FrameObject *frame_790749f48b7fd2c49b434e0621a87806_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_790749f48b7fd2c49b434e0621a87806_2 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_cryptography$x509$ocsp_265 = NULL;
    struct Nuitka_FrameObject *frame_d88b496a17da499cffc0d944abefb2a6_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d88b496a17da499cffc0d944abefb2a6_3 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_cryptography$x509$ocsp_303 = NULL;
    struct Nuitka_FrameObject *frame_4facc0402928495c6ad9efbb0fa26262_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4facc0402928495c6ad9efbb0fa26262_4 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
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
    frame_033a20ad47d2eb6bef6e9d012ae4ab5f = MAKE_MODULE_FRAME(codeobj_033a20ad47d2eb6bef6e9d012ae4ab5f, module_cryptography$x509$ocsp);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_033a20ad47d2eb6bef6e9d012ae4ab5f);
    assert(Py_REFCNT(frame_033a20ad47d2eb6bef6e9d012ae4ab5f) == 2);

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
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4);
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
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5);
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
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6);
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
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$x509$ocsp;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 7;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_datetime;
        tmp_globals_name_2 = (PyObject *)moduledict_cryptography$x509$ocsp;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 8;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_enum;
        tmp_globals_name_3 = (PyObject *)moduledict_cryptography$x509$ocsp;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_Enum_tuple;
        tmp_level_name_3 = const_int_0;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 9;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_Enum);
        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_Enum, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_six;
        tmp_globals_name_4 = (PyObject *)moduledict_cryptography$x509$ocsp;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 11;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_cryptography;
        tmp_globals_name_5 = (PyObject *)moduledict_cryptography$x509$ocsp;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_x509_tuple;
        tmp_level_name_5 = const_int_0;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 13;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_x509);
        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_x509, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
        tmp_globals_name_6 = (PyObject *)moduledict_cryptography$x509$ocsp;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_hashes_tuple;
        tmp_level_name_6 = const_int_0;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 14;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_hashes);
        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_99d507f2ac89b982963447ed05345806;
        tmp_globals_name_7 = (PyObject *)moduledict_cryptography$x509$ocsp;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_bd38329603d033d1de4004f843766dc2_tuple;
        tmp_level_name_7 = const_int_0;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 15;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain__EARLIEST_UTC_TIME);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__EARLIEST_UTC_TIME, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain__convert_to_naive_utc_time);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__convert_to_naive_utc_time, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain__reject_duplicate_extension);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__reject_duplicate_extension, tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20490 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 21;
        tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_SHA1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_digest_97841e0407a21a46fa17b8ec8f246b28;
        tmp_assign_source_17 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20490 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 22;
        tmp_dict_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_SHA224);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_digest_0803e6568131d3ace6a97c0848babbec;
        tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20490 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 23;
        tmp_dict_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_SHA256);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = const_str_digest_d5501c4718b7c887f0d053e467278836;
        tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes);
        }

        if (tmp_mvar_value_4 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20490 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_4;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 24;
        tmp_dict_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_SHA384);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = const_str_digest_b748c93313cc612300dbdce6bc0417b9;
        tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes);
        }

        if (tmp_mvar_value_5 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20490 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_5;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 25;
        tmp_dict_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, const_str_plain_SHA512);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = const_str_digest_173e1f5936576e525a4ec0c436e18865;
        tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__OIDS_TO_HASH, tmp_assign_source_17);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_Enum);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Enum);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34390 ], 26, 0);
            exception_tb = NULL;

            exception_lineno = 29;

            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_6;
        tmp_assign_source_18 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_18, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_cryptography$x509$ocsp_29 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_29, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_str_digest_693ac668d00156b83095e145c5bd4cde;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_29, const_str_plain_HASH, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_str_digest_91d1cdc36c68313cdd0a89259cd9d216;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_29, const_str_plain_NAME, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_19 = locals_cryptography$x509$ocsp_29;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_cryptography$x509$ocsp_29);
        locals_cryptography$x509$ocsp_29 = NULL;
        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
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
        tmp_assign_source_20 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_21 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_3;
            }
            assert(tmp_select_metaclass_1__base == NULL);
            tmp_select_metaclass_1__base = tmp_assign_source_21;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_source_name_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_20 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_1);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_6;
            }
            goto try_return_handler_5;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
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
            tmp_assign_source_20 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_20 == NULL));
            goto try_return_handler_5;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
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
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        outline_result_2:;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_OCSPResponderEncoding;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_args_element_name_2 = tmp_class_creation_1__bases;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_22;
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
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_23 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponderEncoding, tmp_assign_source_23);
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_Enum);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Enum);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34390 ], 26, 0);
            exception_tb = NULL;

            exception_lineno = 34;

            goto try_except_handler_7;
        }

        tmp_tuple_element_2 = tmp_mvar_value_7;
        tmp_assign_source_24 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_assign_source_24, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_cryptography$x509$ocsp_34 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_34, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_int_0;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_34, const_str_plain_SUCCESSFUL, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_int_pos_1;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_34, const_str_plain_MALFORMED_REQUEST, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_int_pos_2;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_34, const_str_plain_INTERNAL_ERROR, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_int_pos_3;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_34, const_str_plain_TRY_LATER, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_int_pos_5;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_34, const_str_plain_SIG_REQUIRED, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_int_pos_6;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_34, const_str_plain_UNAUTHORIZED, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_25 = locals_cryptography$x509$ocsp_34;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_cryptography$x509$ocsp_34);
        locals_cryptography$x509$ocsp_34 = NULL;
        goto outline_result_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        outline_result_3:;
        assert(tmp_class_creation_2__class_dict == NULL);
        tmp_class_creation_2__class_dict = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
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
        tmp_assign_source_26 = DICT_GET_ITEM(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_subscribed_name_2 = tmp_class_creation_2__bases;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_27 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 0);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto try_except_handler_7;
            }
            assert(tmp_select_metaclass_2__base == NULL);
            tmp_select_metaclass_2__base = tmp_assign_source_27;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_2;
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_source_name_2 = tmp_select_metaclass_2__base;
            tmp_assign_source_26 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_2);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto try_except_handler_10;
            }
            goto try_return_handler_9;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
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
            tmp_assign_source_26 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_assign_source_26 == NULL));
            goto try_return_handler_9;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
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
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        outline_result_4:;
        condexpr_end_2:;
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_called_name_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_OCSPResponseStatus;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_args_element_name_5 = tmp_class_creation_2__bases;
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__class == NULL);
        tmp_class_creation_2__class = tmp_assign_source_28;
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
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_assign_source_29 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus, tmp_assign_source_29);
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
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dict_seq_1;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_mvar_value_8;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus);

            if (unlikely(tmp_mvar_value_8 == NULL)) {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPResponseStatus);
            }

            if (tmp_mvar_value_8 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28807 ], 40, 0);
                exception_tb = NULL;

                exception_lineno = 43;

                goto frame_exception_exit_1;
            }

            tmp_iter_arg_1 = tmp_mvar_value_8;
            tmp_assign_source_31 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_31;
        }
        // Tried code:
        tmp_dict_seq_1 = cryptography$x509$ocsp$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_dict_seq_1)->m_closure[0] = PyCell_NEW0(tmp_genexpr_1__$0);


        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT((PyObject *)tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_5;
        // End of try:
        CHECK_OBJECT((PyObject *)tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        outline_result_5:;
        tmp_assign_source_30 = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__RESPONSE_STATUS_TO_ENUM, tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20490 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_9;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_SHA1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = PyTuple_New(5);
        PyTuple_SET_ITEM(tmp_assign_source_32, 0, tmp_tuple_element_3);
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes);
        }

        if (tmp_mvar_value_10 == NULL) {
            Py_DECREF(tmp_assign_source_32);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20490 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_10;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_SHA224);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_32);

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_32, 1, tmp_tuple_element_3);
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes);
        }

        if (tmp_mvar_value_11 == NULL) {
            Py_DECREF(tmp_assign_source_32);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20490 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_11;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_SHA256);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_32);

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_32, 2, tmp_tuple_element_3);
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes);
        }

        if (tmp_mvar_value_12 == NULL) {
            Py_DECREF(tmp_assign_source_32);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20490 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_12;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_SHA384);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_32);

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_32, 3, tmp_tuple_element_3);
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_hashes);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes);
        }

        if (tmp_mvar_value_13 == NULL) {
            Py_DECREF(tmp_assign_source_32);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20490 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_13;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_SHA512);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_32);

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_32, 4, tmp_tuple_element_3);
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__ALLOWED_HASHES, tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_1__verify_algorithm();



        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__verify_algorithm, tmp_assign_source_33);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_14;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_Enum);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Enum);
        }

        if (tmp_mvar_value_14 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 34390 ], 26, 0);
            exception_tb = NULL;

            exception_lineno = 57;

            goto try_except_handler_12;
        }

        tmp_tuple_element_4 = tmp_mvar_value_14;
        tmp_assign_source_34 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_assign_source_34, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_cryptography$x509$ocsp_57 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_57, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_int_0;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_57, const_str_plain_GOOD, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_int_pos_1;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_57, const_str_plain_REVOKED, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_int_pos_2;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_57, const_str_plain_UNKNOWN, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_35 = locals_cryptography$x509$ocsp_57;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_13;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_cryptography$x509$ocsp_57);
        locals_cryptography$x509$ocsp_57 = NULL;
        goto outline_result_6;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        outline_result_6:;
        assert(tmp_class_creation_3__class_dict == NULL);
        tmp_class_creation_3__class_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
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


            exception_lineno = 57;

            goto try_except_handler_12;
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
        tmp_assign_source_36 = DICT_GET_ITEM(tmp_dict_name_6, tmp_key_name_6);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_12;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_subscribed_name_3 = tmp_class_creation_3__bases;
            tmp_subscript_name_3 = const_int_0;
            tmp_assign_source_37 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_3, tmp_subscript_name_3, 0);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto try_except_handler_12;
            }
            assert(tmp_select_metaclass_3__base == NULL);
            tmp_select_metaclass_3__base = tmp_assign_source_37;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_8;
            CHECK_OBJECT(tmp_select_metaclass_3__base);
            tmp_source_name_8 = tmp_select_metaclass_3__base;
            tmp_assign_source_36 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_8);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto try_except_handler_15;
            }
            goto try_return_handler_14;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_3;
            Py_DECREF(exception_keeper_type_7);
            Py_XDECREF(exception_keeper_value_7);
            Py_XDECREF(exception_keeper_tb_7);
            CHECK_OBJECT(tmp_select_metaclass_3__base);
            tmp_type_arg_3 = tmp_select_metaclass_3__base;
            tmp_assign_source_36 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_assign_source_36 == NULL));
            goto try_return_handler_14;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_3__base);
        Py_DECREF(tmp_select_metaclass_3__base);
        tmp_select_metaclass_3__base = NULL;

        goto outline_result_7;
        // End of try:
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_3__base);
        Py_DECREF(tmp_select_metaclass_3__base);
        tmp_select_metaclass_3__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        outline_result_7:;
        condexpr_end_3:;
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_called_name_3 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_7 = const_str_plain_OCSPCertStatus;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_args_element_name_8 = tmp_class_creation_3__bases;
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_args_element_name_9 = tmp_class_creation_3__class_dict;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_3__class == NULL);
        tmp_class_creation_3__class = tmp_assign_source_38;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(tmp_class_creation_3__class);
        tmp_assign_source_39 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPCertStatus, tmp_assign_source_39);
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

    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_dict_seq_2;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_mvar_value_15;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPCertStatus);

            if (unlikely(tmp_mvar_value_15 == NULL)) {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_OCSPCertStatus);
            }

            if (tmp_mvar_value_15 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28998 ], 36, 0);
                exception_tb = NULL;

                exception_lineno = 63;

                goto frame_exception_exit_1;
            }

            tmp_iter_arg_2 = tmp_mvar_value_15;
            tmp_assign_source_41 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_2__$0 == NULL);
            tmp_genexpr_2__$0 = tmp_assign_source_41;
        }
        // Tried code:
        tmp_dict_seq_2 = cryptography$x509$ocsp$$$genexpr_2_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_dict_seq_2)->m_closure[0] = PyCell_NEW0(tmp_genexpr_2__$0);


        goto try_return_handler_16;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT((PyObject *)tmp_genexpr_2__$0);
        Py_DECREF(tmp_genexpr_2__$0);
        tmp_genexpr_2__$0 = NULL;

        goto outline_result_8;
        // End of try:
        CHECK_OBJECT((PyObject *)tmp_genexpr_2__$0);
        Py_DECREF(tmp_genexpr_2__$0);
        tmp_genexpr_2__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        outline_result_8:;
        tmp_assign_source_40 = TO_DICT(tmp_dict_seq_2, NULL);
        Py_DECREF(tmp_dict_seq_2);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__CERT_STATUS_TO_ENUM, tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_2_load_der_ocsp_request();



        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_load_der_ocsp_request, tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_3_load_der_ocsp_response();



        UPDATE_STRING_DICT1(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_load_der_ocsp_response, tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_5;
            tmp_tuple_element_5 = Py_None;
            tmp_defaults_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = PyList_New(0);
            PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_5);
            tmp_assign_source_45 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_4___init__(tmp_defaults_1);



            assert(tmp_locals_cryptography$x509$ocsp_76_key___init__ == NULL);
            tmp_locals_cryptography$x509$ocsp_76_key___init__ = tmp_assign_source_45;
        }
        {
            PyObject *tmp_assign_source_46;
            tmp_assign_source_46 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_5_add_certificate();



            assert(tmp_locals_cryptography$x509$ocsp_76_key_add_certificate == NULL);
            tmp_locals_cryptography$x509$ocsp_76_key_add_certificate = tmp_assign_source_46;
        }
        {
            PyObject *tmp_assign_source_47;
            tmp_assign_source_47 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_6_add_extension();



            assert(tmp_locals_cryptography$x509$ocsp_76_key_add_extension == NULL);
            tmp_locals_cryptography$x509$ocsp_76_key_add_extension = tmp_assign_source_47;
        }
        {
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_7_build();



            assert(tmp_locals_cryptography$x509$ocsp_76_key_build == NULL);
            tmp_locals_cryptography$x509$ocsp_76_key_build = tmp_assign_source_48;
        }
        // Tried code:
        {
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
            tmp_dict_value_6 = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
            tmp_dict_key_6 = const_str_plain___module__;
            tmp_assign_source_44 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem(tmp_assign_source_44, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_cryptography$x509$ocsp_76_key___init__);
            tmp_dict_value_7 = tmp_locals_cryptography$x509$ocsp_76_key___init__;
            tmp_dict_key_7 = const_str_plain___init__;
            tmp_res = PyDict_SetItem(tmp_assign_source_44, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_cryptography$x509$ocsp_76_key_add_certificate);
            tmp_dict_value_8 = tmp_locals_cryptography$x509$ocsp_76_key_add_certificate;
            tmp_dict_key_8 = const_str_plain_add_certificate;
            tmp_res = PyDict_SetItem(tmp_assign_source_44, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_cryptography$x509$ocsp_76_key_add_extension);
            tmp_dict_value_9 = tmp_locals_cryptography$x509$ocsp_76_key_add_extension;
            tmp_dict_key_9 = const_str_plain_add_extension;
            tmp_res = PyDict_SetItem(tmp_assign_source_44, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_cryptography$x509$ocsp_76_key_build);
            tmp_dict_value_10 = tmp_locals_cryptography$x509$ocsp_76_key_build;
            tmp_dict_key_10 = const_str_plain_build;
            tmp_res = PyDict_SetItem(tmp_assign_source_44, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            goto try_return_handler_17;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT((PyObject *)tmp_locals_cryptography$x509$ocsp_76_key___init__);
        Py_DECREF(tmp_locals_cryptography$x509$ocsp_76_key___init__);
        tmp_locals_cryptography$x509$ocsp_76_key___init__ = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_cryptography$x509$ocsp_76_key_add_certificate);
        Py_DECREF(tmp_locals_cryptography$x509$ocsp_76_key_add_certificate);
        tmp_locals_cryptography$x509$ocsp_76_key_add_certificate = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_cryptography$x509$ocsp_76_key_add_extension);
        Py_DECREF(tmp_locals_cryptography$x509$ocsp_76_key_add_extension);
        tmp_locals_cryptography$x509$ocsp_76_key_add_extension = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_cryptography$x509$ocsp_76_key_build);
        Py_DECREF(tmp_locals_cryptography$x509$ocsp_76_key_build);
        tmp_locals_cryptography$x509$ocsp_76_key_build = NULL;

        goto outline_result_9;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        outline_result_9:;
        assert(tmp_class_creation_4__class_dict == NULL);
        tmp_class_creation_4__class_dict = tmp_assign_source_44;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
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


            exception_lineno = 76;

            goto try_except_handler_18;
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
        tmp_assign_source_49 = DICT_GET_ITEM(tmp_dict_name_8, tmp_key_name_8);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_18;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_assign_source_49 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_49);
        condexpr_end_4:;
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_called_name_4 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_10 = const_str_plain_OCSPRequestBuilder;
        tmp_args_element_name_11 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_4__class_dict);
        tmp_args_element_name_12 = tmp_class_creation_4__class_dict;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_4__class == NULL);
        tmp_class_creation_4__class = tmp_assign_source_50;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_class_creation_4__class_dict);
    Py_DECREF(tmp_class_creation_4__class_dict);
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
    try_end_6:;
    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_class_creation_4__class);
        tmp_assign_source_51 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPRequestBuilder, tmp_assign_source_51);
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

    {
        PyObject *tmp_assign_source_52;
        {
            PyObject *tmp_assign_source_53;
            tmp_assign_source_53 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_8___init__();



            assert(tmp_locals_cryptography$x509$ocsp_113_key___init__ == NULL);
            tmp_locals_cryptography$x509$ocsp_113_key___init__ = tmp_assign_source_53;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_dict_value_11 = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
            tmp_dict_key_11 = const_str_plain___module__;
            tmp_assign_source_52 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_cryptography$x509$ocsp_113_key___init__);
            tmp_dict_value_12 = tmp_locals_cryptography$x509$ocsp_113_key___init__;
            tmp_dict_key_12 = const_str_plain___init__;
            tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            goto try_return_handler_19;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT((PyObject *)tmp_locals_cryptography$x509$ocsp_113_key___init__);
        Py_DECREF(tmp_locals_cryptography$x509$ocsp_113_key___init__);
        tmp_locals_cryptography$x509$ocsp_113_key___init__ = NULL;

        goto outline_result_10;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        outline_result_10:;
        assert(tmp_class_creation_5__class_dict == NULL);
        tmp_class_creation_5__class_dict = tmp_assign_source_52;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
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


            exception_lineno = 113;

            goto try_except_handler_20;
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
        tmp_assign_source_54 = DICT_GET_ITEM(tmp_dict_name_10, tmp_key_name_10);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_20;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_assign_source_54 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_54);
        condexpr_end_5:;
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_called_name_5 = tmp_class_creation_5__metaclass;
        tmp_args_element_name_13 = const_str_plain__SingleResponse;
        tmp_args_element_name_14 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_5__class_dict);
        tmp_args_element_name_15 = tmp_class_creation_5__class_dict;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15};
            tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_5, call_args);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_5__class == NULL);
        tmp_class_creation_5__class = tmp_assign_source_55;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_class_creation_5__class_dict);
    Py_DECREF(tmp_class_creation_5__class_dict);
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_class_creation_5__class);
        tmp_assign_source_56 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain__SingleResponse, tmp_assign_source_56);
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
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_cryptography$x509$ocsp_175 = tmp_set_locals_4;
        }
        tmp_dictset_value = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_175, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_6;
            tmp_tuple_element_6 = Py_None;
            tmp_defaults_2 = PyTuple_New(4);
            Py_INCREF(tmp_tuple_element_6);
            PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = Py_None;
            Py_INCREF(tmp_tuple_element_6);
            PyTuple_SET_ITEM(tmp_defaults_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = Py_None;
            Py_INCREF(tmp_tuple_element_6);
            PyTuple_SET_ITEM(tmp_defaults_2, 2, tmp_tuple_element_6);
            tmp_tuple_element_6 = PyList_New(0);
            PyTuple_SET_ITEM(tmp_defaults_2, 3, tmp_tuple_element_6);
            tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_9___init__(tmp_defaults_2);



            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_175, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_10_add_response();



        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_175, const_str_plain_add_response, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_11_responder_id();



        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_175, const_str_plain_responder_id, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_12_certificates();



        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_175, const_str_plain_certificates, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_13_add_extension();



        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_175, const_str_plain_add_extension, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_14_sign();



        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_175, const_str_plain_sign, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_790749f48b7fd2c49b434e0621a87806_2, codeobj_790749f48b7fd2c49b434e0621a87806, module_cryptography$x509$ocsp, 0);
        frame_790749f48b7fd2c49b434e0621a87806_2 = cache_frame_790749f48b7fd2c49b434e0621a87806_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_790749f48b7fd2c49b434e0621a87806_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_790749f48b7fd2c49b434e0621a87806_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_classmethod_arg_1;
            tmp_classmethod_arg_1 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_15_build_unsuccessful();



            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_175, const_str_plain_build_unsuccessful, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_790749f48b7fd2c49b434e0621a87806_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_790749f48b7fd2c49b434e0621a87806_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_790749f48b7fd2c49b434e0621a87806_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_790749f48b7fd2c49b434e0621a87806_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_790749f48b7fd2c49b434e0621a87806_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_790749f48b7fd2c49b434e0621a87806_2,
            type_description_2
        );


        // Release cached frame.
        if (frame_790749f48b7fd2c49b434e0621a87806_2 == cache_frame_790749f48b7fd2c49b434e0621a87806_2) {
            Py_DECREF(frame_790749f48b7fd2c49b434e0621a87806_2);
        }
        cache_frame_790749f48b7fd2c49b434e0621a87806_2 = NULL;

        assertFrameObject(frame_790749f48b7fd2c49b434e0621a87806_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_22;
        skip_nested_handling_1:;
        tmp_assign_source_57 = locals_cryptography$x509$ocsp_175;
        Py_INCREF(tmp_assign_source_57);
        goto try_return_handler_22;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_cryptography$x509$ocsp_175);
        locals_cryptography$x509$ocsp_175 = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$x509$ocsp_175);
        locals_cryptography$x509$ocsp_175 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        outline_exception_1:;
        exception_lineno = 175;
        goto try_except_handler_21;
        outline_result_11:;
        assert(tmp_class_creation_6__class_dict == NULL);
        tmp_class_creation_6__class_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
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


            exception_lineno = 175;

            goto try_except_handler_21;
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
        tmp_assign_source_58 = DICT_GET_ITEM(tmp_dict_name_12, tmp_key_name_12);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_21;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_assign_source_58 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_58);
        condexpr_end_6:;
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_called_name_6 = tmp_class_creation_6__metaclass;
        tmp_args_element_name_16 = const_str_plain_OCSPResponseBuilder;
        tmp_args_element_name_17 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_6__class_dict);
        tmp_args_element_name_18 = tmp_class_creation_6__class_dict;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = {tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18};
            tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_6, call_args);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_6__class == NULL);
        tmp_class_creation_6__class = tmp_assign_source_59;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__class_dict);
    tmp_class_creation_6__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT(tmp_class_creation_6__class);
        tmp_assign_source_60 = tmp_class_creation_6__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponseBuilder, tmp_assign_source_60);
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
        PyObject *tmp_assign_source_61;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_cryptography$x509$ocsp_265 = tmp_set_locals_5;
        }
        tmp_dictset_value = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_265, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_d88b496a17da499cffc0d944abefb2a6_3, codeobj_d88b496a17da499cffc0d944abefb2a6, module_cryptography$x509$ocsp, 0);
        frame_d88b496a17da499cffc0d944abefb2a6_3 = cache_frame_d88b496a17da499cffc0d944abefb2a6_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d88b496a17da499cffc0d944abefb2a6_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d88b496a17da499cffc0d944abefb2a6_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_element_name_19;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_16 == NULL)) {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_16 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 266;

                goto frame_exception_exit_3;
            }

            tmp_called_instance_6 = tmp_mvar_value_16;
            tmp_args_element_name_19 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_16_issuer_key_hash();



            frame_d88b496a17da499cffc0d944abefb2a6_3->m_frame.f_lineno = 266;
            {
                PyObject *call_args[] = {tmp_args_element_name_19};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_265, const_str_plain_issuer_key_hash, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_args_element_name_20;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_17 == NULL)) {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_17 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 272;

                goto frame_exception_exit_3;
            }

            tmp_called_instance_7 = tmp_mvar_value_17;
            tmp_args_element_name_20 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_17_issuer_name_hash();



            frame_d88b496a17da499cffc0d944abefb2a6_3->m_frame.f_lineno = 272;
            {
                PyObject *call_args[] = {tmp_args_element_name_20};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_265, const_str_plain_issuer_name_hash, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_args_element_name_21;
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_18 == NULL)) {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_18 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 278;

                goto frame_exception_exit_3;
            }

            tmp_called_instance_8 = tmp_mvar_value_18;
            tmp_args_element_name_21 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_18_hash_algorithm();



            frame_d88b496a17da499cffc0d944abefb2a6_3->m_frame.f_lineno = 278;
            {
                PyObject *call_args[] = {tmp_args_element_name_21};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_265, const_str_plain_hash_algorithm, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_args_element_name_22;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_19 == NULL)) {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_19 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 284;

                goto frame_exception_exit_3;
            }

            tmp_called_instance_9 = tmp_mvar_value_19;
            tmp_args_element_name_22 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_19_serial_number();



            frame_d88b496a17da499cffc0d944abefb2a6_3->m_frame.f_lineno = 284;
            {
                PyObject *call_args[] = {tmp_args_element_name_22};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_265, const_str_plain_serial_number, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_args_element_name_23;
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_20 == NULL)) {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_20 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 289;

                goto frame_exception_exit_3;
            }

            tmp_called_instance_10 = tmp_mvar_value_20;
            tmp_args_element_name_23 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_20_public_bytes();



            frame_d88b496a17da499cffc0d944abefb2a6_3->m_frame.f_lineno = 289;
            {
                PyObject *call_args[] = {tmp_args_element_name_23};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_265, const_str_plain_public_bytes, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_args_element_name_24;
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_21 == NULL)) {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_21 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 295;

                goto frame_exception_exit_3;
            }

            tmp_called_instance_11 = tmp_mvar_value_21;
            tmp_args_element_name_24 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_21_extensions();



            frame_d88b496a17da499cffc0d944abefb2a6_3->m_frame.f_lineno = 295;
            {
                PyObject *call_args[] = {tmp_args_element_name_24};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_265, const_str_plain_extensions, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;

                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d88b496a17da499cffc0d944abefb2a6_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d88b496a17da499cffc0d944abefb2a6_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d88b496a17da499cffc0d944abefb2a6_3, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_d88b496a17da499cffc0d944abefb2a6_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d88b496a17da499cffc0d944abefb2a6_3, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_d88b496a17da499cffc0d944abefb2a6_3,
            type_description_2
        );


        // Release cached frame.
        if (frame_d88b496a17da499cffc0d944abefb2a6_3 == cache_frame_d88b496a17da499cffc0d944abefb2a6_3) {
            Py_DECREF(frame_d88b496a17da499cffc0d944abefb2a6_3);
        }
        cache_frame_d88b496a17da499cffc0d944abefb2a6_3 = NULL;

        assertFrameObject(frame_d88b496a17da499cffc0d944abefb2a6_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_24;
        skip_nested_handling_2:;
        tmp_assign_source_61 = locals_cryptography$x509$ocsp_265;
        Py_INCREF(tmp_assign_source_61);
        goto try_return_handler_24;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_cryptography$x509$ocsp_265);
        locals_cryptography$x509$ocsp_265 = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$x509$ocsp_265);
        locals_cryptography$x509$ocsp_265 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        outline_exception_2:;
        exception_lineno = 265;
        goto try_except_handler_23;
        outline_result_12:;
        assert(tmp_class_creation_7__class_dict == NULL);
        tmp_class_creation_7__class_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
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


            exception_lineno = 265;

            goto try_except_handler_23;
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
        tmp_assign_source_62 = DICT_GET_ITEM(tmp_dict_name_14, tmp_key_name_14);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_23;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_assign_source_62 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_62);
        condexpr_end_7:;
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_called_name_7 = tmp_class_creation_7__metaclass;
        tmp_args_element_name_25 = const_str_plain_OCSPRequest;
        tmp_args_element_name_26 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_7__class_dict);
        tmp_args_element_name_27 = tmp_class_creation_7__class_dict;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = {tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27};
            tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_7, call_args);
        }

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_7__class == NULL);
        tmp_class_creation_7__class = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_29;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_22 == NULL)) {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_22 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 264;

            goto try_except_handler_23;
        }

        tmp_source_name_9 = tmp_mvar_value_22;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_add_metaclass);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_23;
        }
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_23 == NULL)) {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_23 == NULL) {
            Py_DECREF(tmp_called_name_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 264;

            goto try_except_handler_23;
        }

        tmp_source_name_10 = tmp_mvar_value_23;
        tmp_args_element_name_28 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_ABCMeta);
        if (tmp_args_element_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 264;

            goto try_except_handler_23;
        }
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 264;
        tmp_called_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_28);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_28);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_23;
        }
        CHECK_OBJECT(tmp_class_creation_7__class);
        tmp_args_element_name_29 = tmp_class_creation_7__class;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 264;
        tmp_assign_source_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_29);
        Py_DECREF(tmp_called_name_8);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_class_creation_7__class;
            assert(old != NULL);
            tmp_class_creation_7__class = tmp_assign_source_64;
            Py_DECREF(old);
        }

    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
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
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(tmp_class_creation_7__class);
        tmp_assign_source_65 = tmp_class_creation_7__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPRequest, tmp_assign_source_65);
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
        PyObject *tmp_assign_source_66;
        {
            PyObject *tmp_set_locals_6;
            tmp_set_locals_6 = PyDict_New();
            locals_cryptography$x509$ocsp_303 = tmp_set_locals_6;
        }
        tmp_dictset_value = const_str_digest_2086ceef6289883db9f020fcaa2ebe44;
        tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_4facc0402928495c6ad9efbb0fa26262_4, codeobj_4facc0402928495c6ad9efbb0fa26262, module_cryptography$x509$ocsp, 0);
        frame_4facc0402928495c6ad9efbb0fa26262_4 = cache_frame_4facc0402928495c6ad9efbb0fa26262_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_4facc0402928495c6ad9efbb0fa26262_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_4facc0402928495c6ad9efbb0fa26262_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_12;
            PyObject *tmp_mvar_value_24;
            PyObject *tmp_args_element_name_30;
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_24 == NULL)) {
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_24 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 304;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_12 = tmp_mvar_value_24;
            tmp_args_element_name_30 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_22_response_status();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 304;
            {
                PyObject *call_args[] = {tmp_args_element_name_30};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_response_status, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_13;
            PyObject *tmp_mvar_value_25;
            PyObject *tmp_args_element_name_31;
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_25 == NULL)) {
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_25 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 311;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_13 = tmp_mvar_value_25;
            tmp_args_element_name_31 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_23_signature_algorithm_oid();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 311;
            {
                PyObject *call_args[] = {tmp_args_element_name_31};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_13, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_signature_algorithm_oid, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_14;
            PyObject *tmp_mvar_value_26;
            PyObject *tmp_args_element_name_32;
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_26 == NULL)) {
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_26 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 317;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_14 = tmp_mvar_value_26;
            tmp_args_element_name_32 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_24_signature_hash_algorithm();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 317;
            {
                PyObject *call_args[] = {tmp_args_element_name_32};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_14, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_signature_hash_algorithm, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_15;
            PyObject *tmp_mvar_value_27;
            PyObject *tmp_args_element_name_33;
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_27 == NULL)) {
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_27 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 323;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_15 = tmp_mvar_value_27;
            tmp_args_element_name_33 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_25_signature();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 323;
            {
                PyObject *call_args[] = {tmp_args_element_name_33};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_15, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_signature, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_16;
            PyObject *tmp_mvar_value_28;
            PyObject *tmp_args_element_name_34;
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_28 == NULL)) {
                tmp_mvar_value_28 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_28 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 329;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_16 = tmp_mvar_value_28;
            tmp_args_element_name_34 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_26_tbs_response_bytes();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 329;
            {
                PyObject *call_args[] = {tmp_args_element_name_34};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_16, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_tbs_response_bytes, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_17;
            PyObject *tmp_mvar_value_29;
            PyObject *tmp_args_element_name_35;
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_29 == NULL)) {
                tmp_mvar_value_29 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_29 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 335;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_17 = tmp_mvar_value_29;
            tmp_args_element_name_35 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_27_certificates();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 335;
            {
                PyObject *call_args[] = {tmp_args_element_name_35};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_17, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_certificates, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_18;
            PyObject *tmp_mvar_value_30;
            PyObject *tmp_args_element_name_36;
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_30 == NULL)) {
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_30 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 343;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_18 = tmp_mvar_value_30;
            tmp_args_element_name_36 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_28_responder_key_hash();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 343;
            {
                PyObject *call_args[] = {tmp_args_element_name_36};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_18, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_responder_key_hash, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_19;
            PyObject *tmp_mvar_value_31;
            PyObject *tmp_args_element_name_37;
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_31 == NULL)) {
                tmp_mvar_value_31 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_31 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 349;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_19 = tmp_mvar_value_31;
            tmp_args_element_name_37 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_29_responder_name();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 349;
            {
                PyObject *call_args[] = {tmp_args_element_name_37};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_19, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_responder_name, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_20;
            PyObject *tmp_mvar_value_32;
            PyObject *tmp_args_element_name_38;
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_32 == NULL)) {
                tmp_mvar_value_32 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_32 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 355;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_20 = tmp_mvar_value_32;
            tmp_args_element_name_38 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_30_produced_at();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 355;
            {
                PyObject *call_args[] = {tmp_args_element_name_38};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_20, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_produced_at, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_21;
            PyObject *tmp_mvar_value_33;
            PyObject *tmp_args_element_name_39;
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_33 == NULL)) {
                tmp_mvar_value_33 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_33 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 361;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_21 = tmp_mvar_value_33;
            tmp_args_element_name_39 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_31_certificate_status();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 361;
            {
                PyObject *call_args[] = {tmp_args_element_name_39};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_21, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_certificate_status, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_22;
            PyObject *tmp_mvar_value_34;
            PyObject *tmp_args_element_name_40;
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_34 == NULL)) {
                tmp_mvar_value_34 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_34 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 367;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_22 = tmp_mvar_value_34;
            tmp_args_element_name_40 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_32_revocation_time();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 367;
            {
                PyObject *call_args[] = {tmp_args_element_name_40};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_22, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_revocation_time, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_23;
            PyObject *tmp_mvar_value_35;
            PyObject *tmp_args_element_name_41;
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_35 == NULL)) {
                tmp_mvar_value_35 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_35 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 374;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_23 = tmp_mvar_value_35;
            tmp_args_element_name_41 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_33_revocation_reason();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 374;
            {
                PyObject *call_args[] = {tmp_args_element_name_41};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_23, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_revocation_reason, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_24;
            PyObject *tmp_mvar_value_36;
            PyObject *tmp_args_element_name_42;
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_36 == NULL)) {
                tmp_mvar_value_36 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_36 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 381;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_24 = tmp_mvar_value_36;
            tmp_args_element_name_42 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_34_this_update();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 381;
            {
                PyObject *call_args[] = {tmp_args_element_name_42};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_24, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_this_update, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_25;
            PyObject *tmp_mvar_value_37;
            PyObject *tmp_args_element_name_43;
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_37 == NULL)) {
                tmp_mvar_value_37 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_37 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 388;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_25 = tmp_mvar_value_37;
            tmp_args_element_name_43 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_35_next_update();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 388;
            {
                PyObject *call_args[] = {tmp_args_element_name_43};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_25, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_next_update, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 388;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_26;
            PyObject *tmp_mvar_value_38;
            PyObject *tmp_args_element_name_44;
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_38 == NULL)) {
                tmp_mvar_value_38 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_38 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 394;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_26 = tmp_mvar_value_38;
            tmp_args_element_name_44 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_36_issuer_key_hash();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 394;
            {
                PyObject *call_args[] = {tmp_args_element_name_44};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_26, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_issuer_key_hash, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_27;
            PyObject *tmp_mvar_value_39;
            PyObject *tmp_args_element_name_45;
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_39 == NULL)) {
                tmp_mvar_value_39 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_39 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 400;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_27 = tmp_mvar_value_39;
            tmp_args_element_name_45 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_37_issuer_name_hash();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 400;
            {
                PyObject *call_args[] = {tmp_args_element_name_45};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_27, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 400;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_issuer_name_hash, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 400;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_28;
            PyObject *tmp_mvar_value_40;
            PyObject *tmp_args_element_name_46;
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_40 == NULL)) {
                tmp_mvar_value_40 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_40 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 406;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_28 = tmp_mvar_value_40;
            tmp_args_element_name_46 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_38_hash_algorithm();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 406;
            {
                PyObject *call_args[] = {tmp_args_element_name_46};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_28, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_46);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 406;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_hash_algorithm, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 406;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_29;
            PyObject *tmp_mvar_value_41;
            PyObject *tmp_args_element_name_47;
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_41 == NULL)) {
                tmp_mvar_value_41 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_41 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 412;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_29 = tmp_mvar_value_41;
            tmp_args_element_name_47 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_39_serial_number();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 412;
            {
                PyObject *call_args[] = {tmp_args_element_name_47};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_29, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_serial_number, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;

                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_30;
            PyObject *tmp_mvar_value_42;
            PyObject *tmp_args_element_name_48;
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_42 == NULL)) {
                tmp_mvar_value_42 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_42 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 418;

                goto frame_exception_exit_4;
            }

            tmp_called_instance_30 = tmp_mvar_value_42;
            tmp_args_element_name_48 = MAKE_FUNCTION_cryptography$x509$ocsp$$$function_40_extensions();



            frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame.f_lineno = 418;
            {
                PyObject *call_args[] = {tmp_args_element_name_48};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_30, const_str_plain_abstractproperty, call_args);
            }

            Py_DECREF(tmp_args_element_name_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;

                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$x509$ocsp_303, const_str_plain_extensions, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;

                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_4facc0402928495c6ad9efbb0fa26262_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_4facc0402928495c6ad9efbb0fa26262_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4facc0402928495c6ad9efbb0fa26262_4, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_4facc0402928495c6ad9efbb0fa26262_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4facc0402928495c6ad9efbb0fa26262_4, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_4facc0402928495c6ad9efbb0fa26262_4,
            type_description_2
        );


        // Release cached frame.
        if (frame_4facc0402928495c6ad9efbb0fa26262_4 == cache_frame_4facc0402928495c6ad9efbb0fa26262_4) {
            Py_DECREF(frame_4facc0402928495c6ad9efbb0fa26262_4);
        }
        cache_frame_4facc0402928495c6ad9efbb0fa26262_4 = NULL;

        assertFrameObject(frame_4facc0402928495c6ad9efbb0fa26262_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_26;
        skip_nested_handling_3:;
        tmp_assign_source_66 = locals_cryptography$x509$ocsp_303;
        Py_INCREF(tmp_assign_source_66);
        goto try_return_handler_26;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_DECREF(locals_cryptography$x509$ocsp_303);
        locals_cryptography$x509$ocsp_303 = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$x509$ocsp_303);
        locals_cryptography$x509$ocsp_303 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$x509$ocsp);
        return NULL;
        outline_exception_3:;
        exception_lineno = 303;
        goto try_except_handler_25;
        outline_result_13:;
        assert(tmp_class_creation_8__class_dict == NULL);
        tmp_class_creation_8__class_dict = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
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


            exception_lineno = 303;

            goto try_except_handler_25;
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
        tmp_assign_source_67 = DICT_GET_ITEM(tmp_dict_name_16, tmp_key_name_16);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto try_except_handler_25;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_assign_source_67 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_67);
        condexpr_end_8:;
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_args_element_name_51;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_called_name_10 = tmp_class_creation_8__metaclass;
        tmp_args_element_name_49 = const_str_plain_OCSPResponse;
        tmp_args_element_name_50 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_8__class_dict);
        tmp_args_element_name_51 = tmp_class_creation_8__class_dict;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = {tmp_args_element_name_49, tmp_args_element_name_50, tmp_args_element_name_51};
            tmp_assign_source_68 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_10, call_args);
        }

        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__class == NULL);
        tmp_class_creation_8__class = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_name_11;
        PyObject *tmp_called_name_12;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_43;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_44;
        PyObject *tmp_args_element_name_53;
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_43 == NULL)) {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_43 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 302;

            goto try_except_handler_25;
        }

        tmp_source_name_11 = tmp_mvar_value_43;
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_add_metaclass);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_25;
        }
        tmp_mvar_value_44 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_44 == NULL)) {
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_44 == NULL) {
            Py_DECREF(tmp_called_name_12);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 302;

            goto try_except_handler_25;
        }

        tmp_source_name_12 = tmp_mvar_value_44;
        tmp_args_element_name_52 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_ABCMeta);
        if (tmp_args_element_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 302;

            goto try_except_handler_25;
        }
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 302;
        tmp_called_name_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_52);
        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_52);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_25;
        }
        CHECK_OBJECT(tmp_class_creation_8__class);
        tmp_args_element_name_53 = tmp_class_creation_8__class;
        frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame.f_lineno = 302;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_53);
        Py_DECREF(tmp_called_name_11);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto try_except_handler_25;
        }
        {
            PyObject *old = tmp_class_creation_8__class;
            assert(old != NULL);
            tmp_class_creation_8__class = tmp_assign_source_69;
            Py_DECREF(old);
        }

    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
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
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_033a20ad47d2eb6bef6e9d012ae4ab5f);
#endif
    popFrameStack();

    assertFrameObject(frame_033a20ad47d2eb6bef6e9d012ae4ab5f);

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_033a20ad47d2eb6bef6e9d012ae4ab5f);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_033a20ad47d2eb6bef6e9d012ae4ab5f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_033a20ad47d2eb6bef6e9d012ae4ab5f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_033a20ad47d2eb6bef6e9d012ae4ab5f, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;
    {
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(tmp_class_creation_8__class);
        tmp_assign_source_70 = tmp_class_creation_8__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$x509$ocsp, (Nuitka_StringObject *)const_str_plain_OCSPResponse, tmp_assign_source_70);
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


    return module_cryptography$x509$ocsp;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
