
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "openconfig_policy_types.hpp"

namespace ydk {
namespace openconfig_policy_types {

InstallProtocolTypeIdentity::InstallProtocolTypeIdentity()
     : Identity("openconfig-policy-types:install-protocol-type")
{
}

InstallProtocolTypeIdentity::~InstallProtocolTypeIdentity()
{
}

AttributeComparisonIdentity::AttributeComparisonIdentity()
     : Identity("openconfig-policy-types:attribute-comparison")
{
}

AttributeComparisonIdentity::~AttributeComparisonIdentity()
{
}

IsisIdentity::IsisIdentity()
     : Identity("openconfig-policy-types:ISIS")
{
}

IsisIdentity::~IsisIdentity()
{
}

AttributeLeIdentity::AttributeLeIdentity()
     : Identity("openconfig-policy-types:attribute-le")
{
}

AttributeLeIdentity::~AttributeLeIdentity()
{
}

AttributeGeIdentity::AttributeGeIdentity()
     : Identity("openconfig-policy-types:attribute-ge")
{
}

AttributeGeIdentity::~AttributeGeIdentity()
{
}

BgpIdentity::BgpIdentity()
     : Identity("openconfig-policy-types:BGP")
{
}

BgpIdentity::~BgpIdentity()
{
}

DirectlyConnectedIdentity::DirectlyConnectedIdentity()
     : Identity("openconfig-policy-types:DIRECTLY-CONNECTED")
{
}

DirectlyConnectedIdentity::~DirectlyConnectedIdentity()
{
}

StaticIdentity::StaticIdentity()
     : Identity("openconfig-policy-types:STATIC")
{
}

StaticIdentity::~StaticIdentity()
{
}

LocalAggregateIdentity::LocalAggregateIdentity()
     : Identity("openconfig-policy-types:LOCAL-AGGREGATE")
{
}

LocalAggregateIdentity::~LocalAggregateIdentity()
{
}

AttributeEqIdentity::AttributeEqIdentity()
     : Identity("openconfig-policy-types:attribute-eq")
{
}

AttributeEqIdentity::~AttributeEqIdentity()
{
}

OspfIdentity::OspfIdentity()
     : Identity("openconfig-policy-types:OSPF")
{
}

OspfIdentity::~OspfIdentity()
{
}

Ospf3Identity::Ospf3Identity()
     : Identity("openconfig-policy-types:OSPF3")
{
}

Ospf3Identity::~Ospf3Identity()
{
}


const Enum::Value MatchSetOptionsRestrictedTypeEnum::ANY {0, "ANY"};
const Enum::Value MatchSetOptionsRestrictedTypeEnum::INVERT {1, "INVERT"};

const Enum::Value MatchSetOptionsTypeEnum::ANY {0, "ANY"};
const Enum::Value MatchSetOptionsTypeEnum::ALL {1, "ALL"};
const Enum::Value MatchSetOptionsTypeEnum::INVERT {2, "INVERT"};


}
}

