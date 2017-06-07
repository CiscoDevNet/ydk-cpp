#ifndef _MPLS_TC_STD_MIB_
#define _MPLS_TC_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace MPLS_TC_STD_MIB {

class MplslabeldistributionmethodEnum : public Enum
{
    public:
        static const Enum::YLeaf downstreamOnDemand;
        static const Enum::YLeaf downstreamUnsolicited;

};

class MplsretentionmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf conservative;
        static const Enum::YLeaf liberal;

};

class MplsldplabeltypeEnum : public Enum
{
    public:
        static const Enum::YLeaf generic;
        static const Enum::YLeaf atm;
        static const Enum::YLeaf frameRelay;

};

class TehopaddresstypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf asnumber;
        static const Enum::YLeaf unnum;
        static const Enum::YLeaf lspid;

};

class MplslsptypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf terminatingLsp;
        static const Enum::YLeaf originatingLsp;
        static const Enum::YLeaf crossConnectingLsp;

};

class MplsownerEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf other;
        static const Enum::YLeaf snmp;
        static const Enum::YLeaf ldp;
        static const Enum::YLeaf crldp;
        static const Enum::YLeaf rsvpTe;
        static const Enum::YLeaf policyAgent;

};


}
}

#endif /* _MPLS_TC_STD_MIB_ */

