#ifndef _CISCO_IETF_PW_TC_MIB_
#define _CISCO_IETF_PW_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_IETF_PW_TC_MIB {

class CpwoperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf testing;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf dormant;
        static const Enum::YLeaf notPresent;
        static const Enum::YLeaf lowerLayerDown;

};

class CpwvctypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf frameRelay;
        static const Enum::YLeaf atmAal5Vcc;
        static const Enum::YLeaf atmTransparent;
        static const Enum::YLeaf ethernetVLAN;
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf hdlc;
        static const Enum::YLeaf ppp;
        static const Enum::YLeaf cep;
        static const Enum::YLeaf atmVccCell;
        static const Enum::YLeaf atmVpcCell;
        static const Enum::YLeaf ethernetVPLS;
        static const Enum::YLeaf e1Satop;
        static const Enum::YLeaf t1Satop;
        static const Enum::YLeaf e3Satop;
        static const Enum::YLeaf t3Satop;
        static const Enum::YLeaf basicCesPsn;
        static const Enum::YLeaf basicTdmIp;
        static const Enum::YLeaf tdmCasCesPsn;
        static const Enum::YLeaf tdmCasTdmIp;

};


}
}

#endif /* _CISCO_IETF_PW_TC_MIB_ */

