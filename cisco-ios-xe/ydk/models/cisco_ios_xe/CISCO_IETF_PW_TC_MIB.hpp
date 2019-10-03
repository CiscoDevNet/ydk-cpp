#ifndef _CISCO_IETF_PW_TC_MIB_
#define _CISCO_IETF_PW_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IETF_PW_TC_MIB {

class CpwOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf dormant;
        static const ydk::Enum::YLeaf notPresent;
        static const ydk::Enum::YLeaf lowerLayerDown;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 1;
            if (name == "down") return 2;
            if (name == "testing") return 3;
            if (name == "unknown") return 4;
            if (name == "dormant") return 5;
            if (name == "notPresent") return 6;
            if (name == "lowerLayerDown") return 7;
            return -1;
        }
};

class CpwVcType : public ydk::Enum
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

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 0;
            if (name == "frameRelay") return 1;
            if (name == "atmAal5Vcc") return 2;
            if (name == "atmTransparent") return 3;
            if (name == "ethernetVLAN") return 4;
            if (name == "ethernet") return 5;
            if (name == "hdlc") return 6;
            if (name == "ppp") return 7;
            if (name == "cep") return 8;
            if (name == "atmVccCell") return 9;
            if (name == "atmVpcCell") return 10;
            if (name == "ethernetVPLS") return 11;
            if (name == "e1Satop") return 12;
            if (name == "t1Satop") return 13;
            if (name == "e3Satop") return 14;
            if (name == "t3Satop") return 15;
            if (name == "basicCesPsn") return 16;
            if (name == "basicTdmIp") return 17;
            if (name == "tdmCasCesPsn") return 18;
            if (name == "tdmCasTdmIp") return 19;
            return -1;
        }
};


}
}

#endif /* _CISCO_IETF_PW_TC_MIB_ */

