
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_isis_lsdb_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_isis_lsdb_types {

ISISTLVTYPE::ISISTLVTYPE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:ISIS_TLV_TYPE")
{

}

ISISTLVTYPE::~ISISTLVTYPE()
{
}

ISISSUBTLVTYPE::ISISSUBTLVTYPE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:ISIS_SUBTLV_TYPE")
{

}

ISISSUBTLVTYPE::~ISISSUBTLVTYPE()
{
}

ISREACHABILITYSUBTLVSTYPE::ISREACHABILITYSUBTLVSTYPE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_SUBTLVS_TYPE")
{

}

ISREACHABILITYSUBTLVSTYPE::~ISREACHABILITYSUBTLVSTYPE()
{
}

IPREACHABILITYSUBTLVSTYPE::IPREACHABILITYSUBTLVSTYPE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IP_REACHABILITY_SUBTLVS_TYPE")
{

}

IPREACHABILITYSUBTLVSTYPE::~IPREACHABILITYSUBTLVSTYPE()
{
}

ROUTERCAPABILITYSUBTLVSTYPE::ROUTERCAPABILITYSUBTLVSTYPE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:ROUTER_CAPABILITY_SUBTLVS_TYPE")
{

}

ROUTERCAPABILITYSUBTLVSTYPE::~ROUTERCAPABILITYSUBTLVSTYPE()
{
}

AREAADDRESSES::AREAADDRESSES()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:AREA_ADDRESSES")
{

}

AREAADDRESSES::~AREAADDRESSES()
{
}

IISNEIGHBORS::IISNEIGHBORS()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IIS_NEIGHBORS")
{

}

IISNEIGHBORS::~IISNEIGHBORS()
{
}

INSTANCEID::INSTANCEID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:INSTANCE_ID")
{

}

INSTANCEID::~INSTANCEID()
{
}

AUTHENTICATION::AUTHENTICATION()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:AUTHENTICATION")
{

}

AUTHENTICATION::~AUTHENTICATION()
{
}

PURGEOI::PURGEOI()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:PURGE_OI")
{

}

PURGEOI::~PURGEOI()
{
}

EXTENDEDISREACHABILITY::EXTENDEDISREACHABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:EXTENDED_IS_REACHABILITY")
{

}

EXTENDEDISREACHABILITY::~EXTENDEDISREACHABILITY()
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

IPV4INTERNALREACHABILITY::IPV4INTERNALREACHABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV4_INTERNAL_REACHABILITY")
{

}

IPV4INTERNALREACHABILITY::~IPV4INTERNALREACHABILITY()
{
}

NLPID::NLPID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:NLPID")
{

}

NLPID::~NLPID()
{
}

IPV4EXTERNALREACHABILITY::IPV4EXTERNALREACHABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV4_EXTERNAL_REACHABILITY")
{

}

IPV4EXTERNALREACHABILITY::~IPV4EXTERNALREACHABILITY()
{
}

IPV4INTERFACEADDRESSES::IPV4INTERFACEADDRESSES()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV4_INTERFACE_ADDRESSES")
{

}

IPV4INTERFACEADDRESSES::~IPV4INTERFACEADDRESSES()
{
}

IPV4TEROUTERID::IPV4TEROUTERID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV4_TE_ROUTER_ID")
{

}

IPV4TEROUTERID::~IPV4TEROUTERID()
{
}

EXTENDEDIPV4REACHABILITY::EXTENDEDIPV4REACHABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:EXTENDED_IPV4_REACHABILITY")
{

}

EXTENDEDIPV4REACHABILITY::~EXTENDEDIPV4REACHABILITY()
{
}

DYNAMICNAME::DYNAMICNAME()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:DYNAMIC_NAME")
{

}

DYNAMICNAME::~DYNAMICNAME()
{
}

IPV4SRLG::IPV4SRLG()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV4_SRLG")
{

}

IPV4SRLG::~IPV4SRLG()
{
}

IPV6SRLG::IPV6SRLG()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV6_SRLG")
{

}

IPV6SRLG::~IPV6SRLG()
{
}

IPV6TEROUTERID::IPV6TEROUTERID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV6_TE_ROUTER_ID")
{

}

IPV6TEROUTERID::~IPV6TEROUTERID()
{
}

MTISN::MTISN()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:MT_ISN")
{

}

MTISN::~MTISN()
{
}

MTISNEIGHBORATTRIBUTE::MTISNEIGHBORATTRIBUTE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:MT_IS_NEIGHBOR_ATTRIBUTE")
{

}

MTISNEIGHBORATTRIBUTE::~MTISNEIGHBORATTRIBUTE()
{
}

MULTITOPOLOGY::MULTITOPOLOGY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:MULTI_TOPOLOGY")
{

}

MULTITOPOLOGY::~MULTITOPOLOGY()
{
}

IPV6INTERFACEADDRESSES::IPV6INTERFACEADDRESSES()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV6_INTERFACE_ADDRESSES")
{

}

IPV6INTERFACEADDRESSES::~IPV6INTERFACEADDRESSES()
{
}

MTIPV4REACHABILITY::MTIPV4REACHABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:MT_IPV4_REACHABILITY")
{

}

MTIPV4REACHABILITY::~MTIPV4REACHABILITY()
{
}

IPV6REACHABILITY::IPV6REACHABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IPV6_REACHABILITY")
{

}

IPV6REACHABILITY::~IPV6REACHABILITY()
{
}

MTIPV6REACHABILITY::MTIPV6REACHABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:MT_IPV6_REACHABILITY")
{

}

MTIPV6REACHABILITY::~MTIPV6REACHABILITY()
{
}

ROUTERCAPABILITY::ROUTERCAPABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:ROUTER_CAPABILITY")
{

}

ROUTERCAPABILITY::~ROUTERCAPABILITY()
{
}

ISREACHABILITYADMINGROUP::ISREACHABILITYADMINGROUP()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_ADMIN_GROUP")
{

}

ISREACHABILITYADMINGROUP::~ISREACHABILITYADMINGROUP()
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

ISREACHABILITYMAXLINKBANDWIDTH::ISREACHABILITYMAXLINKBANDWIDTH()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_MAX_LINK_BANDWIDTH")
{

}

ISREACHABILITYMAXLINKBANDWIDTH::~ISREACHABILITYMAXLINKBANDWIDTH()
{
}

ISREACHABILITYMAXRESERVABLEBANDWIDTH::ISREACHABILITYMAXRESERVABLEBANDWIDTH()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_MAX_RESERVABLE_BANDWIDTH")
{

}

ISREACHABILITYMAXRESERVABLEBANDWIDTH::~ISREACHABILITYMAXRESERVABLEBANDWIDTH()
{
}

ISREACHABILITYUNRESERVEDBANDWIDTH::ISREACHABILITYUNRESERVEDBANDWIDTH()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_UNRESERVED_BANDWIDTH")
{

}

ISREACHABILITYUNRESERVEDBANDWIDTH::~ISREACHABILITYUNRESERVEDBANDWIDTH()
{
}

ISREACHABILITYIPV6INTERFACEADDRESS::ISREACHABILITYIPV6INTERFACEADDRESS()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_IPV6_INTERFACE_ADDRESS")
{

}

ISREACHABILITYIPV6INTERFACEADDRESS::~ISREACHABILITYIPV6INTERFACEADDRESS()
{
}

ISREACHABILITYIPV6NEIGHBORADDRESS::ISREACHABILITYIPV6NEIGHBORADDRESS()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_IPV6_NEIGHBOR_ADDRESS")
{

}

ISREACHABILITYIPV6NEIGHBORADDRESS::~ISREACHABILITYIPV6NEIGHBORADDRESS()
{
}

ISREACHABILITYEXTENDEDADMINGROUP::ISREACHABILITYEXTENDEDADMINGROUP()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_EXTENDED_ADMIN_GROUP")
{

}

ISREACHABILITYEXTENDEDADMINGROUP::~ISREACHABILITYEXTENDEDADMINGROUP()
{
}

ISREACHABILITYTEDEFAULTMETRIC::ISREACHABILITYTEDEFAULTMETRIC()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_TE_DEFAULT_METRIC")
{

}

ISREACHABILITYTEDEFAULTMETRIC::~ISREACHABILITYTEDEFAULTMETRIC()
{
}

ISREACHABILITYLINKATTRIBUTES::ISREACHABILITYLINKATTRIBUTES()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_LINK_ATTRIBUTES")
{

}

ISREACHABILITYLINKATTRIBUTES::~ISREACHABILITYLINKATTRIBUTES()
{
}

ISREACHABILITYLINKPROTECTIONTYPE::ISREACHABILITYLINKPROTECTIONTYPE()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_LINK_PROTECTION_TYPE")
{

}

ISREACHABILITYLINKPROTECTIONTYPE::~ISREACHABILITYLINKPROTECTIONTYPE()
{
}

ISREACHABILITYBANDWIDTHCONSTRAINTS::ISREACHABILITYBANDWIDTHCONSTRAINTS()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_BANDWIDTH_CONSTRAINTS")
{

}

ISREACHABILITYBANDWIDTHCONSTRAINTS::~ISREACHABILITYBANDWIDTHCONSTRAINTS()
{
}

ISREACHABILITYUNCONSTRAINEDLSP::ISREACHABILITYUNCONSTRAINEDLSP()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_UNCONSTRAINED_LSP")
{

}

ISREACHABILITYUNCONSTRAINEDLSP::~ISREACHABILITYUNCONSTRAINEDLSP()
{
}

ISREACHABILITYADJSID::ISREACHABILITYADJSID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_ADJ_SID")
{

}

ISREACHABILITYADJSID::~ISREACHABILITYADJSID()
{
}

ISREACHABILITYADJLANSID::ISREACHABILITYADJLANSID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_ADJ_LAN_SID")
{

}

ISREACHABILITYADJLANSID::~ISREACHABILITYADJLANSID()
{
}

ISREACHABILITYLINKDELAY::ISREACHABILITYLINKDELAY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_LINK_DELAY")
{

}

ISREACHABILITYLINKDELAY::~ISREACHABILITYLINKDELAY()
{
}

ISREACHABILITYMINMAXLINKDELAY::ISREACHABILITYMINMAXLINKDELAY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_MIN_MAX_LINK_DELAY")
{

}

ISREACHABILITYMINMAXLINKDELAY::~ISREACHABILITYMINMAXLINKDELAY()
{
}

ISREACHABILITYLINKDELAYVARIATION::ISREACHABILITYLINKDELAYVARIATION()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_LINK_DELAY_VARIATION")
{

}

ISREACHABILITYLINKDELAYVARIATION::~ISREACHABILITYLINKDELAYVARIATION()
{
}

ISREACHABILITYLINKLOSS::ISREACHABILITYLINKLOSS()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_LINK_LOSS")
{

}

ISREACHABILITYLINKLOSS::~ISREACHABILITYLINKLOSS()
{
}

ISREACHABILITYRESIDUALBANDWIDTH::ISREACHABILITYRESIDUALBANDWIDTH()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_RESIDUAL_BANDWIDTH")
{

}

ISREACHABILITYRESIDUALBANDWIDTH::~ISREACHABILITYRESIDUALBANDWIDTH()
{
}

ISREACHABILITYAVAILABLEBANDWIDTH::ISREACHABILITYAVAILABLEBANDWIDTH()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_AVAILABLE_BANDWIDTH")
{

}

ISREACHABILITYAVAILABLEBANDWIDTH::~ISREACHABILITYAVAILABLEBANDWIDTH()
{
}

ISREACHABILITYUTILIZEDBANDWIDTH::ISREACHABILITYUTILIZEDBANDWIDTH()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IS_REACHABILITY_UTILIZED_BANDWIDTH")
{

}

ISREACHABILITYUTILIZEDBANDWIDTH::~ISREACHABILITYUTILIZEDBANDWIDTH()
{
}

IPREACHABILITYTAG::IPREACHABILITYTAG()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IP_REACHABILITY_TAG")
{

}

IPREACHABILITYTAG::~IPREACHABILITYTAG()
{
}

IPREACHABILITYTAG64::IPREACHABILITYTAG64()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IP_REACHABILITY_TAG64")
{

}

IPREACHABILITYTAG64::~IPREACHABILITYTAG64()
{
}

IPREACHABILITYPREFIXSID::IPREACHABILITYPREFIXSID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IP_REACHABILITY_PREFIX_SID")
{

}

IPREACHABILITYPREFIXSID::~IPREACHABILITYPREFIXSID()
{
}

IPREACHABILITYPREFIXFLAGS::IPREACHABILITYPREFIXFLAGS()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IP_REACHABILITY_PREFIX_FLAGS")
{

}

IPREACHABILITYPREFIXFLAGS::~IPREACHABILITYPREFIXFLAGS()
{
}

IPREACHABILITYIPV4ROUTERID::IPREACHABILITYIPV4ROUTERID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IP_REACHABILITY_IPV4_ROUTER_ID")
{

}

IPREACHABILITYIPV4ROUTERID::~IPREACHABILITYIPV4ROUTERID()
{
}

IPREACHABILITYIPV6ROUTERID::IPREACHABILITYIPV6ROUTERID()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:IP_REACHABILITY_IPV6_ROUTER_ID")
{

}

IPREACHABILITYIPV6ROUTERID::~IPREACHABILITYIPV6ROUTERID()
{
}

ROUTERCAPABILITYSRCAPABILITY::ROUTERCAPABILITYSRCAPABILITY()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:ROUTER_CAPABILITY_SR_CAPABILITY")
{

}

ROUTERCAPABILITYSRCAPABILITY::~ROUTERCAPABILITYSRCAPABILITY()
{
}

ROUTERCAPABILITYSRALGORITHM::ROUTERCAPABILITYSRALGORITHM()
     : Identity("http://openconfig.net/yang/isis-lsdb-types", "openconfig-isis-lsdb-types", "openconfig-isis-lsdb-types:ROUTER_CAPABILITY_SR_ALGORITHM")
{

}

ROUTERCAPABILITYSRALGORITHM::~ROUTERCAPABILITYSRALGORITHM()
{
}


}
}

