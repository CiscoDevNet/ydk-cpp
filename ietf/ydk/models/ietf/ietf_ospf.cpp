
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_ospf.hpp"

namespace ydk {
namespace ietf_ospf {

IfLinkTypeIdentity::IfLinkTypeIdentity()
     : Identity("ietf-ospf:if-link-type")
{
}

IfLinkTypeIdentity::~IfLinkTypeIdentity()
{
}

AreaTypeIdentity::AreaTypeIdentity()
     : Identity("ietf-ospf:area-type")
{
}

AreaTypeIdentity::~AreaTypeIdentity()
{
}

Ospfv3Identity::Ospfv3Identity()
     : Identity("ietf-ospf:ospfv3")
{
}

Ospfv3Identity::~Ospfv3Identity()
{
}

Ospfv2Identity::Ospfv2Identity()
     : Identity("ietf-ospf:ospfv2")
{
}

Ospfv2Identity::~Ospfv2Identity()
{
}

OperationModeIdentity::OperationModeIdentity()
     : Identity("ietf-ospf:operation-mode")
{
}

OperationModeIdentity::~OperationModeIdentity()
{
}

OspfIdentity::OspfIdentity()
     : Identity("ietf-ospf:ospf")
{
}

OspfIdentity::~OspfIdentity()
{
}

NormalIdentity::NormalIdentity()
     : Identity("ietf-ospf:normal")
{
}

NormalIdentity::~NormalIdentity()
{
}

NssaIdentity::NssaIdentity()
     : Identity("ietf-ospf:nssa")
{
}

NssaIdentity::~NssaIdentity()
{
}

ShipsInTheNightIdentity::ShipsInTheNightIdentity()
     : Identity("ietf-ospf:ships-in-the-night")
{
}

ShipsInTheNightIdentity::~ShipsInTheNightIdentity()
{
}

StubIdentity::StubIdentity()
     : Identity("ietf-ospf:stub")
{
}

StubIdentity::~StubIdentity()
{
}

IfLinkTypeVirtualLinkIdentity::IfLinkTypeVirtualLinkIdentity()
     : Identity("ietf-ospf:if-link-type-virtual-link")
{
}

IfLinkTypeVirtualLinkIdentity::~IfLinkTypeVirtualLinkIdentity()
{
}

IfLinkTypeNormalIdentity::IfLinkTypeNormalIdentity()
     : Identity("ietf-ospf:if-link-type-normal")
{
}

IfLinkTypeNormalIdentity::~IfLinkTypeNormalIdentity()
{
}

IfLinkTypeShamLinkIdentity::IfLinkTypeShamLinkIdentity()
     : Identity("ietf-ospf:if-link-type-sham-link")
{
}

IfLinkTypeShamLinkIdentity::~IfLinkTypeShamLinkIdentity()
{
}

const Enum::YLeaf NbrStateTypeEnum::Down {1, "Down"};
const Enum::YLeaf NbrStateTypeEnum::Attempt {2, "Attempt"};
const Enum::YLeaf NbrStateTypeEnum::Init {3, "Init"};
const Enum::YLeaf NbrStateTypeEnum::Y_2_Way {4, "2-Way"};
const Enum::YLeaf NbrStateTypeEnum::ExStart {5, "ExStart"};
const Enum::YLeaf NbrStateTypeEnum::Exchange {6, "Exchange"};
const Enum::YLeaf NbrStateTypeEnum::Loading {7, "Loading"};
const Enum::YLeaf NbrStateTypeEnum::Full {8, "Full"};

const Enum::YLeaf IfStateTypeEnum::Down {1, "Down"};
const Enum::YLeaf IfStateTypeEnum::Loopback {2, "Loopback"};
const Enum::YLeaf IfStateTypeEnum::Waiting {3, "Waiting"};
const Enum::YLeaf IfStateTypeEnum::Point_to_Point {4, "Point-to-Point"};
const Enum::YLeaf IfStateTypeEnum::DR {5, "DR"};
const Enum::YLeaf IfStateTypeEnum::BDR {6, "BDR"};
const Enum::YLeaf IfStateTypeEnum::DR_Other {7, "DR-Other"};

const Enum::YLeaf PacketTypeEnum::Hello {1, "Hello"};
const Enum::YLeaf PacketTypeEnum::Database_Descripton {2, "Database-Descripton"};
const Enum::YLeaf PacketTypeEnum::Link_State_Request {3, "Link-State-Request"};
const Enum::YLeaf PacketTypeEnum::Link_State_Update {4, "Link-State-Update"};
const Enum::YLeaf PacketTypeEnum::Link_State_Ack {5, "Link-State-Ack"};

const Enum::YLeaf RestartExitReasonTypeEnum::None {1, "None"};
const Enum::YLeaf RestartExitReasonTypeEnum::InProgress {2, "InProgress"};
const Enum::YLeaf RestartExitReasonTypeEnum::Completed {3, "Completed"};
const Enum::YLeaf RestartExitReasonTypeEnum::TimedOut {4, "TimedOut"};
const Enum::YLeaf RestartExitReasonTypeEnum::TopologyChanged {5, "TopologyChanged"};

const Enum::YLeaf NssaTranslatorStateTypeEnum::Enabled {1, "Enabled"};
const Enum::YLeaf NssaTranslatorStateTypeEnum::Elected {2, "Elected"};
const Enum::YLeaf NssaTranslatorStateTypeEnum::Disabled {3, "Disabled"};

const Enum::YLeaf RestartHelperStatusTypeEnum::Not_Helping {1, "Not-Helping"};
const Enum::YLeaf RestartHelperStatusTypeEnum::Helping {2, "Helping"};

const Enum::YLeaf RestartStatusTypeEnum::Not_Restarting {1, "Not-Restarting"};
const Enum::YLeaf RestartStatusTypeEnum::Planned_Restart {2, "Planned-Restart"};
const Enum::YLeaf RestartStatusTypeEnum::Unplanned_Restart {3, "Unplanned-Restart"};


}
}

