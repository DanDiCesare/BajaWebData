// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

#include "nuitka/constants_blob.h"

// Blob from which modules are unstreamed.
#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    ssize_t start;
    int size;
};

void copyFrozenModulesTo( struct _frozen *destination )
{
    struct frozen_desc frozen_modules[] = {
        {"base64", 1493671, 11253},
        {"codecs", 1535724, 36628},
        {"copy_reg", 7694771, 5137},
        {"encodings", 1908697, -4362},
        {"encodings.aliases", 7699908, 8760},
        {"encodings.ascii", 7708668, 2253},
        {"encodings.base64_codec", 7710921, 3829},
        {"encodings.big5", 7714750, 1748},
        {"encodings.big5hkscs", 7716498, 1788},
        {"encodings.bz2_codec", 7718286, 4721},
        {"encodings.charmap", 7723007, 3465},
        {"encodings.cp037", 7726472, 2829},
        {"encodings.cp1006", 7729301, 2915},
        {"encodings.cp1026", 7732216, 2843},
        {"encodings.cp1140", 7735059, 2829},
        {"encodings.cp1250", 7737888, 2866},
        {"encodings.cp1251", 7740754, 2863},
        {"encodings.cp1252", 7743617, 2866},
        {"encodings.cp1253", 7746483, 2879},
        {"encodings.cp1254", 7749362, 2868},
        {"encodings.cp1255", 7752230, 2887},
        {"encodings.cp1256", 7755117, 2865},
        {"encodings.cp1257", 7757982, 2873},
        {"encodings.cp1258", 7760855, 2871},
        {"encodings.cp424", 7763726, 2859},
        {"encodings.cp437", 7766585, 8064},
        {"encodings.cp500", 7774649, 2829},
        {"encodings.cp720", 7777478, 2926},
        {"encodings.cp737", 7780404, 8292},
        {"encodings.cp775", 7788696, 8078},
        {"encodings.cp850", 7796774, 7811},
        {"encodings.cp852", 7804585, 8080},
        {"encodings.cp855", 7812665, 8261},
        {"encodings.cp856", 7820926, 2891},
        {"encodings.cp857", 7823817, 7801},
        {"encodings.cp858", 7831618, 7781},
        {"encodings.cp860", 7839399, 8047},
        {"encodings.cp861", 7847446, 8058},
        {"encodings.cp862", 7855504, 8193},
        {"encodings.cp863", 7863697, 8058},
        {"encodings.cp864", 7871755, 8189},
        {"encodings.cp865", 7879944, 8058},
        {"encodings.cp866", 7888002, 8293},
        {"encodings.cp869", 7896295, 8105},
        {"encodings.cp874", 7904400, 2957},
        {"encodings.cp875", 7907357, 2826},
        {"encodings.cp932", 7910183, 1756},
        {"encodings.cp949", 7911939, 1756},
        {"encodings.cp950", 7913695, 1756},
        {"encodings.euc_jis_2004", 7915451, 1812},
        {"encodings.euc_jisx0213", 7917263, 1812},
        {"encodings.euc_jp", 7919075, 1764},
        {"encodings.euc_kr", 7920839, 1764},
        {"encodings.gb18030", 7922603, 1772},
        {"encodings.gb2312", 7924375, 1764},
        {"encodings.gbk", 7926139, 1740},
        {"encodings.hex_codec", 7927879, 3781},
        {"encodings.hp_roman8", 7931660, 4112},
        {"encodings.hz", 7935772, 1732},
        {"encodings.idna", 1913059, 6368},
        {"encodings.iso2022_jp", 7937504, 1801},
        {"encodings.iso2022_jp_1", 7939305, 1817},
        {"encodings.iso2022_jp_2", 7941122, 1817},
        {"encodings.iso2022_jp_2004", 7942939, 1841},
        {"encodings.iso2022_jp_3", 7944780, 1817},
        {"encodings.iso2022_jp_ext", 7946597, 1833},
        {"encodings.iso2022_kr", 7948430, 1801},
        {"encodings.iso8859_1", 7950231, 2868},
        {"encodings.iso8859_10", 7953099, 2883},
        {"encodings.iso8859_11", 7955982, 2977},
        {"encodings.iso8859_13", 7958959, 2886},
        {"encodings.iso8859_14", 7961845, 2904},
        {"encodings.iso8859_15", 7964749, 2883},
        {"encodings.iso8859_16", 7967632, 2885},
        {"encodings.iso8859_2", 7970517, 2868},
        {"encodings.iso8859_3", 7973385, 2875},
        {"encodings.iso8859_4", 7976260, 2868},
        {"encodings.iso8859_5", 7979128, 2869},
        {"encodings.iso8859_6", 7981997, 2913},
        {"encodings.iso8859_7", 7984910, 2876},
        {"encodings.iso8859_8", 7987786, 2907},
        {"encodings.iso8859_9", 7990693, 2868},
        {"encodings.johab", 7993561, 1756},
        {"encodings.koi8_r", 7995317, 2890},
        {"encodings.koi8_u", 7998207, 2876},
        {"encodings.latin_1", 8001083, 2283},
        {"encodings.mac_arabic", 8003366, 8014},
        {"encodings.mac_centeuro", 8011380, 2937},
        {"encodings.mac_croatian", 8014317, 2945},
        {"encodings.mac_cyrillic", 8017262, 2935},
        {"encodings.mac_farsi", 8020197, 2849},
        {"encodings.mac_greek", 8023046, 2889},
        {"encodings.mac_iceland", 8025935, 2928},
        {"encodings.mac_latin2", 8028863, 4907},
        {"encodings.mac_roman", 8033770, 2906},
        {"encodings.mac_romanian", 8036676, 2946},
        {"encodings.mac_turkish", 8039622, 2929},
        {"encodings.palmos", 8042551, 3066},
        {"encodings.ptcp154", 8045617, 4890},
        {"encodings.punycode", 8050507, 7942},
        {"encodings.quopri_codec", 8058449, 3647},
        {"encodings.raw_unicode_escape", 8062096, 2202},
        {"encodings.rot_13", 8064298, 3656},
        {"encodings.shift_jis", 8067954, 1788},
        {"encodings.shift_jis_2004", 8069742, 1828},
        {"encodings.shift_jisx0213", 8071570, 1828},
        {"encodings.string_escape", 8073398, 2061},
        {"encodings.tis_620", 8075459, 2938},
        {"encodings.undefined", 8078397, 2589},
        {"encodings.unicode_escape", 8080986, 2150},
        {"encodings.unicode_internal", 8083136, 2176},
        {"encodings.utf_16", 8085312, 5160},
        {"encodings.utf_16_be", 8090472, 1990},
        {"encodings.utf_16_le", 8092462, 1990},
        {"encodings.utf_32", 8094452, 5724},
        {"encodings.utf_32_be", 8100176, 1883},
        {"encodings.utf_32_le", 8102059, 1883},
        {"encodings.utf_7", 8103942, 1883},
        {"encodings.utf_8", 8105825, 1942},
        {"encodings.utf_8_sig", 8107767, 4977},
        {"encodings.uu_codec", 8112744, 4909},
        {"encodings.zlib_codec", 8117653, 4641},
        {"functools", 1977255, 6561},
        {"locale", 8122294, 56524},
        {"quopri", 2283517, 6544},
        {"re", 2315671, 13363},
        {"sre_compile", 8178818, 12522},
        {"sre_constants", 8191340, 6177},
        {"sre_parse", 8197517, 21076},
        {"string", 2382493, 20349},
        {"stringprep", 8218593, 14439},
        {"struct", 2402842, 229},
        {"types", 2584137, 2703},
        {NULL, 0, 0}
    };

    struct frozen_desc *current = frozen_modules;

    for(;;)
    {
        destination->name = (char *)current->name;
        destination->code = (unsigned char *)&constant_bin[ current->start ];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}
