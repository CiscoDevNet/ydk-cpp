#ifndef _IANA_ADDRESS_FAMILY_NUMBERS_MIB_
#define _IANA_ADDRESS_FAMILY_NUMBERS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace IANA_ADDRESS_FAMILY_NUMBERS_MIB {

class AddressFamilyNumbers : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf ipV4;
        static const ydk::Enum::YLeaf ipV6;
        static const ydk::Enum::YLeaf nsap;
        static const ydk::Enum::YLeaf hdlc;
        static const ydk::Enum::YLeaf bbn1822;
        static const ydk::Enum::YLeaf all802;
        static const ydk::Enum::YLeaf e163;
        static const ydk::Enum::YLeaf e164;
        static const ydk::Enum::YLeaf f69;
        static const ydk::Enum::YLeaf x121;
        static const ydk::Enum::YLeaf ipx;
        static const ydk::Enum::YLeaf appletalk;
        static const ydk::Enum::YLeaf decnetIV;
        static const ydk::Enum::YLeaf banyanVines;
        static const ydk::Enum::YLeaf e164withNsap;
        static const ydk::Enum::YLeaf dns;
        static const ydk::Enum::YLeaf distinguishedname;
        static const ydk::Enum::YLeaf asnumber;
        static const ydk::Enum::YLeaf xtpoveripv4;
        static const ydk::Enum::YLeaf xtpoveripv6;
        static const ydk::Enum::YLeaf xtpnativemodextp;
        static const ydk::Enum::YLeaf reserved;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 0;
            if (name == "ipV4") return 1;
            if (name == "ipV6") return 2;
            if (name == "nsap") return 3;
            if (name == "hdlc") return 4;
            if (name == "bbn1822") return 5;
            if (name == "all802") return 6;
            if (name == "e163") return 7;
            if (name == "e164") return 8;
            if (name == "f69") return 9;
            if (name == "x121") return 10;
            if (name == "ipx") return 11;
            if (name == "appletalk") return 12;
            if (name == "decnetIV") return 13;
            if (name == "banyanVines") return 14;
            if (name == "e164withNsap") return 15;
            if (name == "dns") return 16;
            if (name == "distinguishedname") return 17;
            if (name == "asnumber") return 18;
            if (name == "xtpoveripv4") return 19;
            if (name == "xtpoveripv6") return 20;
            if (name == "xtpnativemodextp") return 21;
            if (name == "reserved") return 65535;
            return -1;
        }
};


}
}

#endif /* _IANA_ADDRESS_FAMILY_NUMBERS_MIB_ */

