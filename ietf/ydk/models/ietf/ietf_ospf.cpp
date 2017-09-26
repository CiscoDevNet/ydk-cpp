
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_ospf.hpp"

using namespace ydk;

namespace ietf {
namespace ietf_ospf {

AreaType::AreaType()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-ospf", "ietf-ospf", "ietf-ospf:area-type")
{

}

AreaType::~AreaType()
{
}

IfLinkType::IfLinkType()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-ospf", "ietf-ospf", "ietf-ospf:if-link-type")
{

}

IfLinkType::~IfLinkType()
{
}

OperationMode::OperationMode()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-ospf", "ietf-ospf", "ietf-ospf:operation-mode")
{

}

OperationMode::~OperationMode()
{
}

Ospf::Ospf()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-ospf", "ietf-ospf", "ietf-ospf:ospf")
{

}

Ospf::~Ospf()
{
}

Ospfv2::Ospfv2()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-ospf", "ietf-ospf", "ietf-ospf:ospfv2")
{

}

Ospfv2::~Ospfv2()
{
}

Ospfv3::Ospfv3()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-ospf", "ietf-ospf", "ietf-ospf:ospfv3")
{

}

Ospfv3::~Ospfv3()
{
}

IfLinkTypeNormal::IfLinkTypeNormal()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-ospf", "ietf-ospf", "ietf-ospf:if-link-type-normal")
{

}

IfLinkTypeNormal::~IfLinkTypeNormal()
{
}

IfLinkTypeShamLink::IfLinkTypeShamLink()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-ospf", "ietf-ospf", "ietf-ospf:if-link-type-sham-link")
{

}

IfLinkTypeShamLink::~IfLinkTypeShamLink()
{
}

IfLinkTypeVirtualLink::IfLinkTypeVirtualLink()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-ospf", "ietf-ospf", "ietf-ospf:if-link-type-virtual-link")
{

}

IfLinkTypeVirtualLink::~IfLinkTypeVirtualLink()
{
}

Normal::Normal()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-ospf", "ietf-ospf", "ietf-ospf:normal")
{

}

Normal::~Normal()
{
}

Nssa::Nssa()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-ospf", "ietf-ospf", "ietf-ospf:nssa")
{

}

Nssa::~Nssa()
{
}

ShipsInTheNight::ShipsInTheNight()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-ospf", "ietf-ospf", "ietf-ospf:ships-in-the-night")
{

}

ShipsInTheNight::~ShipsInTheNight()
{
}

Stub::Stub()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-ospf", "ietf-ospf", "ietf-ospf:stub")
{

}

Stub::~Stub()
{
}

const Enum::YLeaf NbrStateType::Down {1, "Down"};
const Enum::YLeaf NbrStateType::Attempt {2, "Attempt"};
const Enum::YLeaf NbrStateType::Init {3, "Init"};
const Enum::YLeaf NbrStateType::Y_2_Way {4, "2-Way"};
const Enum::YLeaf NbrStateType::ExStart {5, "ExStart"};
const Enum::YLeaf NbrStateType::Exchange {6, "Exchange"};
const Enum::YLeaf NbrStateType::Loading {7, "Loading"};
const Enum::YLeaf NbrStateType::Full {8, "Full"};

const Enum::YLeaf PacketType::Hello {1, "Hello"};
const Enum::YLeaf PacketType::Database_Descripton {2, "Database-Descripton"};
const Enum::YLeaf PacketType::Link_State_Request {3, "Link-State-Request"};
const Enum::YLeaf PacketType::Link_State_Update {4, "Link-State-Update"};
const Enum::YLeaf PacketType::Link_State_Ack {5, "Link-State-Ack"};

const Enum::YLeaf NssaTranslatorStateType::Enabled {1, "Enabled"};
const Enum::YLeaf NssaTranslatorStateType::Elected {2, "Elected"};
const Enum::YLeaf NssaTranslatorStateType::Disabled {3, "Disabled"};

const Enum::YLeaf RestartExitReasonType::None {1, "None"};
const Enum::YLeaf RestartExitReasonType::InProgress {2, "InProgress"};
const Enum::YLeaf RestartExitReasonType::Completed {3, "Completed"};
const Enum::YLeaf RestartExitReasonType::TimedOut {4, "TimedOut"};
const Enum::YLeaf RestartExitReasonType::TopologyChanged {5, "TopologyChanged"};

const Enum::YLeaf RestartStatusType::Not_Restarting {1, "Not-Restarting"};
const Enum::YLeaf RestartStatusType::Planned_Restart {2, "Planned-Restart"};
const Enum::YLeaf RestartStatusType::Unplanned_Restart {3, "Unplanned-Restart"};

const Enum::YLeaf IfStateType::Down {1, "Down"};
const Enum::YLeaf IfStateType::Loopback {2, "Loopback"};
const Enum::YLeaf IfStateType::Waiting {3, "Waiting"};
const Enum::YLeaf IfStateType::Point_to_Point {4, "Point-to-Point"};
const Enum::YLeaf IfStateType::DR {5, "DR"};
const Enum::YLeaf IfStateType::BDR {6, "BDR"};
const Enum::YLeaf IfStateType::DR_Other {7, "DR-Other"};

const Enum::YLeaf RestartHelperStatusType::Not_Helping {1, "Not-Helping"};
const Enum::YLeaf RestartHelperStatusType::Helping {2, "Helping"};


}
}

