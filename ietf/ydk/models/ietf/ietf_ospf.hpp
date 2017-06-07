#ifndef _IETF_OSPF_
#define _IETF_OSPF_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ietf_routing.hpp"

namespace ydk {
namespace ietf_ospf {

class IfLinkTypeIdentity : public virtual Identity
{
    public:
        IfLinkTypeIdentity();
        ~IfLinkTypeIdentity();


}; // IfLinkTypeIdentity

class AreaTypeIdentity : public virtual Identity
{
    public:
        AreaTypeIdentity();
        ~AreaTypeIdentity();


}; // AreaTypeIdentity

class Ospfv3Identity : public ietf_routing::RoutingProtocolIdentity, virtual Identity
{
    public:
        Ospfv3Identity();
        ~Ospfv3Identity();


}; // Ospfv3Identity

class Ospfv2Identity : public ietf_routing::RoutingProtocolIdentity, virtual Identity
{
    public:
        Ospfv2Identity();
        ~Ospfv2Identity();


}; // Ospfv2Identity

class OperationModeIdentity : public virtual Identity
{
    public:
        OperationModeIdentity();
        ~OperationModeIdentity();


}; // OperationModeIdentity

class OspfIdentity : public ietf_routing::RoutingProtocolIdentity, virtual Identity
{
    public:
        OspfIdentity();
        ~OspfIdentity();


}; // OspfIdentity

class NormalIdentity : public ietf_ospf::AreaTypeIdentity, virtual Identity
{
    public:
        NormalIdentity();
        ~NormalIdentity();


}; // NormalIdentity

class NssaIdentity : public ietf_ospf::AreaTypeIdentity, virtual Identity
{
    public:
        NssaIdentity();
        ~NssaIdentity();


}; // NssaIdentity

class ShipsInTheNightIdentity : public ietf_ospf::OperationModeIdentity, virtual Identity
{
    public:
        ShipsInTheNightIdentity();
        ~ShipsInTheNightIdentity();


}; // ShipsInTheNightIdentity

class StubIdentity : public ietf_ospf::AreaTypeIdentity, virtual Identity
{
    public:
        StubIdentity();
        ~StubIdentity();


}; // StubIdentity

class IfLinkTypeVirtualLinkIdentity : public ietf_ospf::IfLinkTypeIdentity, virtual Identity
{
    public:
        IfLinkTypeVirtualLinkIdentity();
        ~IfLinkTypeVirtualLinkIdentity();


}; // IfLinkTypeVirtualLinkIdentity

class IfLinkTypeNormalIdentity : public ietf_ospf::IfLinkTypeIdentity, virtual Identity
{
    public:
        IfLinkTypeNormalIdentity();
        ~IfLinkTypeNormalIdentity();


}; // IfLinkTypeNormalIdentity

class IfLinkTypeShamLinkIdentity : public ietf_ospf::IfLinkTypeIdentity, virtual Identity
{
    public:
        IfLinkTypeShamLinkIdentity();
        ~IfLinkTypeShamLinkIdentity();


}; // IfLinkTypeShamLinkIdentity

class NbrStateTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Down;
        static const Enum::YLeaf Attempt;
        static const Enum::YLeaf Init;
        static const Enum::YLeaf Y_2_Way;
        static const Enum::YLeaf ExStart;
        static const Enum::YLeaf Exchange;
        static const Enum::YLeaf Loading;
        static const Enum::YLeaf Full;

};

class IfStateTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Down;
        static const Enum::YLeaf Loopback;
        static const Enum::YLeaf Waiting;
        static const Enum::YLeaf Point_to_Point;
        static const Enum::YLeaf DR;
        static const Enum::YLeaf BDR;
        static const Enum::YLeaf DR_Other;

};

class PacketTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Hello;
        static const Enum::YLeaf Database_Descripton;
        static const Enum::YLeaf Link_State_Request;
        static const Enum::YLeaf Link_State_Update;
        static const Enum::YLeaf Link_State_Ack;

};

class RestartExitReasonTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf None;
        static const Enum::YLeaf InProgress;
        static const Enum::YLeaf Completed;
        static const Enum::YLeaf TimedOut;
        static const Enum::YLeaf TopologyChanged;

};

class NssaTranslatorStateTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Enabled;
        static const Enum::YLeaf Elected;
        static const Enum::YLeaf Disabled;

};

class RestartHelperStatusTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Not_Helping;
        static const Enum::YLeaf Helping;

};

class RestartStatusTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Not_Restarting;
        static const Enum::YLeaf Planned_Restart;
        static const Enum::YLeaf Unplanned_Restart;

};


}
}

#endif /* _IETF_OSPF_ */

