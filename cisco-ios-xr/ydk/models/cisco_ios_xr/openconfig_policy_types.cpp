
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_policy_types.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace openconfig_policy_types {

Attribute_Comparison::Attribute_Comparison()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:ATTRIBUTE_COMPARISON")
{
}

Attribute_Comparison::~Attribute_Comparison()
{
}

Install_Protocol_Type::Install_Protocol_Type()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:INSTALL_PROTOCOL_TYPE")
{
}

Install_Protocol_Type::~Install_Protocol_Type()
{
}

Isis::Isis()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:ISIS")
{
}

Isis::~Isis()
{
}

Local_Aggregate::Local_Aggregate()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:LOCAL_AGGREGATE")
{
}

Local_Aggregate::~Local_Aggregate()
{
}

Attribute_Eq::Attribute_Eq()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:ATTRIBUTE_EQ")
{
}

Attribute_Eq::~Attribute_Eq()
{
}

Ospf::Ospf()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:OSPF")
{
}

Ospf::~Ospf()
{
}

Directly_Connected::Directly_Connected()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:DIRECTLY_CONNECTED")
{
}

Directly_Connected::~Directly_Connected()
{
}

Attribute_Ge::Attribute_Ge()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:ATTRIBUTE_GE")
{
}

Attribute_Ge::~Attribute_Ge()
{
}

Bgp::Bgp()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:BGP")
{
}

Bgp::~Bgp()
{
}

Static_::Static_()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:STATIC")
{
}

Static_::~Static_()
{
}

Attribute_Le::Attribute_Le()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:ATTRIBUTE_LE")
{
}

Attribute_Le::~Attribute_Le()
{
}

Ospf3::Ospf3()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:OSPF3")
{
}

Ospf3::~Ospf3()
{
}

const Enum::YLeaf MatchSetOptionsRestrictedType::ANY {0, "ANY"};
const Enum::YLeaf MatchSetOptionsRestrictedType::INVERT {1, "INVERT"};

const Enum::YLeaf MatchSetOptionsType::ANY {0, "ANY"};
const Enum::YLeaf MatchSetOptionsType::ALL {1, "ALL"};
const Enum::YLeaf MatchSetOptionsType::INVERT {2, "INVERT"};


}
}

