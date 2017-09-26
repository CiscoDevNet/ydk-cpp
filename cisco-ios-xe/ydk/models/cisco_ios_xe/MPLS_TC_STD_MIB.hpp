#ifndef _MPLS_TC_STD_MIB_
#define _MPLS_TC_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace MPLS_TC_STD_MIB {

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

};

class MplsLspType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf terminatingLsp;
        static const ydk::Enum::YLeaf originatingLsp;
        static const ydk::Enum::YLeaf crossConnectingLsp;

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

};

class MplsRetentionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf conservative;
        static const ydk::Enum::YLeaf liberal;

};

class MplsLabelDistributionMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downstreamOnDemand;
        static const ydk::Enum::YLeaf downstreamUnsolicited;

};

class MplsLdpLabelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf generic;
        static const ydk::Enum::YLeaf atm;
        static const ydk::Enum::YLeaf frameRelay;

};


}
}

#endif /* _MPLS_TC_STD_MIB_ */

