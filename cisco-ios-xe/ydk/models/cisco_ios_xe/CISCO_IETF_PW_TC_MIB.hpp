#ifndef _CISCO_IETF_PW_TC_MIB_
#define _CISCO_IETF_PW_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IETF_PW_TC_MIB {

class Cpwvctype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf frameRelay;
        static const ydk::Enum::YLeaf atmAal5Vcc;
        static const ydk::Enum::YLeaf atmTransparent;
        static const ydk::Enum::YLeaf ethernetVLAN;
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf hdlc;
        static const ydk::Enum::YLeaf ppp;
        static const ydk::Enum::YLeaf cep;
        static const ydk::Enum::YLeaf atmVccCell;
        static const ydk::Enum::YLeaf atmVpcCell;
        static const ydk::Enum::YLeaf ethernetVPLS;
        static const ydk::Enum::YLeaf e1Satop;
        static const ydk::Enum::YLeaf t1Satop;
        static const ydk::Enum::YLeaf e3Satop;
        static const ydk::Enum::YLeaf t3Satop;
        static const ydk::Enum::YLeaf basicCesPsn;
        static const ydk::Enum::YLeaf basicTdmIp;
        static const ydk::Enum::YLeaf tdmCasCesPsn;
        static const ydk::Enum::YLeaf tdmCasTdmIp;

};

class Cpwoperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf dormant;
        static const ydk::Enum::YLeaf notPresent;
        static const ydk::Enum::YLeaf lowerLayerDown;

};


}
}

#endif /* _CISCO_IETF_PW_TC_MIB_ */

