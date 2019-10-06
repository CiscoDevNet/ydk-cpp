
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_isis_lsdb_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_isis_lsdb_types {

ISISSUBTLVTYPE::ISISSUBTLVTYPE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:ISIS_SUBTLV_TYPE")
{

}

ISISSUBTLVTYPE::~ISISSUBTLVTYPE()
{
}

ISISTLVTYPE::ISISTLVTYPE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:ISIS_TLV_TYPE")
{

}

ISISTLVTYPE::~ISISTLVTYPE()
{
}

AREAADDRESSES::AREAADDRESSES()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:AREA_ADDRESSES")
{

}

AREAADDRESSES::~AREAADDRESSES()
{
}

ISREACHABILITYSUBTLVSTYPE::ISREACHABILITYSUBTLVSTYPE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_SUBTLVS_TYPE")
{

}

ISREACHABILITYSUBTLVSTYPE::~ISREACHABILITYSUBTLVSTYPE()
{
}

ISREACHABILITYLINKLOSS::ISREACHABILITYLINKLOSS()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_LINK_LOSS")
{

}

ISREACHABILITYLINKLOSS::~ISREACHABILITYLINKLOSS()
{
}

MTISNEIGHBORATTRIBUTE::MTISNEIGHBORATTRIBUTE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:MT_IS_NEIGHBOR_ATTRIBUTE")
{

}

MTISNEIGHBORATTRIBUTE::~MTISNEIGHBORATTRIBUTE()
{
}

ISREACHABILITYIPV4INTERFACEADDRESS::ISREACHABILITYIPV4INTERFACEADDRESS()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_IPV4_INTERFACE_ADDRESS")
{

}

ISREACHABILITYIPV4INTERFACEADDRESS::~ISREACHABILITYIPV4INTERFACEADDRESS()
{
}

ISREACHABILITYIPV4NEIGHBORADDRESS::ISREACHABILITYIPV4NEIGHBORADDRESS()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_IPV4_NEIGHBOR_ADDRESS")
{

}

ISREACHABILITYIPV4NEIGHBORADDRESS::~ISREACHABILITYIPV4NEIGHBORADDRESS()
{
}

ISREACHABILITYEXTENDEDADMINGROUP::ISREACHABILITYEXTENDEDADMINGROUP()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_EXTENDED_ADMIN_GROUP")
{

}

ISREACHABILITYEXTENDEDADMINGROUP::~ISREACHABILITYEXTENDEDADMINGROUP()
{
}

NLPID::NLPID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:NLPID")
{

}

NLPID::~NLPID()
{
}

MTIPV6REACHABILITY::MTIPV6REACHABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:MT_IPV6_REACHABILITY")
{

}

MTIPV6REACHABILITY::~MTIPV6REACHABILITY()
{
}

MTISN::MTISN()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:MT_ISN")
{

}

MTISN::~MTISN()
{
}

ISNEIGHBORATTRIBUTE::ISNEIGHBORATTRIBUTE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_NEIGHBOR_ATTRIBUTE")
{

}

ISNEIGHBORATTRIBUTE::~ISNEIGHBORATTRIBUTE()
{
}

ISISALIASID::ISISALIASID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:ISIS_ALIAS_ID")
{

}

ISISALIASID::~ISISALIASID()
{
}

IPV6SRLG::IPV6SRLG()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV6_SRLG")
{

}

IPV6SRLG::~IPV6SRLG()
{
}

ISREACHABILITYBANDWIDTHCONSTRAINTS::ISREACHABILITYBANDWIDTHCONSTRAINTS()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_BANDWIDTH_CONSTRAINTS")
{

}

ISREACHABILITYBANDWIDTHCONSTRAINTS::~ISREACHABILITYBANDWIDTHCONSTRAINTS()
{
}

IPV4TEROUTERID::IPV4TEROUTERID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV4_TE_ROUTER_ID")
{

}

IPV4TEROUTERID::~IPV4TEROUTERID()
{
}

ISREACHABILITYIPV6INTERFACEADDRESS::ISREACHABILITYIPV6INTERFACEADDRESS()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_IPV6_INTERFACE_ADDRESS")
{

}

ISREACHABILITYIPV6INTERFACEADDRESS::~ISREACHABILITYIPV6INTERFACEADDRESS()
{
}

ROUTERCAPABILITYSUBTLVSTYPE::ROUTERCAPABILITYSUBTLVSTYPE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:ROUTER_CAPABILITY_SUBTLVS_TYPE")
{

}

ROUTERCAPABILITYSUBTLVSTYPE::~ROUTERCAPABILITYSUBTLVSTYPE()
{
}

ISREACHABILITYADJSID::ISREACHABILITYADJSID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_ADJ_SID")
{

}

ISREACHABILITYADJSID::~ISREACHABILITYADJSID()
{
}

MULTITOPOLOGY::MULTITOPOLOGY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:MULTI_TOPOLOGY")
{

}

MULTITOPOLOGY::~MULTITOPOLOGY()
{
}

ISREACHABILITYLINKATTRIBUTES::ISREACHABILITYLINKATTRIBUTES()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_LINK_ATTRIBUTES")
{

}

ISREACHABILITYLINKATTRIBUTES::~ISREACHABILITYLINKATTRIBUTES()
{
}

IPV6INTERFACEADDRESSES::IPV6INTERFACEADDRESSES()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV6_INTERFACE_ADDRESSES")
{

}

IPV6INTERFACEADDRESSES::~IPV6INTERFACEADDRESSES()
{
}

DYNAMICNAME::DYNAMICNAME()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:DYNAMIC_NAME")
{

}

DYNAMICNAME::~DYNAMICNAME()
{
}

ISREACHABILITYAVAILABLEBANDWIDTH::ISREACHABILITYAVAILABLEBANDWIDTH()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_AVAILABLE_BANDWIDTH")
{

}

ISREACHABILITYAVAILABLEBANDWIDTH::~ISREACHABILITYAVAILABLEBANDWIDTH()
{
}

IPV4INTERFACEADDRESSES::IPV4INTERFACEADDRESSES()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV4_INTERFACE_ADDRESSES")
{

}

IPV4INTERFACEADDRESSES::~IPV4INTERFACEADDRESSES()
{
}

IPV6TEROUTERID::IPV6TEROUTERID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV6_TE_ROUTER_ID")
{

}

IPV6TEROUTERID::~IPV6TEROUTERID()
{
}

INSTANCEID::INSTANCEID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:INSTANCE_ID")
{

}

INSTANCEID::~INSTANCEID()
{
}

ISREACHABILITYADJLANSID::ISREACHABILITYADJLANSID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_ADJ_LAN_SID")
{

}

ISREACHABILITYADJLANSID::~ISREACHABILITYADJLANSID()
{
}

MTIPV4REACHABILITY::MTIPV4REACHABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:MT_IPV4_REACHABILITY")
{

}

MTIPV4REACHABILITY::~MTIPV4REACHABILITY()
{
}

ISREACHABILITYUTILIZEDBANDWIDTH::ISREACHABILITYUTILIZEDBANDWIDTH()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_UTILIZED_BANDWIDTH")
{

}

ISREACHABILITYUTILIZEDBANDWIDTH::~ISREACHABILITYUTILIZEDBANDWIDTH()
{
}

IPREACHABILITYSUBTLVSTYPE::IPREACHABILITYSUBTLVSTYPE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IP_REACHABILITY_SUBTLVS_TYPE")
{

}

IPREACHABILITYSUBTLVSTYPE::~IPREACHABILITYSUBTLVSTYPE()
{
}

ISREACHABILITYMINMAXLINKDELAY::ISREACHABILITYMINMAXLINKDELAY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_MIN_MAX_LINK_DELAY")
{

}

ISREACHABILITYMINMAXLINKDELAY::~ISREACHABILITYMINMAXLINKDELAY()
{
}

IPREACHABILITYPREFIXSID::IPREACHABILITYPREFIXSID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IP_REACHABILITY_PREFIX_SID")
{

}

IPREACHABILITYPREFIXSID::~IPREACHABILITYPREFIXSID()
{
}

EXTENDEDIPV4REACHABILITY::EXTENDEDIPV4REACHABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:EXTENDED_IPV4_REACHABILITY")
{

}

EXTENDEDIPV4REACHABILITY::~EXTENDEDIPV4REACHABILITY()
{
}

IPREACHABILITYPREFIXFLAGS::IPREACHABILITYPREFIXFLAGS()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IP_REACHABILITY_PREFIX_FLAGS")
{

}

IPREACHABILITYPREFIXFLAGS::~IPREACHABILITYPREFIXFLAGS()
{
}

ISREACHABILITYMAXRESERVABLEBANDWIDTH::ISREACHABILITYMAXRESERVABLEBANDWIDTH()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_MAX_RESERVABLE_BANDWIDTH")
{

}

ISREACHABILITYMAXRESERVABLEBANDWIDTH::~ISREACHABILITYMAXRESERVABLEBANDWIDTH()
{
}

PURGEOI::PURGEOI()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:PURGE_OI")
{

}

PURGEOI::~PURGEOI()
{
}

IPV4EXTERNALREACHABILITY::IPV4EXTERNALREACHABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV4_EXTERNAL_REACHABILITY")
{

}

IPV4EXTERNALREACHABILITY::~IPV4EXTERNALREACHABILITY()
{
}

IPV6REACHABILITY::IPV6REACHABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV6_REACHABILITY")
{

}

IPV6REACHABILITY::~IPV6REACHABILITY()
{
}

ISREACHABILITYMAXLINKBANDWIDTH::ISREACHABILITYMAXLINKBANDWIDTH()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_MAX_LINK_BANDWIDTH")
{

}

ISREACHABILITYMAXLINKBANDWIDTH::~ISREACHABILITYMAXLINKBANDWIDTH()
{
}

IPV4SRLG::IPV4SRLG()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV4_SRLG")
{

}

IPV4SRLG::~IPV4SRLG()
{
}

IPV4INTERNALREACHABILITY::IPV4INTERNALREACHABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV4_INTERNAL_REACHABILITY")
{

}

IPV4INTERNALREACHABILITY::~IPV4INTERNALREACHABILITY()
{
}

ISREACHABILITYUNRESERVEDBANDWIDTH::ISREACHABILITYUNRESERVEDBANDWIDTH()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_UNRESERVED_BANDWIDTH")
{

}

ISREACHABILITYUNRESERVEDBANDWIDTH::~ISREACHABILITYUNRESERVEDBANDWIDTH()
{
}

ROUTERCAPABILITYSRCAPABILITY::ROUTERCAPABILITYSRCAPABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:ROUTER_CAPABILITY_SR_CAPABILITY")
{

}

ROUTERCAPABILITYSRCAPABILITY::~ROUTERCAPABILITYSRCAPABILITY()
{
}

ROUTERCAPABILITY::ROUTERCAPABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:ROUTER_CAPABILITY")
{

}

ROUTERCAPABILITY::~ROUTERCAPABILITY()
{
}

EXTENDEDISREACHABILITY::EXTENDEDISREACHABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:EXTENDED_IS_REACHABILITY")
{

}

EXTENDEDISREACHABILITY::~EXTENDEDISREACHABILITY()
{
}

ISREACHABILITYADMINGROUP::ISREACHABILITYADMINGROUP()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_ADMIN_GROUP")
{

}

ISREACHABILITYADMINGROUP::~ISREACHABILITYADMINGROUP()
{
}

IPREACHABILITYTAG64::IPREACHABILITYTAG64()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IP_REACHABILITY_TAG64")
{

}

IPREACHABILITYTAG64::~IPREACHABILITYTAG64()
{
}

ISREACHABILITYLINKDELAY::ISREACHABILITYLINKDELAY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_LINK_DELAY")
{

}

ISREACHABILITYLINKDELAY::~ISREACHABILITYLINKDELAY()
{
}

ISREACHABILITYTEDEFAULTMETRIC::ISREACHABILITYTEDEFAULTMETRIC()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_TE_DEFAULT_METRIC")
{

}

ISREACHABILITYTEDEFAULTMETRIC::~ISREACHABILITYTEDEFAULTMETRIC()
{
}

AUTHENTICATION::AUTHENTICATION()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:AUTHENTICATION")
{

}

AUTHENTICATION::~AUTHENTICATION()
{
}

IISNEIGHBORS::IISNEIGHBORS()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IIS_NEIGHBORS")
{

}

IISNEIGHBORS::~IISNEIGHBORS()
{
}

ISREACHABILITYUNCONSTRAINEDLSP::ISREACHABILITYUNCONSTRAINEDLSP()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_UNCONSTRAINED_LSP")
{

}

ISREACHABILITYUNCONSTRAINEDLSP::~ISREACHABILITYUNCONSTRAINEDLSP()
{
}

ISREACHABILITYIPV6NEIGHBORADDRESS::ISREACHABILITYIPV6NEIGHBORADDRESS()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_IPV6_NEIGHBOR_ADDRESS")
{

}

ISREACHABILITYIPV6NEIGHBORADDRESS::~ISREACHABILITYIPV6NEIGHBORADDRESS()
{
}

ISREACHABILITYRESIDUALBANDWIDTH::ISREACHABILITYRESIDUALBANDWIDTH()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_RESIDUAL_BANDWIDTH")
{

}

ISREACHABILITYRESIDUALBANDWIDTH::~ISREACHABILITYRESIDUALBANDWIDTH()
{
}

ISREACHABILITYLINKDELAYVARIATION::ISREACHABILITYLINKDELAYVARIATION()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_LINK_DELAY_VARIATION")
{

}

ISREACHABILITYLINKDELAYVARIATION::~ISREACHABILITYLINKDELAYVARIATION()
{
}

ROUTERCAPABILITYSRALGORITHM::ROUTERCAPABILITYSRALGORITHM()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:ROUTER_CAPABILITY_SR_ALGORITHM")
{

}

ROUTERCAPABILITYSRALGORITHM::~ROUTERCAPABILITYSRALGORITHM()
{
}

IPREACHABILITYIPV6ROUTERID::IPREACHABILITYIPV6ROUTERID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IP_REACHABILITY_IPV6_ROUTER_ID")
{

}

IPREACHABILITYIPV6ROUTERID::~IPREACHABILITYIPV6ROUTERID()
{
}

ISREACHABILITYLINKPROTECTIONTYPE::ISREACHABILITYLINKPROTECTIONTYPE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_LINK_PROTECTION_TYPE")
{

}

ISREACHABILITYLINKPROTECTIONTYPE::~ISREACHABILITYLINKPROTECTIONTYPE()
{
}

IPREACHABILITYTAG::IPREACHABILITYTAG()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IP_REACHABILITY_TAG")
{

}

IPREACHABILITYTAG::~IPREACHABILITYTAG()
{
}

IPREACHABILITYIPV4ROUTERID::IPREACHABILITYIPV4ROUTERID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IP_REACHABILITY_IPV4_ROUTER_ID")
{

}

IPREACHABILITYIPV4ROUTERID::~IPREACHABILITYIPV4ROUTERID()
{
}


}
}

