#ifndef _IETF_OSPF_
#define _IETF_OSPF_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ietf_routing.hpp"

namespace ietf {
namespace ietf_ospf {

class IfLinkType : public virtual ydk::Identity
{
    public:
        IfLinkType();
        ~IfLinkType();


}; // IfLinkType

class AreaType : public virtual ydk::Identity
{
    public:
        AreaType();
        ~AreaType();


}; // AreaType

class Ospfv3 : public ietf::ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        Ospfv3();
        ~Ospfv3();


}; // Ospfv3

class Ospfv2 : public ietf::ietf_routing::RoutingProtocol, virtual ydk::Identity
{
    public:
        Ospfv2();
        ~Ospfv2();


}; // Ospfv2

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

class Normal : public ietf::ietf_ospf::AreaType, virtual ydk::Identity
{
    public:
        Normal();
        ~Normal();


}; // Normal

class Nssa : public ietf::ietf_ospf::AreaType, virtual ydk::Identity
{
    public:
        Nssa();
        ~Nssa();


}; // Nssa

class ShipsInTheNight : public ietf::ietf_ospf::OperationMode, virtual ydk::Identity
{
    public:
        ShipsInTheNight();
        ~ShipsInTheNight();


}; // ShipsInTheNight

class Stub : public ietf::ietf_ospf::AreaType, virtual ydk::Identity
{
    public:
        Stub();
        ~Stub();


}; // Stub

class IfLinkTypeVirtualLink : public ietf::ietf_ospf::IfLinkType, virtual ydk::Identity
{
    public:
        IfLinkTypeVirtualLink();
        ~IfLinkTypeVirtualLink();


}; // IfLinkTypeVirtualLink

class IfLinkTypeNormal : public ietf::ietf_ospf::IfLinkType, virtual ydk::Identity
{
    public:
        IfLinkTypeNormal();
        ~IfLinkTypeNormal();


}; // IfLinkTypeNormal

class IfLinkTypeShamLink : public ietf::ietf_ospf::IfLinkType, virtual ydk::Identity
{
    public:
        IfLinkTypeShamLink();
        ~IfLinkTypeShamLink();


}; // IfLinkTypeShamLink

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

        static int get_enum_value(const std::string & name) {
            if (name == "Down") return 1;
            if (name == "Attempt") return 2;
            if (name == "Init") return 3;
            if (name == "2-Way") return 4;
            if (name == "ExStart") return 5;
            if (name == "Exchange") return 6;
            if (name == "Loading") return 7;
            if (name == "Full") return 8;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Down") return 1;
            if (name == "Loopback") return 2;
            if (name == "Waiting") return 3;
            if (name == "Point-to-Point") return 4;
            if (name == "DR") return 5;
            if (name == "BDR") return 6;
            if (name == "DR-Other") return 7;
            return -1;
        }
};

class PacketType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Hello;
        static const ydk::Enum::YLeaf Database_Descripton;
        static const ydk::Enum::YLeaf Link_State_Request;
        static const ydk::Enum::YLeaf Link_State_Update;
        static const ydk::Enum::YLeaf Link_State_Ack;

        static int get_enum_value(const std::string & name) {
            if (name == "Hello") return 1;
            if (name == "Database-Descripton") return 2;
            if (name == "Link-State-Request") return 3;
            if (name == "Link-State-Update") return 4;
            if (name == "Link-State-Ack") return 5;
            return -1;
        }
};

class RestartExitReasonType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf None;
        static const ydk::Enum::YLeaf InProgress;
        static const ydk::Enum::YLeaf Completed;
        static const ydk::Enum::YLeaf TimedOut;
        static const ydk::Enum::YLeaf TopologyChanged;

        static int get_enum_value(const std::string & name) {
            if (name == "None") return 1;
            if (name == "InProgress") return 2;
            if (name == "Completed") return 3;
            if (name == "TimedOut") return 4;
            if (name == "TopologyChanged") return 5;
            return -1;
        }
};

class NssaTranslatorStateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Enabled;
        static const ydk::Enum::YLeaf Elected;
        static const ydk::Enum::YLeaf Disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "Enabled") return 1;
            if (name == "Elected") return 2;
            if (name == "Disabled") return 3;
            return -1;
        }
};

class RestartHelperStatusType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Not_Helping;
        static const ydk::Enum::YLeaf Helping;

        static int get_enum_value(const std::string & name) {
            if (name == "Not-Helping") return 1;
            if (name == "Helping") return 2;
            return -1;
        }
};

class RestartStatusType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Not_Restarting;
        static const ydk::Enum::YLeaf Planned_Restart;
        static const ydk::Enum::YLeaf Unplanned_Restart;

        static int get_enum_value(const std::string & name) {
            if (name == "Not-Restarting") return 1;
            if (name == "Planned-Restart") return 2;
            if (name == "Unplanned-Restart") return 3;
            return -1;
        }
};


}
}

#endif /* _IETF_OSPF_ */

