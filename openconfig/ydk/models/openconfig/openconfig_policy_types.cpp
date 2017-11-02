
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_policy_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_policy_types {

ATTRIBUTECOMPARISON::ATTRIBUTECOMPARISON()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:ATTRIBUTE_COMPARISON")
{

}

ATTRIBUTECOMPARISON::~ATTRIBUTECOMPARISON()
{
}

INSTALLPROTOCOLTYPE::INSTALLPROTOCOLTYPE()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:INSTALL_PROTOCOL_TYPE")
{

}

INSTALLPROTOCOLTYPE::~INSTALLPROTOCOLTYPE()
{
}

ATTRIBUTEEQ::ATTRIBUTEEQ()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:ATTRIBUTE_EQ")
{

}

ATTRIBUTEEQ::~ATTRIBUTEEQ()
{
}

ATTRIBUTEGE::ATTRIBUTEGE()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:ATTRIBUTE_GE")
{

}

ATTRIBUTEGE::~ATTRIBUTEGE()
{
}

ATTRIBUTELE::ATTRIBUTELE()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:ATTRIBUTE_LE")
{

}

ATTRIBUTELE::~ATTRIBUTELE()
{
}

BGP::BGP()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:BGP")
{

}

BGP::~BGP()
{
}

ISIS::ISIS()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:ISIS")
{

}

ISIS::~ISIS()
{
}

OSPF::OSPF()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:OSPF")
{

}

OSPF::~OSPF()
{
}

OSPF3::OSPF3()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:OSPF3")
{

}

OSPF3::~OSPF3()
{
}

STATIC_::STATIC_()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:STATIC")
{

}

STATIC_::~STATIC_()
{
}

DIRECTLYCONNECTED::DIRECTLYCONNECTED()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:DIRECTLY_CONNECTED")
{

}

DIRECTLYCONNECTED::~DIRECTLYCONNECTED()
{
}

LOCALAGGREGATE::LOCALAGGREGATE()
     : Identity("http://openconfig.net/yang/policy-types", "openconfig-policy-types", "openconfig-policy-types:LOCAL_AGGREGATE")
{

}

LOCALAGGREGATE::~LOCALAGGREGATE()
{
}

const Enum::YLeaf MatchSetOptionsType::ANY {0, "ANY"};
const Enum::YLeaf MatchSetOptionsType::ALL {1, "ALL"};
const Enum::YLeaf MatchSetOptionsType::INVERT {2, "INVERT"};

const Enum::YLeaf MatchSetOptionsRestrictedType::ANY {0, "ANY"};
const Enum::YLeaf MatchSetOptionsRestrictedType::INVERT {1, "INVERT"};


}
}

