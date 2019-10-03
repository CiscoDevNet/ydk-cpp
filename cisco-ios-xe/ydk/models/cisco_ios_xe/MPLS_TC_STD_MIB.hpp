#ifndef _MPLS_TC_STD_MIB_
#define _MPLS_TC_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace MPLS_TC_STD_MIB {

class MplsLabelDistributionMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downstreamOnDemand;
        static const ydk::Enum::YLeaf downstreamUnsolicited;

        static int get_enum_value(const std::string & name) {
            if (name == "downstreamOnDemand") return 1;
            if (name == "downstreamUnsolicited") return 2;
            return -1;
        }
};

class MplsRetentionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf conservative;
        static const ydk::Enum::YLeaf liberal;

        static int get_enum_value(const std::string & name) {
            if (name == "conservative") return 1;
            if (name == "liberal") return 2;
            return -1;
        }
};

class MplsLdpLabelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf generic;
        static const ydk::Enum::YLeaf atm;
        static const ydk::Enum::YLeaf frameRelay;

        static int get_enum_value(const std::string & name) {
            if (name == "generic") return 1;
            if (name == "atm") return 2;
            if (name == "frameRelay") return 3;
            return -1;
        }
};

class TeHopAddressType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf asnumber;
        static const ydk::Enum::YLeaf unnum;
        static const ydk::Enum::YLeaf lspid;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            if (name == "asnumber") return 3;
            if (name == "unnum") return 4;
            if (name == "lspid") return 5;
            return -1;
        }
};

class MplsLspType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf terminatingLsp;
        static const ydk::Enum::YLeaf originatingLsp;
        static const ydk::Enum::YLeaf crossConnectingLsp;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "terminatingLsp") return 2;
            if (name == "originatingLsp") return 3;
            if (name == "crossConnectingLsp") return 4;
            return -1;
        }
};

class MplsOwner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf snmp;
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf crldp;
        static const ydk::Enum::YLeaf rsvpTe;
        static const ydk::Enum::YLeaf policyAgent;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "other") return 2;
            if (name == "snmp") return 3;
            if (name == "ldp") return 4;
            if (name == "crldp") return 5;
            if (name == "rsvpTe") return 6;
            if (name == "policyAgent") return 7;
            return -1;
        }
};


}
}

#endif /* _MPLS_TC_STD_MIB_ */

