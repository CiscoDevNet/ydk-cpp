#ifndef _IETF_OSPF_
#define _IETF_OSPF_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_routing.hpp"

namespace cisco_ios_xr {
namespace ietf_ospf {

class Ospfv2 : public ietf::ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        Ospfv2();
        ~Ospfv2();


}; // Ospfv2

class Ospfv3 : public ietf::ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        Ospfv3();
        ~Ospfv3();


}; // Ospfv3

class OperationMode : public virtual ydk::Identity
{
    public:
        OperationMode();
        ~OperationMode();


}; // OperationMode

class Ospf : public ietf::ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        Ospf();
        ~Ospf();


}; // Ospf

class AreaType : public virtual ydk::Identity
{
    public:
        AreaType();
        ~AreaType();


}; // AreaType

class IfLinkType : public virtual ydk::Identity
{
    public:
        IfLinkType();
        ~IfLinkType();


}; // IfLinkType

class ShipsInTheNight : public ietf_ospf::OperationMode, virtual ydk::Identity
{
    public:
        ShipsInTheNight();
        ~ShipsInTheNight();


}; // ShipsInTheNight

class IfLinkTypeNormal : public ietf_ospf::IfLinkType, virtual ydk::Identity
{
    public:
        IfLinkTypeNormal();
        ~IfLinkTypeNormal();


}; // IfLinkTypeNormal

class IfLinkTypeShamLink : public ietf_ospf::IfLinkType, virtual ydk::Identity
{
    public:
        IfLinkTypeShamLink();
        ~IfLinkTypeShamLink();


}; // IfLinkTypeShamLink

class Stub : public ietf_ospf::AreaType, virtual ydk::Identity
{
    public:
        Stub();
        ~Stub();


}; // Stub

class Nssa : public ietf_ospf::AreaType, virtual ydk::Identity
{
    public:
        Nssa();
        ~Nssa();


}; // Nssa

class IfLinkTypeVirtualLink : public ietf_ospf::IfLinkType, virtual ydk::Identity
{
    public:
        IfLinkTypeVirtualLink();
        ~IfLinkTypeVirtualLink();


}; // IfLinkTypeVirtualLink

class Normal : public ietf_ospf::AreaType, virtual ydk::Identity
{
    public:
        Normal();
        ~Normal();


}; // Normal

class RestartStatusType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Not_Restarting;
        static const ydk::Enum::YLeaf Planned_Restart;
        static const ydk::Enum::YLeaf Unplanned_Restart;

};

class IfStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Down;
        static const ydk::Enum::YLeaf Loopback;
        static const ydk::Enum::YLeaf Waiting;
        static const ydk::Enum::YLeaf Point_to_Point;
        static const ydk::Enum::YLeaf DR;
        static const ydk::Enum::YLeaf BDR;
        static const ydk::Enum::YLeaf DR_Other;

};

class RestartExitReasonType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf None;
        static const ydk::Enum::YLeaf InProgress;
        static const ydk::Enum::YLeaf Completed;
        static const ydk::Enum::YLeaf TimedOut;
        static const ydk::Enum::YLeaf TopologyChanged;

};

class NssaTranslatorStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Enabled;
        static const ydk::Enum::YLeaf Elected;
        static const ydk::Enum::YLeaf Disabled;

};

class PacketType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Hello;
        static const ydk::Enum::YLeaf Database_Descripton;
        static const ydk::Enum::YLeaf Link_State_Request;
        static const ydk::Enum::YLeaf Link_State_Update;
        static const ydk::Enum::YLeaf Link_State_Ack;

};

class RestartHelperStatusType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Not_Helping;
        static const ydk::Enum::YLeaf Helping;

};

class NbrStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Down;
        static const ydk::Enum::YLeaf Attempt;
        static const ydk::Enum::YLeaf Init;
        static const ydk::Enum::YLeaf Y_2_Way;
        static const ydk::Enum::YLeaf ExStart;
        static const ydk::Enum::YLeaf Exchange;
        static const ydk::Enum::YLeaf Loading;
        static const ydk::Enum::YLeaf Full;

};


}
}

#endif /* _IETF_OSPF_ */

