#ifndef _IANA_ADDRESS_FAMILY_NUMBERS_MIB_
#define _IANA_ADDRESS_FAMILY_NUMBERS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace IANA_ADDRESS_FAMILY_NUMBERS_MIB {

class Addressfamilynumbers : public ydk::Enum
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

};


}
}

#endif /* _IANA_ADDRESS_FAMILY_NUMBERS_MIB_ */

