/* Generated code for Python module 'cryptography.x509'
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

/* The "_module_cryptography$x509" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$x509;
PyDictObject *moduledict_cryptography$x509;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_digest_7822abce90b4f23aa7a437cf95bbfec5;
extern PyObject *const_str_plain_InvalidVersion;
extern PyObject *const_str_plain_CRLDistributionPoints;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_PSEUDONYM;
extern PyObject *const_str_plain_FreshestCRL;
static PyObject *const_str_plain_OID_COUNTRY_NAME;
static PyObject *const_str_digest_7efc2d5ba0c39ffda7ce4cc81cee206e;
extern PyObject *const_str_plain_CertificatePoliciesOID;
static PyObject *const_tuple_c992ec5fe7bb072bb4084b191a56b771_tuple;
static PyObject *const_str_plain_OID_CRL_DISTRIBUTION_POINTS;
extern PyObject *const_str_plain_CertificateSigningRequest;
extern PyObject *const_str_plain__GENERAL_NAMES;
extern PyObject *const_str_plain_CRLReason;
static PyObject *const_str_plain_OID_RSA_WITH_SHA1;
extern PyObject *const_str_plain_ObjectIdentifier;
static PyObject *const_str_plain_OID_CERTIFICATE_ISSUER;
extern PyObject *const_str_plain_ExtendedKeyUsage;
extern PyObject *const_str_plain_RSA_WITH_SHA384;
extern PyObject *const_str_digest_97ac982b098bfd0facb64df38773c335;
extern PyObject *const_str_plain_DSA_WITH_SHA256;
static PyObject *const_list_9e62483b5b2b910a00afae8fdbbdd8fc_list;
static PyObject *const_str_plain_OID_SUBJECT_KEY_IDENTIFIER;
extern PyObject *const_str_plain_NAME_CONSTRAINTS;
extern PyObject *const_str_plain_OCSPNoCheck;
extern PyObject *const_str_plain_KEY_USAGE;
static PyObject *const_str_plain_OID_CRL_REASON;
extern PyObject *const_str_plain_RSA_WITH_MD5;
static PyObject *const_str_plain_OID_RSASSA_PSS;
static PyObject *const_str_plain_OID_GENERATION_QUALIFIER;
extern PyObject *const_str_plain_CA_ISSUERS;
static PyObject *const_str_plain_OID_AUTHORITY_INFORMATION_ACCESS;
extern PyObject *const_str_plain_CERTIFICATE_ISSUER;
extern PyObject *const_str_plain_CPS_QUALIFIER;
extern PyObject *const_str_plain_SURNAME;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_ORGANIZATIONAL_UNIT_NAME;
extern PyObject *const_str_plain_CertificateBuilder;
static PyObject *const_str_plain_OID_CERTIFICATE_POLICIES;
extern PyObject *const_str_plain_Extensions;
extern PyObject *const_str_plain_RevokedCertificateBuilder;
static PyObject *const_str_plain_OID_POLICY_CONSTRAINTS;
extern PyObject *const_str_plain_NameOID;
static PyObject *const_str_plain_OID_RSA_WITH_SHA512;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_ECDSA_WITH_SHA1;
static PyObject *const_str_plain_OID_TITLE;
static PyObject *const_str_plain_OID_OCSP;
extern PyObject *const_str_plain_ISSUER_ALTERNATIVE_NAME;
static PyObject *const_str_plain_OID_EXTENDED_KEY_USAGE;
extern PyObject *const_str_plain_BASIC_CONSTRAINTS;
static PyObject *const_str_plain_OID_NAME_CONSTRAINTS;
extern PyObject *const_str_plain_NameConstraints;
extern PyObject *const_str_plain_DOMAIN_COMPONENT;
static PyObject *const_str_plain_OID_FRESHEST_CRL;
extern PyObject *const_str_plain_DuplicateExtension;
static PyObject *const_str_plain_OID_DSA_WITH_SHA1;
extern PyObject *const_str_plain_DNSName;
extern PyObject *const_str_plain_UnsupportedGeneralNameType;
extern PyObject *const_str_plain_NUITKA_PACKAGE_cryptography;
extern PyObject *const_str_plain_BasicConstraints;
extern PyObject *const_str_plain_DirectoryName;
extern PyObject *const_str_plain_UniformResourceIdentifier;
extern PyObject *const_str_plain_CertificatePolicies;
extern PyObject *const_str_plain_SignatureAlgorithmOID;
extern PyObject *const_str_plain_SubjectAlternativeName;
extern PyObject *const_str_plain_load_der_x509_csr;
extern PyObject *const_str_plain_RSA_WITH_SHA224;
extern PyObject *const_str_plain_IssuerAlternativeName;
extern PyObject *const_str_plain_COMMON_NAME;
extern PyObject *const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86;
extern PyObject *const_str_plain_GeneralName;
extern PyObject *const_str_plain_CertificateSigningRequestBuilder;
extern PyObject *const_str_plain_AccessDescription;
extern PyObject *const_str_plain_NoticeReference;
static PyObject *const_str_plain_OID_PSEUDONYM;
extern PyObject *const_str_plain_ExtendedKeyUsageOID;
extern PyObject *const_str_plain_GIVEN_NAME;
extern PyObject *const_str_plain_IPAddress;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_CPS_USER_NOTICE;
extern PyObject *const_str_plain_Extension;
extern PyObject *const_str_plain_UnrecognizedExtension;
extern PyObject *const_str_plain_KeyUsage;
static PyObject *const_str_plain_OID_LOCALITY_NAME;
extern PyObject *const_str_plain_Certificate;
static PyObject *const_str_plain_OID_SURNAME;
extern PyObject *const_str_plain_CertificateRevocationList;
extern PyObject *const_str_digest_99d507f2ac89b982963447ed05345806;
static PyObject *const_str_plain_OID_TIME_STAMPING;
static PyObject *const_str_plain_OID_RSA_WITH_SHA384;
extern PyObject *const_str_plain_load_pem_x509_certificate;
static PyObject *const_str_plain_OID_DN_QUALIFIER;
static PyObject *const_str_plain_OID_KEY_USAGE;
extern PyObject *const_str_plain_CRL_REASON;
extern PyObject *const_str_plain_RelativeDistinguishedName;
static PyObject *const_tuple_b8789a7dea6d9440532c81d6d2cb3c71_tuple;
static PyObject *const_str_plain_OID_ANY_POLICY;
static PyObject *const_str_plain_OID_RSA_WITH_SHA224;
extern PyObject *const_str_plain_dirname;
static PyObject *const_str_plain_OID_RSA_WITH_SHA256;
extern PyObject *const_str_plain_DSA_WITH_SHA1;
extern PyObject *const_str_plain_CertificateIssuer;
static PyObject *const_str_plain_OID_INHIBIT_ANY_POLICY;
extern PyObject *const_str_plain_OtherName;
static PyObject *const_str_plain_OID_ORGANIZATION_NAME;
static PyObject *const_str_plain_OID_INVALIDITY_DATE;
extern PyObject *const_str_plain_CRLEntryExtensionOID;
extern PyObject *const_str_plain_load_der_x509_crl;
static PyObject *const_str_plain_OID_RSA_WITH_MD5;
extern PyObject *const_str_plain__SIG_OIDS_TO_HASH;
extern PyObject *const_str_plain_CRL_DISTRIBUTION_POINTS;
static PyObject *const_str_plain_OID_DSA_WITH_SHA256;
extern PyObject *const_str_plain_PolicyInformation;
extern PyObject *const_str_plain_STATE_OR_PROVINCE_NAME;
extern PyObject *const_str_plain_ORGANIZATION_NAME;
extern PyObject *const_str_plain_InhibitAnyPolicy;
extern PyObject *const_str_plain_Version;
extern PyObject *const_str_plain_TITLE;
static PyObject *const_str_plain_OID_CODE_SIGNING;
extern PyObject *const_str_plain_OCSPNonce;
extern PyObject *const_str_plain_ECDSA_WITH_SHA224;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_digest_becb7ddc5eba88bda421a9fc23a1539c;
static PyObject *const_str_plain_OID_AUTHORITY_KEY_IDENTIFIER;
extern PyObject *const_str_plain_OCSP_SIGNING;
static PyObject *const_tuple_c68e20a5591f5059c0231d123efb1167_tuple;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_SUBJECT_KEY_IDENTIFIER;
extern PyObject *const_str_plain_load_pem_x509_crl;
static PyObject *const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple;
extern PyObject *const_str_plain_RSA_WITH_SHA512;
static PyObject *const_str_plain_NUITKA_PACKAGE_cryptography_x509;
extern PyObject *const_str_plain_PolicyConstraints;
static PyObject *const_str_plain_OID_POLICY_MAPPINGS;
extern PyObject *const_str_plain_OCSP;
extern PyObject *const_str_plain_SUBJECT_ALTERNATIVE_NAME;
extern PyObject *const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
extern PyObject *const_str_plain_ECDSA_WITH_SHA512;
static PyObject *const_str_plain_OID_ECDSA_WITH_SHA512;
extern PyObject *const_str_plain_ExtensionNotFound;
extern PyObject *const_str_plain_IssuingDistributionPoint;
static PyObject *const_str_plain_OID_ECDSA_WITH_SHA1;
static PyObject *const_tuple_str_plain_certificate_transparency_tuple;
extern PyObject *const_str_plain_CertificateRevocationListBuilder;
extern PyObject *const_str_plain_DeltaCRLIndicator;
extern PyObject *const_str_plain_ReasonFlags;
static PyObject *const_tuple_d9ed34981547db7f37e23b8dd3d477dd_tuple;
extern PyObject *const_str_plain_TLSFeature;
static PyObject *const_str_plain_OID_SERIAL_NUMBER;
extern PyObject *const_str_plain_RegisteredID;
extern PyObject *const_str_plain_ANY_POLICY;
static PyObject *const_str_plain_OID_OCSP_SIGNING;
extern PyObject *const_str_plain_CLIENT_AUTH;
static PyObject *const_str_plain_OID_GIVEN_NAME;
static PyObject *const_str_plain_OID_SUBJECT_DIRECTORY_ATTRIBUTES;
extern PyObject *const_str_plain_SUBJECT_INFORMATION_ACCESS;
extern PyObject *const_str_plain_SUBJECT_DIRECTORY_ATTRIBUTES;
static PyObject *const_str_plain_OID_SERVER_AUTH;
extern PyObject *const_str_plain_CRLNumber;
extern PyObject *const_str_plain_DistributionPoint;
extern PyObject *const_str_plain_ECDSA_WITH_SHA384;
extern PyObject *const_str_plain_LOCALITY_NAME;
extern PyObject *const_str_plain_ExtensionOID;
extern PyObject *const_str_plain_load_pem_x509_csr;
static PyObject *const_str_digest_8af72734ca7b22207d68568312591ca9;
extern PyObject *const_str_plain_NameAttribute;
static PyObject *const_str_plain_OID_DOMAIN_COMPONENT;
static PyObject *const_str_plain_OID_EMAIL_PROTECTION;
extern PyObject *const_str_plain_EMAIL_PROTECTION;
extern PyObject *const_str_plain_GENERATION_QUALIFIER;
extern PyObject *const_str_plain_DSA_WITH_SHA224;
extern PyObject *const_str_plain_RevokedCertificate;
extern PyObject *const_str_plain_COUNTRY_NAME;
static PyObject *const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple;
extern PyObject *const_str_plain_AUTHORITY_INFORMATION_ACCESS;
static PyObject *const_str_plain_OID_ISSUER_ALTERNATIVE_NAME;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_POLICY_MAPPINGS;
extern PyObject *const_str_plain_GeneralNames;
extern PyObject *const_str_plain_AuthorityKeyIdentifier;
extern PyObject *const_str_plain_PrecertPoison;
extern PyObject *const_str_plain_INHIBIT_ANY_POLICY;
extern PyObject *const_str_plain_RSA_WITH_SHA1;
static PyObject *const_str_plain_OID_DSA_WITH_SHA224;
static PyObject *const_str_plain_OID_EMAIL_ADDRESS;
extern PyObject *const_str_plain_x509;
extern PyObject *const_str_plain_TLSFeatureType;
extern PyObject *const_str_plain_FRESHEST_CRL;
extern PyObject *const_str_plain_Name;
static PyObject *const_str_plain_OID_STATE_OR_PROVINCE_NAME;
extern PyObject *const_str_plain_OID_CPS_USER_NOTICE;
extern PyObject *const_str_plain_UserNotice;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_CERTIFICATE_POLICIES;
extern PyObject *const_str_plain_OID_CPS_QUALIFIER;
extern PyObject *const_str_plain_AuthorityInformationAccess;
static PyObject *const_str_plain_OID_ECDSA_WITH_SHA256;
extern PyObject *const_str_plain_INVALIDITY_DATE;
extern PyObject *const_str_plain_SERVER_AUTH;
extern PyObject *const_str_plain_AuthorityInformationAccessOID;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_EMAIL_ADDRESS;
static PyObject *const_str_plain_OID_SUBJECT_INFORMATION_ACCESS;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_InvalidityDate;
extern PyObject *const_str_plain_ECDSA_WITH_SHA256;
extern PyObject *const_tuple_495f0b9ca2f725dc9f357390583c7253_tuple;
extern PyObject *const_str_plain_random_serial_number;
extern PyObject *const_str_plain_RFC822Name;
static PyObject *const_str_plain_OID_ECDSA_WITH_SHA384;
extern PyObject *const_str_plain_SubjectKeyIdentifier;
extern PyObject *const_str_digest_957c81bc7a15c28c0c453fa3270dbc10;
extern PyObject *const_str_plain_SERIAL_NUMBER;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_RSASSA_PSS;
extern PyObject *const_str_plain_EXTENDED_KEY_USAGE;
static PyObject *const_str_plain_OID_OCSP_NO_CHECK;
extern PyObject *const_str_plain_AUTHORITY_KEY_IDENTIFIER;
static PyObject *const_str_plain_OID_CA_ISSUERS;
extern PyObject *const_str_plain_CODE_SIGNING;
extern PyObject *const_str_plain_DN_QUALIFIER;
static PyObject *const_str_plain_OID_CLIENT_AUTH;
extern PyObject *const_str_plain_RSA_WITH_SHA256;
static PyObject *const_str_plain_OID_BASIC_CONSTRAINTS;
extern PyObject *const_str_plain_TIME_STAMPING;
static PyObject *const_str_plain_OID_COMMON_NAME;
static PyObject *const_str_plain_OID_SUBJECT_ALTERNATIVE_NAME;
extern PyObject *const_str_plain_load_der_x509_certificate;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_OID_ORGANIZATIONAL_UNIT_NAME;
static PyObject *const_str_plain_OID_ECDSA_WITH_SHA224;
extern PyObject *const_str_plain_OCSP_NO_CHECK;
extern PyObject *const_str_plain_ExtensionType;
extern PyObject *const_str_plain_POLICY_CONSTRAINTS;
extern PyObject *const_str_plain_certificate_transparency;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_OID_COUNTRY_NAME = UNSTREAM_STRING(&constant_bin[ 613121 ], 16, 1);
    const_str_digest_7efc2d5ba0c39ffda7ce4cc81cee206e = UNSTREAM_STRING(&constant_bin[ 613137 ], 26, 0);
    const_tuple_c992ec5fe7bb072bb4084b191a56b771_tuple = PyTuple_New(10);
    PyTuple_SET_ITEM(const_tuple_c992ec5fe7bb072bb4084b191a56b771_tuple, 0, const_str_plain_DNSName); Py_INCREF(const_str_plain_DNSName);
    PyTuple_SET_ITEM(const_tuple_c992ec5fe7bb072bb4084b191a56b771_tuple, 1, const_str_plain_DirectoryName); Py_INCREF(const_str_plain_DirectoryName);
    PyTuple_SET_ITEM(const_tuple_c992ec5fe7bb072bb4084b191a56b771_tuple, 2, const_str_plain_GeneralName); Py_INCREF(const_str_plain_GeneralName);
    PyTuple_SET_ITEM(const_tuple_c992ec5fe7bb072bb4084b191a56b771_tuple, 3, const_str_plain_IPAddress); Py_INCREF(const_str_plain_IPAddress);
    PyTuple_SET_ITEM(const_tuple_c992ec5fe7bb072bb4084b191a56b771_tuple, 4, const_str_plain_OtherName); Py_INCREF(const_str_plain_OtherName);
    PyTuple_SET_ITEM(const_tuple_c992ec5fe7bb072bb4084b191a56b771_tuple, 5, const_str_plain_RFC822Name); Py_INCREF(const_str_plain_RFC822Name);
    PyTuple_SET_ITEM(const_tuple_c992ec5fe7bb072bb4084b191a56b771_tuple, 6, const_str_plain_RegisteredID); Py_INCREF(const_str_plain_RegisteredID);
    PyTuple_SET_ITEM(const_tuple_c992ec5fe7bb072bb4084b191a56b771_tuple, 7, const_str_plain_UniformResourceIdentifier); Py_INCREF(const_str_plain_UniformResourceIdentifier);
    PyTuple_SET_ITEM(const_tuple_c992ec5fe7bb072bb4084b191a56b771_tuple, 8, const_str_plain_UnsupportedGeneralNameType); Py_INCREF(const_str_plain_UnsupportedGeneralNameType);
    PyTuple_SET_ITEM(const_tuple_c992ec5fe7bb072bb4084b191a56b771_tuple, 9, const_str_plain__GENERAL_NAMES); Py_INCREF(const_str_plain__GENERAL_NAMES);
    const_str_plain_OID_CRL_DISTRIBUTION_POINTS = UNSTREAM_STRING(&constant_bin[ 613163 ], 27, 1);
    const_str_plain_OID_RSA_WITH_SHA1 = UNSTREAM_STRING(&constant_bin[ 613190 ], 17, 1);
    const_str_plain_OID_CERTIFICATE_ISSUER = UNSTREAM_STRING(&constant_bin[ 613207 ], 22, 1);
    const_list_9e62483b5b2b910a00afae8fdbbdd8fc_list = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 613229 ], 1602);
    const_str_plain_OID_SUBJECT_KEY_IDENTIFIER = UNSTREAM_STRING(&constant_bin[ 614831 ], 26, 1);
    const_str_plain_OID_CRL_REASON = UNSTREAM_STRING(&constant_bin[ 614857 ], 14, 1);
    const_str_plain_OID_RSASSA_PSS = UNSTREAM_STRING(&constant_bin[ 614871 ], 14, 1);
    const_str_plain_OID_GENERATION_QUALIFIER = UNSTREAM_STRING(&constant_bin[ 614885 ], 24, 1);
    const_str_plain_OID_AUTHORITY_INFORMATION_ACCESS = UNSTREAM_STRING(&constant_bin[ 614909 ], 32, 1);
    const_str_plain_OID_CERTIFICATE_POLICIES = UNSTREAM_STRING(&constant_bin[ 614941 ], 24, 1);
    const_str_plain_OID_POLICY_CONSTRAINTS = UNSTREAM_STRING(&constant_bin[ 614965 ], 22, 1);
    const_str_plain_OID_RSA_WITH_SHA512 = UNSTREAM_STRING(&constant_bin[ 614987 ], 19, 1);
    const_str_plain_OID_TITLE = UNSTREAM_STRING(&constant_bin[ 615006 ], 9, 1);
    const_str_plain_OID_OCSP = UNSTREAM_STRING(&constant_bin[ 614623 ], 8, 1);
    const_str_plain_OID_EXTENDED_KEY_USAGE = UNSTREAM_STRING(&constant_bin[ 615015 ], 22, 1);
    const_str_plain_OID_NAME_CONSTRAINTS = UNSTREAM_STRING(&constant_bin[ 615037 ], 20, 1);
    const_str_plain_OID_FRESHEST_CRL = UNSTREAM_STRING(&constant_bin[ 615057 ], 16, 1);
    const_str_plain_OID_DSA_WITH_SHA1 = UNSTREAM_STRING(&constant_bin[ 615073 ], 17, 1);
    const_str_plain_OID_PSEUDONYM = UNSTREAM_STRING(&constant_bin[ 615090 ], 13, 1);
    const_str_plain_OID_LOCALITY_NAME = UNSTREAM_STRING(&constant_bin[ 615103 ], 17, 1);
    const_str_plain_OID_SURNAME = UNSTREAM_STRING(&constant_bin[ 615120 ], 11, 1);
    const_str_plain_OID_TIME_STAMPING = UNSTREAM_STRING(&constant_bin[ 615131 ], 17, 1);
    const_str_plain_OID_RSA_WITH_SHA384 = UNSTREAM_STRING(&constant_bin[ 615148 ], 19, 1);
    const_str_plain_OID_DN_QUALIFIER = UNSTREAM_STRING(&constant_bin[ 615167 ], 16, 1);
    const_str_plain_OID_KEY_USAGE = UNSTREAM_STRING(&constant_bin[ 615183 ], 13, 1);
    const_tuple_b8789a7dea6d9440532c81d6d2cb3c71_tuple = PyTuple_New(2);
    const_str_plain_NUITKA_PACKAGE_cryptography_x509 = UNSTREAM_STRING(&constant_bin[ 615196 ], 32, 1);
    PyTuple_SET_ITEM(const_tuple_b8789a7dea6d9440532c81d6d2cb3c71_tuple, 0, const_str_plain_NUITKA_PACKAGE_cryptography_x509); Py_INCREF(const_str_plain_NUITKA_PACKAGE_cryptography_x509);
    PyTuple_SET_ITEM(const_tuple_b8789a7dea6d9440532c81d6d2cb3c71_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242); Py_INCREF(const_str_digest_5bfaf90dbd407b4fc29090c8f6415242);
    const_str_plain_OID_ANY_POLICY = UNSTREAM_STRING(&constant_bin[ 615228 ], 14, 1);
    const_str_plain_OID_RSA_WITH_SHA224 = UNSTREAM_STRING(&constant_bin[ 615242 ], 19, 1);
    const_str_plain_OID_RSA_WITH_SHA256 = UNSTREAM_STRING(&constant_bin[ 615261 ], 19, 1);
    const_str_plain_OID_INHIBIT_ANY_POLICY = UNSTREAM_STRING(&constant_bin[ 615280 ], 22, 1);
    const_str_plain_OID_ORGANIZATION_NAME = UNSTREAM_STRING(&constant_bin[ 615302 ], 21, 1);
    const_str_plain_OID_INVALIDITY_DATE = UNSTREAM_STRING(&constant_bin[ 615323 ], 19, 1);
    const_str_plain_OID_RSA_WITH_MD5 = UNSTREAM_STRING(&constant_bin[ 615342 ], 16, 1);
    const_str_plain_OID_DSA_WITH_SHA256 = UNSTREAM_STRING(&constant_bin[ 615358 ], 19, 1);
    const_str_plain_OID_CODE_SIGNING = UNSTREAM_STRING(&constant_bin[ 615377 ], 16, 1);
    const_str_plain_OID_AUTHORITY_KEY_IDENTIFIER = UNSTREAM_STRING(&constant_bin[ 615393 ], 28, 1);
    const_tuple_c68e20a5591f5059c0231d123efb1167_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_c68e20a5591f5059c0231d123efb1167_tuple, 0, const_str_plain_AuthorityInformationAccessOID); Py_INCREF(const_str_plain_AuthorityInformationAccessOID);
    PyTuple_SET_ITEM(const_tuple_c68e20a5591f5059c0231d123efb1167_tuple, 1, const_str_plain_CRLEntryExtensionOID); Py_INCREF(const_str_plain_CRLEntryExtensionOID);
    PyTuple_SET_ITEM(const_tuple_c68e20a5591f5059c0231d123efb1167_tuple, 2, const_str_plain_CertificatePoliciesOID); Py_INCREF(const_str_plain_CertificatePoliciesOID);
    PyTuple_SET_ITEM(const_tuple_c68e20a5591f5059c0231d123efb1167_tuple, 3, const_str_plain_ExtendedKeyUsageOID); Py_INCREF(const_str_plain_ExtendedKeyUsageOID);
    PyTuple_SET_ITEM(const_tuple_c68e20a5591f5059c0231d123efb1167_tuple, 4, const_str_plain_ExtensionOID); Py_INCREF(const_str_plain_ExtensionOID);
    PyTuple_SET_ITEM(const_tuple_c68e20a5591f5059c0231d123efb1167_tuple, 5, const_str_plain_NameOID); Py_INCREF(const_str_plain_NameOID);
    PyTuple_SET_ITEM(const_tuple_c68e20a5591f5059c0231d123efb1167_tuple, 6, const_str_plain_ObjectIdentifier); Py_INCREF(const_str_plain_ObjectIdentifier);
    PyTuple_SET_ITEM(const_tuple_c68e20a5591f5059c0231d123efb1167_tuple, 7, const_str_plain_SignatureAlgorithmOID); Py_INCREF(const_str_plain_SignatureAlgorithmOID);
    PyTuple_SET_ITEM(const_tuple_c68e20a5591f5059c0231d123efb1167_tuple, 8, const_str_plain__SIG_OIDS_TO_HASH); Py_INCREF(const_str_plain__SIG_OIDS_TO_HASH);
    const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple, 0, const_str_plain_Name); Py_INCREF(const_str_plain_Name);
    PyTuple_SET_ITEM(const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple, 1, const_str_plain_NameAttribute); Py_INCREF(const_str_plain_NameAttribute);
    PyTuple_SET_ITEM(const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple, 2, const_str_plain_RelativeDistinguishedName); Py_INCREF(const_str_plain_RelativeDistinguishedName);
    const_str_plain_OID_POLICY_MAPPINGS = UNSTREAM_STRING(&constant_bin[ 615421 ], 19, 1);
    const_str_plain_OID_ECDSA_WITH_SHA512 = UNSTREAM_STRING(&constant_bin[ 615440 ], 21, 1);
    const_str_plain_OID_ECDSA_WITH_SHA1 = UNSTREAM_STRING(&constant_bin[ 615461 ], 19, 1);
    const_tuple_str_plain_certificate_transparency_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_certificate_transparency_tuple, 0, const_str_plain_certificate_transparency); Py_INCREF(const_str_plain_certificate_transparency);
    const_tuple_d9ed34981547db7f37e23b8dd3d477dd_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 615480 ], 825);
    const_str_plain_OID_SERIAL_NUMBER = UNSTREAM_STRING(&constant_bin[ 616305 ], 17, 1);
    const_str_plain_OID_OCSP_SIGNING = UNSTREAM_STRING(&constant_bin[ 616322 ], 16, 1);
    const_str_plain_OID_GIVEN_NAME = UNSTREAM_STRING(&constant_bin[ 616338 ], 14, 1);
    const_str_plain_OID_SUBJECT_DIRECTORY_ATTRIBUTES = UNSTREAM_STRING(&constant_bin[ 616352 ], 32, 1);
    const_str_plain_OID_SERVER_AUTH = UNSTREAM_STRING(&constant_bin[ 616384 ], 15, 1);
    const_str_digest_8af72734ca7b22207d68568312591ca9 = UNSTREAM_STRING(&constant_bin[ 616399 ], 29, 0);
    const_str_plain_OID_DOMAIN_COMPONENT = UNSTREAM_STRING(&constant_bin[ 616428 ], 20, 1);
    const_str_plain_OID_EMAIL_PROTECTION = UNSTREAM_STRING(&constant_bin[ 616448 ], 20, 1);
    const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple = PyTuple_New(17);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 0, const_str_plain_Certificate); Py_INCREF(const_str_plain_Certificate);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 1, const_str_plain_CertificateBuilder); Py_INCREF(const_str_plain_CertificateBuilder);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 2, const_str_plain_CertificateRevocationList); Py_INCREF(const_str_plain_CertificateRevocationList);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 3, const_str_plain_CertificateRevocationListBuilder); Py_INCREF(const_str_plain_CertificateRevocationListBuilder);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 4, const_str_plain_CertificateSigningRequest); Py_INCREF(const_str_plain_CertificateSigningRequest);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 5, const_str_plain_CertificateSigningRequestBuilder); Py_INCREF(const_str_plain_CertificateSigningRequestBuilder);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 6, const_str_plain_InvalidVersion); Py_INCREF(const_str_plain_InvalidVersion);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 7, const_str_plain_RevokedCertificate); Py_INCREF(const_str_plain_RevokedCertificate);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 8, const_str_plain_RevokedCertificateBuilder); Py_INCREF(const_str_plain_RevokedCertificateBuilder);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 9, const_str_plain_Version); Py_INCREF(const_str_plain_Version);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 10, const_str_plain_load_der_x509_certificate); Py_INCREF(const_str_plain_load_der_x509_certificate);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 11, const_str_plain_load_der_x509_crl); Py_INCREF(const_str_plain_load_der_x509_crl);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 12, const_str_plain_load_der_x509_csr); Py_INCREF(const_str_plain_load_der_x509_csr);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 13, const_str_plain_load_pem_x509_certificate); Py_INCREF(const_str_plain_load_pem_x509_certificate);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 14, const_str_plain_load_pem_x509_crl); Py_INCREF(const_str_plain_load_pem_x509_crl);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 15, const_str_plain_load_pem_x509_csr); Py_INCREF(const_str_plain_load_pem_x509_csr);
    PyTuple_SET_ITEM(const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple, 16, const_str_plain_random_serial_number); Py_INCREF(const_str_plain_random_serial_number);
    const_str_plain_OID_ISSUER_ALTERNATIVE_NAME = UNSTREAM_STRING(&constant_bin[ 616468 ], 27, 1);
    const_str_plain_OID_DSA_WITH_SHA224 = UNSTREAM_STRING(&constant_bin[ 616495 ], 19, 1);
    const_str_plain_OID_EMAIL_ADDRESS = UNSTREAM_STRING(&constant_bin[ 616514 ], 17, 1);
    const_str_plain_OID_STATE_OR_PROVINCE_NAME = UNSTREAM_STRING(&constant_bin[ 616531 ], 26, 1);
    const_str_plain_OID_ECDSA_WITH_SHA256 = UNSTREAM_STRING(&constant_bin[ 616557 ], 21, 1);
    const_str_plain_OID_SUBJECT_INFORMATION_ACCESS = UNSTREAM_STRING(&constant_bin[ 616578 ], 30, 1);
    const_str_plain_OID_ECDSA_WITH_SHA384 = UNSTREAM_STRING(&constant_bin[ 616608 ], 21, 1);
    const_str_plain_OID_OCSP_NO_CHECK = UNSTREAM_STRING(&constant_bin[ 616629 ], 17, 1);
    const_str_plain_OID_CA_ISSUERS = UNSTREAM_STRING(&constant_bin[ 614604 ], 14, 1);
    const_str_plain_OID_CLIENT_AUTH = UNSTREAM_STRING(&constant_bin[ 616646 ], 15, 1);
    const_str_plain_OID_BASIC_CONSTRAINTS = UNSTREAM_STRING(&constant_bin[ 616661 ], 21, 1);
    const_str_plain_OID_COMMON_NAME = UNSTREAM_STRING(&constant_bin[ 616682 ], 15, 1);
    const_str_plain_OID_SUBJECT_ALTERNATIVE_NAME = UNSTREAM_STRING(&constant_bin[ 616697 ], 28, 1);
    const_str_plain_OID_ORGANIZATIONAL_UNIT_NAME = UNSTREAM_STRING(&constant_bin[ 616725 ], 28, 1);
    const_str_plain_OID_ECDSA_WITH_SHA224 = UNSTREAM_STRING(&constant_bin[ 616753 ], 21, 1);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$x509(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_85ad7335a8df6e1d754aeef35e8159ef;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_8af72734ca7b22207d68568312591ca9);
    codeobj_85ad7335a8df6e1d754aeef35e8159ef = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_7efc2d5ba0c39ffda7ce4cc81cee206e, const_tuple_empty, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$x509 =
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

function_impl_code functable_cryptography$x509[] = {

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

    function_impl_code *current = functable_cryptography$x509;
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

    if (offset > sizeof(functable_cryptography$x509) || offset < 0) {
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
        functable_cryptography$x509[offset],
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
        module_cryptography$x509,
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
PyObject *modulecode_cryptography$x509(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_cryptography$x509;
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
    PRINT_STRING("cryptography.x509: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.x509: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.x509: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$x509\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$x509 = Py_InitModule4(
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
    mdef_cryptography$x509.m_name = module_full_name;
    module_cryptography$x509 = PyModule_Create(&mdef_cryptography$x509);
#endif

    moduledict_cryptography$x509 = MODULE_DICT(module_cryptography$x509);

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
        moduledict_cryptography$x509,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$x509,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$x509,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$x509,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$x509,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$x509);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_cryptography$x509);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    struct Nuitka_FrameObject *frame_85ad7335a8df6e1d754aeef35e8159ef;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_85ad7335a8df6e1d754aeef35e8159ef = MAKE_MODULE_FRAME(codeobj_85ad7335a8df6e1d754aeef35e8159ef, module_cryptography$x509);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_85ad7335a8df6e1d754aeef35e8159ef);
    assert(Py_REFCNT(frame_85ad7335a8df6e1d754aeef35e8159ef) == 2);

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
        PyObject *tmp_called_instance_2;
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 1;
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
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyList_New(3);
        PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 1;
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
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 1;
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
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 1;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_495f0b9ca2f725dc9f357390583c7253_tuple, 0));

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_plain_x509;
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 1;
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
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 1;
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

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_b8789a7dea6d9440532c81d6d2cb3c71_tuple, 0));

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 5;
        tmp_assign_source_4 = PyImport_ImportModule("__future__");
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_absolute_import);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_division);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_print_function);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7);
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
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$x509;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_certificate_transparency_tuple;
        tmp_level_name_1 = const_int_0;
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 7;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_certificate_transparency);
        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_certificate_transparency, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_99d507f2ac89b982963447ed05345806;
        tmp_globals_name_2 = (PyObject *)moduledict_cryptography$x509;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_aa25bec352c38dd8550148f01376e4ae_tuple;
        tmp_level_name_2 = const_int_0;
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 8;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

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
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_Certificate);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_Certificate, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_CertificateBuilder);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CertificateBuilder, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_CertificateRevocationList);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CertificateRevocationList, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_CertificateRevocationListBuilder);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CertificateRevocationListBuilder, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_CertificateSigningRequest);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CertificateSigningRequest, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_CertificateSigningRequestBuilder);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CertificateSigningRequestBuilder, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_InvalidVersion);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_InvalidVersion, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_RevokedCertificate);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_RevokedCertificate, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_RevokedCertificateBuilder);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_RevokedCertificateBuilder, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_14, const_str_plain_Version);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_Version, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_15, const_str_plain_load_der_x509_certificate);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_load_der_x509_certificate, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_16, const_str_plain_load_der_x509_crl);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_load_der_x509_crl, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_17 = tmp_import_from_2__module;
        tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_17, const_str_plain_load_der_x509_csr);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_load_der_x509_csr, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_18 = tmp_import_from_2__module;
        tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_18, const_str_plain_load_pem_x509_certificate);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_load_pem_x509_certificate, tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_19 = tmp_import_from_2__module;
        tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_19, const_str_plain_load_pem_x509_crl);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_load_pem_x509_crl, tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_20 = tmp_import_from_2__module;
        tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_20, const_str_plain_load_pem_x509_csr);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_load_pem_x509_csr, tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_21 = tmp_import_from_2__module;
        tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_21, const_str_plain_random_serial_number);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_random_serial_number, tmp_assign_source_26);
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
        PyObject *tmp_assign_source_27;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_7822abce90b4f23aa7a437cf95bbfec5;
        tmp_globals_name_3 = (PyObject *)moduledict_cryptography$x509;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_d9ed34981547db7f37e23b8dd3d477dd_tuple;
        tmp_level_name_3 = const_int_0;
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 17;
        tmp_assign_source_27 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_27;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_22 = tmp_import_from_3__module;
        tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_22, const_str_plain_AccessDescription);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_AccessDescription, tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_23 = tmp_import_from_3__module;
        tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_23, const_str_plain_AuthorityInformationAccess);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_AuthorityInformationAccess, tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_24 = tmp_import_from_3__module;
        tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_24, const_str_plain_AuthorityKeyIdentifier);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_AuthorityKeyIdentifier, tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_25 = tmp_import_from_3__module;
        tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_25, const_str_plain_BasicConstraints);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_BasicConstraints, tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_26 = tmp_import_from_3__module;
        tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_26, const_str_plain_CRLDistributionPoints);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CRLDistributionPoints, tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_27 = tmp_import_from_3__module;
        tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_27, const_str_plain_CRLNumber);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CRLNumber, tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_28 = tmp_import_from_3__module;
        tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_28, const_str_plain_CRLReason);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CRLReason, tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_29 = tmp_import_from_3__module;
        tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_29, const_str_plain_CertificateIssuer);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CertificateIssuer, tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_30 = tmp_import_from_3__module;
        tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_30, const_str_plain_CertificatePolicies);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CertificatePolicies, tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_31 = tmp_import_from_3__module;
        tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_31, const_str_plain_DeltaCRLIndicator);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_DeltaCRLIndicator, tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_32 = tmp_import_from_3__module;
        tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_32, const_str_plain_DistributionPoint);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_DistributionPoint, tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_33 = tmp_import_from_3__module;
        tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_33, const_str_plain_DuplicateExtension);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_DuplicateExtension, tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_34 = tmp_import_from_3__module;
        tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_34, const_str_plain_ExtendedKeyUsage);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsage, tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_35 = tmp_import_from_3__module;
        tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_35, const_str_plain_Extension);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_Extension, tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_36 = tmp_import_from_3__module;
        tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_36, const_str_plain_ExtensionNotFound);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionNotFound, tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_37 = tmp_import_from_3__module;
        tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_37, const_str_plain_ExtensionType);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionType, tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_38 = tmp_import_from_3__module;
        tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_38, const_str_plain_Extensions);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_Extensions, tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_39;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_39 = tmp_import_from_3__module;
        tmp_assign_source_45 = IMPORT_NAME(tmp_import_name_from_39, const_str_plain_FreshestCRL);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_FreshestCRL, tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_40;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_40 = tmp_import_from_3__module;
        tmp_assign_source_46 = IMPORT_NAME(tmp_import_name_from_40, const_str_plain_GeneralNames);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_GeneralNames, tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_41;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_41 = tmp_import_from_3__module;
        tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_41, const_str_plain_InhibitAnyPolicy);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_InhibitAnyPolicy, tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_42;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_42 = tmp_import_from_3__module;
        tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_42, const_str_plain_InvalidityDate);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_InvalidityDate, tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_43;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_43 = tmp_import_from_3__module;
        tmp_assign_source_49 = IMPORT_NAME(tmp_import_name_from_43, const_str_plain_IssuerAlternativeName);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_IssuerAlternativeName, tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_44;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_44 = tmp_import_from_3__module;
        tmp_assign_source_50 = IMPORT_NAME(tmp_import_name_from_44, const_str_plain_IssuingDistributionPoint);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_IssuingDistributionPoint, tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_45;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_45 = tmp_import_from_3__module;
        tmp_assign_source_51 = IMPORT_NAME(tmp_import_name_from_45, const_str_plain_KeyUsage);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_KeyUsage, tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_46;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_46 = tmp_import_from_3__module;
        tmp_assign_source_52 = IMPORT_NAME(tmp_import_name_from_46, const_str_plain_NameConstraints);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameConstraints, tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_47;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_47 = tmp_import_from_3__module;
        tmp_assign_source_53 = IMPORT_NAME(tmp_import_name_from_47, const_str_plain_NoticeReference);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NoticeReference, tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_48;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_48 = tmp_import_from_3__module;
        tmp_assign_source_54 = IMPORT_NAME(tmp_import_name_from_48, const_str_plain_OCSPNoCheck);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OCSPNoCheck, tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_49;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_49 = tmp_import_from_3__module;
        tmp_assign_source_55 = IMPORT_NAME(tmp_import_name_from_49, const_str_plain_OCSPNonce);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OCSPNonce, tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_50;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_50 = tmp_import_from_3__module;
        tmp_assign_source_56 = IMPORT_NAME(tmp_import_name_from_50, const_str_plain_PolicyConstraints);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_PolicyConstraints, tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_51;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_51 = tmp_import_from_3__module;
        tmp_assign_source_57 = IMPORT_NAME(tmp_import_name_from_51, const_str_plain_PolicyInformation);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_PolicyInformation, tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_52;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_52 = tmp_import_from_3__module;
        tmp_assign_source_58 = IMPORT_NAME(tmp_import_name_from_52, const_str_plain_PrecertPoison);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_PrecertPoison, tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_53;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_53 = tmp_import_from_3__module;
        tmp_assign_source_59 = IMPORT_NAME(tmp_import_name_from_53, const_str_digest_97ac982b098bfd0facb64df38773c335);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_digest_97ac982b098bfd0facb64df38773c335, tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_54;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_54 = tmp_import_from_3__module;
        tmp_assign_source_60 = IMPORT_NAME(tmp_import_name_from_54, const_str_plain_ReasonFlags);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ReasonFlags, tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_55;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_55 = tmp_import_from_3__module;
        tmp_assign_source_61 = IMPORT_NAME(tmp_import_name_from_55, const_str_plain_SubjectAlternativeName);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SubjectAlternativeName, tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_56;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_56 = tmp_import_from_3__module;
        tmp_assign_source_62 = IMPORT_NAME(tmp_import_name_from_56, const_str_plain_SubjectKeyIdentifier);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SubjectKeyIdentifier, tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_57;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_57 = tmp_import_from_3__module;
        tmp_assign_source_63 = IMPORT_NAME(tmp_import_name_from_57, const_str_plain_TLSFeature);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_TLSFeature, tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_58;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_58 = tmp_import_from_3__module;
        tmp_assign_source_64 = IMPORT_NAME(tmp_import_name_from_58, const_str_plain_TLSFeatureType);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_TLSFeatureType, tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_59;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_59 = tmp_import_from_3__module;
        tmp_assign_source_65 = IMPORT_NAME(tmp_import_name_from_59, const_str_plain_UnrecognizedExtension);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_UnrecognizedExtension, tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_60;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_60 = tmp_import_from_3__module;
        tmp_assign_source_66 = IMPORT_NAME(tmp_import_name_from_60, const_str_plain_UserNotice);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_UserNotice, tmp_assign_source_66);
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
        PyObject *tmp_assign_source_67;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_becb7ddc5eba88bda421a9fc23a1539c;
        tmp_globals_name_4 = (PyObject *)moduledict_cryptography$x509;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_c992ec5fe7bb072bb4084b191a56b771_tuple;
        tmp_level_name_4 = const_int_0;
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 30;
        tmp_assign_source_67 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_67;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_import_name_from_61;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_61 = tmp_import_from_4__module;
        tmp_assign_source_68 = IMPORT_NAME(tmp_import_name_from_61, const_str_plain_DNSName);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_DNSName, tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_62;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_62 = tmp_import_from_4__module;
        tmp_assign_source_69 = IMPORT_NAME(tmp_import_name_from_62, const_str_plain_DirectoryName);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_DirectoryName, tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_63;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_63 = tmp_import_from_4__module;
        tmp_assign_source_70 = IMPORT_NAME(tmp_import_name_from_63, const_str_plain_GeneralName);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_GeneralName, tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_64;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_64 = tmp_import_from_4__module;
        tmp_assign_source_71 = IMPORT_NAME(tmp_import_name_from_64, const_str_plain_IPAddress);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_IPAddress, tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_65;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_65 = tmp_import_from_4__module;
        tmp_assign_source_72 = IMPORT_NAME(tmp_import_name_from_65, const_str_plain_OtherName);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OtherName, tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_66;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_66 = tmp_import_from_4__module;
        tmp_assign_source_73 = IMPORT_NAME(tmp_import_name_from_66, const_str_plain_RFC822Name);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_RFC822Name, tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_67;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_67 = tmp_import_from_4__module;
        tmp_assign_source_74 = IMPORT_NAME(tmp_import_name_from_67, const_str_plain_RegisteredID);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_RegisteredID, tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_import_name_from_68;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_68 = tmp_import_from_4__module;
        tmp_assign_source_75 = IMPORT_NAME(tmp_import_name_from_68, const_str_plain_UniformResourceIdentifier);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_UniformResourceIdentifier, tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_import_name_from_69;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_69 = tmp_import_from_4__module;
        tmp_assign_source_76 = IMPORT_NAME(tmp_import_name_from_69, const_str_plain_UnsupportedGeneralNameType);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_UnsupportedGeneralNameType, tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_import_name_from_70;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_70 = tmp_import_from_4__module;
        tmp_assign_source_77 = IMPORT_NAME(tmp_import_name_from_70, const_str_plain__GENERAL_NAMES);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain__GENERAL_NAMES, tmp_assign_source_77);
    }
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

    CHECK_OBJECT((PyObject *)tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT((PyObject *)tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_957c81bc7a15c28c0c453fa3270dbc10;
        tmp_globals_name_5 = (PyObject *)moduledict_cryptography$x509;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_e6fbd74e2a994d2f68f56ed467b52de4_tuple;
        tmp_level_name_5 = const_int_0;
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 35;
        tmp_assign_source_78 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_78;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_71;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_71 = tmp_import_from_5__module;
        tmp_assign_source_79 = IMPORT_NAME(tmp_import_name_from_71, const_str_plain_Name);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_Name, tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_72;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_72 = tmp_import_from_5__module;
        tmp_assign_source_80 = IMPORT_NAME(tmp_import_name_from_72, const_str_plain_NameAttribute);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameAttribute, tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_import_name_from_73;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_73 = tmp_import_from_5__module;
        tmp_assign_source_81 = IMPORT_NAME(tmp_import_name_from_73, const_str_plain_RelativeDistinguishedName);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_RelativeDistinguishedName, tmp_assign_source_81);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT((PyObject *)tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;

    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
        tmp_globals_name_6 = (PyObject *)moduledict_cryptography$x509;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_c68e20a5591f5059c0231d123efb1167_tuple;
        tmp_level_name_6 = const_int_0;
        frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame.f_lineno = 38;
        tmp_assign_source_82 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_82;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_import_name_from_74;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_74 = tmp_import_from_6__module;
        tmp_assign_source_83 = IMPORT_NAME(tmp_import_name_from_74, const_str_plain_AuthorityInformationAccessOID);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_AuthorityInformationAccessOID, tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_import_name_from_75;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_75 = tmp_import_from_6__module;
        tmp_assign_source_84 = IMPORT_NAME(tmp_import_name_from_75, const_str_plain_CRLEntryExtensionOID);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CRLEntryExtensionOID, tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_import_name_from_76;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_76 = tmp_import_from_6__module;
        tmp_assign_source_85 = IMPORT_NAME(tmp_import_name_from_76, const_str_plain_CertificatePoliciesOID);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CertificatePoliciesOID, tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_import_name_from_77;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_77 = tmp_import_from_6__module;
        tmp_assign_source_86 = IMPORT_NAME(tmp_import_name_from_77, const_str_plain_ExtendedKeyUsageOID);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID, tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_import_name_from_78;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_78 = tmp_import_from_6__module;
        tmp_assign_source_87 = IMPORT_NAME(tmp_import_name_from_78, const_str_plain_ExtensionOID);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID, tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_import_name_from_79;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_79 = tmp_import_from_6__module;
        tmp_assign_source_88 = IMPORT_NAME(tmp_import_name_from_79, const_str_plain_NameOID);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID, tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_import_name_from_80;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_80 = tmp_import_from_6__module;
        tmp_assign_source_89 = IMPORT_NAME(tmp_import_name_from_80, const_str_plain_ObjectIdentifier);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier, tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_import_name_from_81;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_81 = tmp_import_from_6__module;
        tmp_assign_source_90 = IMPORT_NAME(tmp_import_name_from_81, const_str_plain_SignatureAlgorithmOID);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID, tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_import_name_from_82;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_82 = tmp_import_from_6__module;
        tmp_assign_source_91 = IMPORT_NAME(tmp_import_name_from_82, const_str_plain__SIG_OIDS_TO_HASH);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain__SIG_OIDS_TO_HASH, tmp_assign_source_91);
    }
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

    CHECK_OBJECT((PyObject *)tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT((PyObject *)tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;

    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_assign_source_92 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_AUTHORITY_INFORMATION_ACCESS);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_AUTHORITY_INFORMATION_ACCESS, tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_2;
        tmp_assign_source_93 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_AUTHORITY_KEY_IDENTIFIER);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_AUTHORITY_KEY_IDENTIFIER, tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 47;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_assign_source_94 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_BASIC_CONSTRAINTS);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_BASIC_CONSTRAINTS, tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_4;
        tmp_assign_source_95 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_CERTIFICATE_POLICIES);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_CERTIFICATE_POLICIES, tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_5;
        tmp_assign_source_96 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_CRL_DISTRIBUTION_POINTS);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_CRL_DISTRIBUTION_POINTS, tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_6;
        tmp_assign_source_97 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_EXTENDED_KEY_USAGE);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_EXTENDED_KEY_USAGE, tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_7;
        tmp_assign_source_98 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_FRESHEST_CRL);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_FRESHEST_CRL, tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_8;
        tmp_assign_source_99 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_INHIBIT_ANY_POLICY);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_INHIBIT_ANY_POLICY, tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_9;
        tmp_assign_source_100 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_ISSUER_ALTERNATIVE_NAME);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_ISSUER_ALTERNATIVE_NAME, tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_10;
        tmp_assign_source_101 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_KEY_USAGE);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_KEY_USAGE, tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_11 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_11;
        tmp_assign_source_102 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_NAME_CONSTRAINTS);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_NAME_CONSTRAINTS, tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_12 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_12;
        tmp_assign_source_103 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_OCSP_NO_CHECK);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_OCSP_NO_CHECK, tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_13 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_13;
        tmp_assign_source_104 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_POLICY_CONSTRAINTS);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_POLICY_CONSTRAINTS, tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_14;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_14 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }

        tmp_source_name_16 = tmp_mvar_value_14;
        tmp_assign_source_105 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_POLICY_MAPPINGS);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_POLICY_MAPPINGS, tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_15;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_15 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_15;
        tmp_assign_source_106 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_SUBJECT_ALTERNATIVE_NAME);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_SUBJECT_ALTERNATIVE_NAME, tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_16;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_16 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }

        tmp_source_name_18 = tmp_mvar_value_16;
        tmp_assign_source_107 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_SUBJECT_DIRECTORY_ATTRIBUTES);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_SUBJECT_DIRECTORY_ATTRIBUTES, tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_17;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_17 == NULL)) {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_17 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }

        tmp_source_name_19 = tmp_mvar_value_17;
        tmp_assign_source_108 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_SUBJECT_INFORMATION_ACCESS);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_SUBJECT_INFORMATION_ACCESS, tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtensionOID);

        if (unlikely(tmp_mvar_value_18 == NULL)) {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID);
        }

        if (tmp_mvar_value_18 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23410 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }

        tmp_source_name_20 = tmp_mvar_value_18;
        tmp_assign_source_109 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain_SUBJECT_KEY_IDENTIFIER);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_SUBJECT_KEY_IDENTIFIER, tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_19 == NULL)) {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_19 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }

        tmp_source_name_21 = tmp_mvar_value_19;
        tmp_assign_source_110 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_DSA_WITH_SHA1);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_DSA_WITH_SHA1, tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_source_name_22;
        PyObject *tmp_mvar_value_20;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_20 == NULL)) {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_20 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }

        tmp_source_name_22 = tmp_mvar_value_20;
        tmp_assign_source_111 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain_DSA_WITH_SHA224);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_DSA_WITH_SHA224, tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_source_name_23;
        PyObject *tmp_mvar_value_21;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_21 == NULL)) {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_21 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }

        tmp_source_name_23 = tmp_mvar_value_21;
        tmp_assign_source_112 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain_DSA_WITH_SHA256);
        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_DSA_WITH_SHA256, tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_source_name_24;
        PyObject *tmp_mvar_value_22;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_22 == NULL)) {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_22 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }

        tmp_source_name_24 = tmp_mvar_value_22;
        tmp_assign_source_113 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain_ECDSA_WITH_SHA1);
        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_ECDSA_WITH_SHA1, tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_source_name_25;
        PyObject *tmp_mvar_value_23;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_23 == NULL)) {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_23 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }

        tmp_source_name_25 = tmp_mvar_value_23;
        tmp_assign_source_114 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain_ECDSA_WITH_SHA224);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_ECDSA_WITH_SHA224, tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_source_name_26;
        PyObject *tmp_mvar_value_24;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_24 == NULL)) {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_24 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }

        tmp_source_name_26 = tmp_mvar_value_24;
        tmp_assign_source_115 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain_ECDSA_WITH_SHA256);
        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_ECDSA_WITH_SHA256, tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_source_name_27;
        PyObject *tmp_mvar_value_25;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_25 == NULL)) {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_25 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }

        tmp_source_name_27 = tmp_mvar_value_25;
        tmp_assign_source_116 = LOOKUP_ATTRIBUTE(tmp_source_name_27, const_str_plain_ECDSA_WITH_SHA384);
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_ECDSA_WITH_SHA384, tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_source_name_28;
        PyObject *tmp_mvar_value_26;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_26 == NULL)) {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_26 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }

        tmp_source_name_28 = tmp_mvar_value_26;
        tmp_assign_source_117 = LOOKUP_ATTRIBUTE(tmp_source_name_28, const_str_plain_ECDSA_WITH_SHA512);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_ECDSA_WITH_SHA512, tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_source_name_29;
        PyObject *tmp_mvar_value_27;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_27 == NULL)) {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_27 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }

        tmp_source_name_29 = tmp_mvar_value_27;
        tmp_assign_source_118 = LOOKUP_ATTRIBUTE(tmp_source_name_29, const_str_plain_RSA_WITH_MD5);
        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_RSA_WITH_MD5, tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_source_name_30;
        PyObject *tmp_mvar_value_28;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_28 == NULL)) {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_28 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }

        tmp_source_name_30 = tmp_mvar_value_28;
        tmp_assign_source_119 = LOOKUP_ATTRIBUTE(tmp_source_name_30, const_str_plain_RSA_WITH_SHA1);
        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_RSA_WITH_SHA1, tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_source_name_31;
        PyObject *tmp_mvar_value_29;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_29 == NULL)) {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_29 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }

        tmp_source_name_31 = tmp_mvar_value_29;
        tmp_assign_source_120 = LOOKUP_ATTRIBUTE(tmp_source_name_31, const_str_plain_RSA_WITH_SHA224);
        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_RSA_WITH_SHA224, tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_source_name_32;
        PyObject *tmp_mvar_value_30;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_30 == NULL)) {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_30 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }

        tmp_source_name_32 = tmp_mvar_value_30;
        tmp_assign_source_121 = LOOKUP_ATTRIBUTE(tmp_source_name_32, const_str_plain_RSA_WITH_SHA256);
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_RSA_WITH_SHA256, tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_source_name_33;
        PyObject *tmp_mvar_value_31;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_31 == NULL)) {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_31 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }

        tmp_source_name_33 = tmp_mvar_value_31;
        tmp_assign_source_122 = LOOKUP_ATTRIBUTE(tmp_source_name_33, const_str_plain_RSA_WITH_SHA384);
        if (tmp_assign_source_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_RSA_WITH_SHA384, tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_source_name_34;
        PyObject *tmp_mvar_value_32;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_32 == NULL)) {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_32 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }

        tmp_source_name_34 = tmp_mvar_value_32;
        tmp_assign_source_123 = LOOKUP_ATTRIBUTE(tmp_source_name_34, const_str_plain_RSA_WITH_SHA512);
        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_RSA_WITH_SHA512, tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_source_name_35;
        PyObject *tmp_mvar_value_33;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);

        if (unlikely(tmp_mvar_value_33 == NULL)) {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID);
        }

        if (tmp_mvar_value_33 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35176 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }

        tmp_source_name_35 = tmp_mvar_value_33;
        tmp_assign_source_124 = LOOKUP_ATTRIBUTE(tmp_source_name_35, const_str_plain_RSASSA_PSS);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_RSASSA_PSS, tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_source_name_36;
        PyObject *tmp_mvar_value_34;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_34 == NULL)) {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_34 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_source_name_36 = tmp_mvar_value_34;
        tmp_assign_source_125 = LOOKUP_ATTRIBUTE(tmp_source_name_36, const_str_plain_COMMON_NAME);
        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_COMMON_NAME, tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_source_name_37;
        PyObject *tmp_mvar_value_35;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_35 == NULL)) {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_35 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }

        tmp_source_name_37 = tmp_mvar_value_35;
        tmp_assign_source_126 = LOOKUP_ATTRIBUTE(tmp_source_name_37, const_str_plain_COUNTRY_NAME);
        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_COUNTRY_NAME, tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_source_name_38;
        PyObject *tmp_mvar_value_36;
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_36 == NULL)) {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_36 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }

        tmp_source_name_38 = tmp_mvar_value_36;
        tmp_assign_source_127 = LOOKUP_ATTRIBUTE(tmp_source_name_38, const_str_plain_DOMAIN_COMPONENT);
        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_DOMAIN_COMPONENT, tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_source_name_39;
        PyObject *tmp_mvar_value_37;
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_37 == NULL)) {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_37 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }

        tmp_source_name_39 = tmp_mvar_value_37;
        tmp_assign_source_128 = LOOKUP_ATTRIBUTE(tmp_source_name_39, const_str_plain_DN_QUALIFIER);
        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_DN_QUALIFIER, tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_source_name_40;
        PyObject *tmp_mvar_value_38;
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_38 == NULL)) {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_38 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }

        tmp_source_name_40 = tmp_mvar_value_38;
        tmp_assign_source_129 = LOOKUP_ATTRIBUTE(tmp_source_name_40, const_str_plain_EMAIL_ADDRESS);
        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_EMAIL_ADDRESS, tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_source_name_41;
        PyObject *tmp_mvar_value_39;
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_39 == NULL)) {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_39 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }

        tmp_source_name_41 = tmp_mvar_value_39;
        tmp_assign_source_130 = LOOKUP_ATTRIBUTE(tmp_source_name_41, const_str_plain_GENERATION_QUALIFIER);
        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_GENERATION_QUALIFIER, tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_source_name_42;
        PyObject *tmp_mvar_value_40;
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_40 == NULL)) {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_40 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }

        tmp_source_name_42 = tmp_mvar_value_40;
        tmp_assign_source_131 = LOOKUP_ATTRIBUTE(tmp_source_name_42, const_str_plain_GIVEN_NAME);
        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_GIVEN_NAME, tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_source_name_43;
        PyObject *tmp_mvar_value_41;
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_41 == NULL)) {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_41 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }

        tmp_source_name_43 = tmp_mvar_value_41;
        tmp_assign_source_132 = LOOKUP_ATTRIBUTE(tmp_source_name_43, const_str_plain_LOCALITY_NAME);
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_LOCALITY_NAME, tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_source_name_44;
        PyObject *tmp_mvar_value_42;
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_42 == NULL)) {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_42 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }

        tmp_source_name_44 = tmp_mvar_value_42;
        tmp_assign_source_133 = LOOKUP_ATTRIBUTE(tmp_source_name_44, const_str_plain_ORGANIZATIONAL_UNIT_NAME);
        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_ORGANIZATIONAL_UNIT_NAME, tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_source_name_45;
        PyObject *tmp_mvar_value_43;
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_43 == NULL)) {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_43 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }

        tmp_source_name_45 = tmp_mvar_value_43;
        tmp_assign_source_134 = LOOKUP_ATTRIBUTE(tmp_source_name_45, const_str_plain_ORGANIZATION_NAME);
        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_ORGANIZATION_NAME, tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_source_name_46;
        PyObject *tmp_mvar_value_44;
        tmp_mvar_value_44 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_44 == NULL)) {
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_44 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }

        tmp_source_name_46 = tmp_mvar_value_44;
        tmp_assign_source_135 = LOOKUP_ATTRIBUTE(tmp_source_name_46, const_str_plain_PSEUDONYM);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_PSEUDONYM, tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_source_name_47;
        PyObject *tmp_mvar_value_45;
        tmp_mvar_value_45 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_45 == NULL)) {
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_45 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }

        tmp_source_name_47 = tmp_mvar_value_45;
        tmp_assign_source_136 = LOOKUP_ATTRIBUTE(tmp_source_name_47, const_str_plain_SERIAL_NUMBER);
        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_SERIAL_NUMBER, tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_source_name_48;
        PyObject *tmp_mvar_value_46;
        tmp_mvar_value_46 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_46 == NULL)) {
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_46 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }

        tmp_source_name_48 = tmp_mvar_value_46;
        tmp_assign_source_137 = LOOKUP_ATTRIBUTE(tmp_source_name_48, const_str_plain_STATE_OR_PROVINCE_NAME);
        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_STATE_OR_PROVINCE_NAME, tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_source_name_49;
        PyObject *tmp_mvar_value_47;
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_47 == NULL)) {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_47 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }

        tmp_source_name_49 = tmp_mvar_value_47;
        tmp_assign_source_138 = LOOKUP_ATTRIBUTE(tmp_source_name_49, const_str_plain_SURNAME);
        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_SURNAME, tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_source_name_50;
        PyObject *tmp_mvar_value_48;
        tmp_mvar_value_48 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_NameOID);

        if (unlikely(tmp_mvar_value_48 == NULL)) {
            tmp_mvar_value_48 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID);
        }

        if (tmp_mvar_value_48 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35219 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }

        tmp_source_name_50 = tmp_mvar_value_48;
        tmp_assign_source_139 = LOOKUP_ATTRIBUTE(tmp_source_name_50, const_str_plain_TITLE);
        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_TITLE, tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_source_name_51;
        PyObject *tmp_mvar_value_49;
        tmp_mvar_value_49 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID);

        if (unlikely(tmp_mvar_value_49 == NULL)) {
            tmp_mvar_value_49 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID);
        }

        if (tmp_mvar_value_49 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35248 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }

        tmp_source_name_51 = tmp_mvar_value_49;
        tmp_assign_source_140 = LOOKUP_ATTRIBUTE(tmp_source_name_51, const_str_plain_CLIENT_AUTH);
        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_CLIENT_AUTH, tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_source_name_52;
        PyObject *tmp_mvar_value_50;
        tmp_mvar_value_50 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID);

        if (unlikely(tmp_mvar_value_50 == NULL)) {
            tmp_mvar_value_50 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID);
        }

        if (tmp_mvar_value_50 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35248 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }

        tmp_source_name_52 = tmp_mvar_value_50;
        tmp_assign_source_141 = LOOKUP_ATTRIBUTE(tmp_source_name_52, const_str_plain_CODE_SIGNING);
        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_CODE_SIGNING, tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_source_name_53;
        PyObject *tmp_mvar_value_51;
        tmp_mvar_value_51 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID);

        if (unlikely(tmp_mvar_value_51 == NULL)) {
            tmp_mvar_value_51 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID);
        }

        if (tmp_mvar_value_51 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35248 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }

        tmp_source_name_53 = tmp_mvar_value_51;
        tmp_assign_source_142 = LOOKUP_ATTRIBUTE(tmp_source_name_53, const_str_plain_EMAIL_PROTECTION);
        if (tmp_assign_source_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_EMAIL_PROTECTION, tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_source_name_54;
        PyObject *tmp_mvar_value_52;
        tmp_mvar_value_52 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID);

        if (unlikely(tmp_mvar_value_52 == NULL)) {
            tmp_mvar_value_52 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID);
        }

        if (tmp_mvar_value_52 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35248 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        tmp_source_name_54 = tmp_mvar_value_52;
        tmp_assign_source_143 = LOOKUP_ATTRIBUTE(tmp_source_name_54, const_str_plain_OCSP_SIGNING);
        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_OCSP_SIGNING, tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_source_name_55;
        PyObject *tmp_mvar_value_53;
        tmp_mvar_value_53 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID);

        if (unlikely(tmp_mvar_value_53 == NULL)) {
            tmp_mvar_value_53 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID);
        }

        if (tmp_mvar_value_53 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35248 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }

        tmp_source_name_55 = tmp_mvar_value_53;
        tmp_assign_source_144 = LOOKUP_ATTRIBUTE(tmp_source_name_55, const_str_plain_SERVER_AUTH);
        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_SERVER_AUTH, tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_source_name_56;
        PyObject *tmp_mvar_value_54;
        tmp_mvar_value_54 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID);

        if (unlikely(tmp_mvar_value_54 == NULL)) {
            tmp_mvar_value_54 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID);
        }

        if (tmp_mvar_value_54 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35248 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }

        tmp_source_name_56 = tmp_mvar_value_54;
        tmp_assign_source_145 = LOOKUP_ATTRIBUTE(tmp_source_name_56, const_str_plain_TIME_STAMPING);
        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_TIME_STAMPING, tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_source_name_57;
        PyObject *tmp_mvar_value_55;
        tmp_mvar_value_55 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CertificatePoliciesOID);

        if (unlikely(tmp_mvar_value_55 == NULL)) {
            tmp_mvar_value_55 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificatePoliciesOID);
        }

        if (tmp_mvar_value_55 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23505 ], 44, 0);
            exception_tb = NULL;

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }

        tmp_source_name_57 = tmp_mvar_value_55;
        tmp_assign_source_146 = LOOKUP_ATTRIBUTE(tmp_source_name_57, const_str_plain_ANY_POLICY);
        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_ANY_POLICY, tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_source_name_58;
        PyObject *tmp_mvar_value_56;
        tmp_mvar_value_56 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CertificatePoliciesOID);

        if (unlikely(tmp_mvar_value_56 == NULL)) {
            tmp_mvar_value_56 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificatePoliciesOID);
        }

        if (tmp_mvar_value_56 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23505 ], 44, 0);
            exception_tb = NULL;

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }

        tmp_source_name_58 = tmp_mvar_value_56;
        tmp_assign_source_147 = LOOKUP_ATTRIBUTE(tmp_source_name_58, const_str_plain_CPS_QUALIFIER);
        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_CPS_QUALIFIER, tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_source_name_59;
        PyObject *tmp_mvar_value_57;
        tmp_mvar_value_57 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CertificatePoliciesOID);

        if (unlikely(tmp_mvar_value_57 == NULL)) {
            tmp_mvar_value_57 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificatePoliciesOID);
        }

        if (tmp_mvar_value_57 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 23505 ], 44, 0);
            exception_tb = NULL;

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }

        tmp_source_name_59 = tmp_mvar_value_57;
        tmp_assign_source_148 = LOOKUP_ATTRIBUTE(tmp_source_name_59, const_str_plain_CPS_USER_NOTICE);
        if (tmp_assign_source_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_CPS_USER_NOTICE, tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_source_name_60;
        PyObject *tmp_mvar_value_58;
        tmp_mvar_value_58 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CRLEntryExtensionOID);

        if (unlikely(tmp_mvar_value_58 == NULL)) {
            tmp_mvar_value_58 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CRLEntryExtensionOID);
        }

        if (tmp_mvar_value_58 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25048 ], 42, 0);
            exception_tb = NULL;

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }

        tmp_source_name_60 = tmp_mvar_value_58;
        tmp_assign_source_149 = LOOKUP_ATTRIBUTE(tmp_source_name_60, const_str_plain_CERTIFICATE_ISSUER);
        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_CERTIFICATE_ISSUER, tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_source_name_61;
        PyObject *tmp_mvar_value_59;
        tmp_mvar_value_59 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CRLEntryExtensionOID);

        if (unlikely(tmp_mvar_value_59 == NULL)) {
            tmp_mvar_value_59 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CRLEntryExtensionOID);
        }

        if (tmp_mvar_value_59 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25048 ], 42, 0);
            exception_tb = NULL;

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }

        tmp_source_name_61 = tmp_mvar_value_59;
        tmp_assign_source_150 = LOOKUP_ATTRIBUTE(tmp_source_name_61, const_str_plain_CRL_REASON);
        if (tmp_assign_source_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_CRL_REASON, tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_source_name_62;
        PyObject *tmp_mvar_value_60;
        tmp_mvar_value_60 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_CRLEntryExtensionOID);

        if (unlikely(tmp_mvar_value_60 == NULL)) {
            tmp_mvar_value_60 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CRLEntryExtensionOID);
        }

        if (tmp_mvar_value_60 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25048 ], 42, 0);
            exception_tb = NULL;

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }

        tmp_source_name_62 = tmp_mvar_value_60;
        tmp_assign_source_151 = LOOKUP_ATTRIBUTE(tmp_source_name_62, const_str_plain_INVALIDITY_DATE);
        if (tmp_assign_source_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_INVALIDITY_DATE, tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_source_name_63;
        PyObject *tmp_mvar_value_61;
        tmp_mvar_value_61 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_AuthorityInformationAccessOID);

        if (unlikely(tmp_mvar_value_61 == NULL)) {
            tmp_mvar_value_61 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AuthorityInformationAccessOID);
        }

        if (tmp_mvar_value_61 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35289 ], 51, 0);
            exception_tb = NULL;

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }

        tmp_source_name_63 = tmp_mvar_value_61;
        tmp_assign_source_152 = LOOKUP_ATTRIBUTE(tmp_source_name_63, const_str_plain_CA_ISSUERS);
        if (tmp_assign_source_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_CA_ISSUERS, tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_source_name_64;
        PyObject *tmp_mvar_value_62;
        tmp_mvar_value_62 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_AuthorityInformationAccessOID);

        if (unlikely(tmp_mvar_value_62 == NULL)) {
            tmp_mvar_value_62 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AuthorityInformationAccessOID);
        }

        if (tmp_mvar_value_62 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 35289 ], 51, 0);
            exception_tb = NULL;

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }

        tmp_source_name_64 = tmp_mvar_value_62;
        tmp_assign_source_153 = LOOKUP_ATTRIBUTE(tmp_source_name_64, const_str_plain_OCSP);
        if (tmp_assign_source_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain_OID_OCSP, tmp_assign_source_153);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_85ad7335a8df6e1d754aeef35e8159ef);
#endif
    popFrameStack();

    assertFrameObject(frame_85ad7335a8df6e1d754aeef35e8159ef);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_85ad7335a8df6e1d754aeef35e8159ef);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_85ad7335a8df6e1d754aeef35e8159ef, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_85ad7335a8df6e1d754aeef35e8159ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_85ad7335a8df6e1d754aeef35e8159ef, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = LIST_COPY(const_list_9e62483b5b2b910a00afae8fdbbdd8fc_list);
        UPDATE_STRING_DICT1(moduledict_cryptography$x509, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_154);
    }

    return module_cryptography$x509;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
