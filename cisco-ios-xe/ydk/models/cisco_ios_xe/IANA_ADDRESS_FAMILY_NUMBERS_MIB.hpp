#ifndef _IANA_ADDRESS_FAMILY_NUMBERS_MIB_
#define _IANA_ADDRESS_FAMILY_NUMBERS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace IANA_ADDRESS_FAMILY_NUMBERS_MIB {

class AddressfamilynumbersEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf ipV4;
        static const Enum::YLeaf ipV6;
        static const Enum::YLeaf nsap;
        static const Enum::YLeaf hdlc;
        static const Enum::YLeaf bbn1822;
        static const Enum::YLeaf all802;
        static const Enum::YLeaf e163;
        static const Enum::YLeaf e164;
        static const Enum::YLeaf f69;
        static const Enum::YLeaf x121;
        static const Enum::YLeaf ipx;
        static const Enum::YLeaf appletalk;
        static const Enum::YLeaf decnetIV;
        static const Enum::YLeaf banyanVines;
        static const Enum::YLeaf e164withNsap;
        static const Enum::YLeaf dns;
        static const Enum::YLeaf distinguishedname;
        static const Enum::YLeaf asnumber;
        static const Enum::YLeaf xtpoveripv4;
        static const Enum::YLeaf xtpoveripv6;
        static const Enum::YLeaf xtpnativemodextp;
        static const Enum::YLeaf reserved;

};


}
}

#endif /* _IANA_ADDRESS_FAMILY_NUMBERS_MIB_ */

