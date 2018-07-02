#ifndef _OPENCONFIG_ISIS_LSDB_TYPES_
#define _OPENCONFIG_ISIS_LSDB_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_isis_lsdb_types {

class ISISSUBTLVTYPE : public virtual ydk::Identity
{
    public:
        ISISSUBTLVTYPE();
        ~ISISSUBTLVTYPE();


}; // ISISSUBTLVTYPE

class ISISTLVTYPE : public virtual ydk::Identity
{
    public:
        ISISTLVTYPE();
        ~ISISTLVTYPE();


}; // ISISTLVTYPE

class AREAADDRESSES : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        AREAADDRESSES();
        ~AREAADDRESSES();


}; // AREAADDRESSES

class ISREACHABILITYSUBTLVSTYPE : public openconfig::openconfig_isis_lsdb_types::ISISSUBTLVTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYSUBTLVSTYPE();
        ~ISREACHABILITYSUBTLVSTYPE();


}; // ISREACHABILITYSUBTLVSTYPE

class ISREACHABILITYLINKLOSS : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYLINKLOSS();
        ~ISREACHABILITYLINKLOSS();


}; // ISREACHABILITYLINKLOSS

class MTISNEIGHBORATTRIBUTE : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        MTISNEIGHBORATTRIBUTE();
        ~MTISNEIGHBORATTRIBUTE();


}; // MTISNEIGHBORATTRIBUTE

class ISREACHABILITYIPV4INTERFACEADDRESS : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYIPV4INTERFACEADDRESS();
        ~ISREACHABILITYIPV4INTERFACEADDRESS();


}; // ISREACHABILITYIPV4INTERFACEADDRESS

class ISREACHABILITYIPV4NEIGHBORADDRESS : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYIPV4NEIGHBORADDRESS();
        ~ISREACHABILITYIPV4NEIGHBORADDRESS();


}; // ISREACHABILITYIPV4NEIGHBORADDRESS

class ISREACHABILITYEXTENDEDADMINGROUP : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYEXTENDEDADMINGROUP();
        ~ISREACHABILITYEXTENDEDADMINGROUP();


}; // ISREACHABILITYEXTENDEDADMINGROUP

class NLPID : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        NLPID();
        ~NLPID();


}; // NLPID

class MTIPV6REACHABILITY : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        MTIPV6REACHABILITY();
        ~MTIPV6REACHABILITY();


}; // MTIPV6REACHABILITY

class MTISN : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        MTISN();
        ~MTISN();


}; // MTISN

class ISNEIGHBORATTRIBUTE : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        ISNEIGHBORATTRIBUTE();
        ~ISNEIGHBORATTRIBUTE();


}; // ISNEIGHBORATTRIBUTE

class ISISALIASID : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        ISISALIASID();
        ~ISISALIASID();


}; // ISISALIASID

class IPV6SRLG : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        IPV6SRLG();
        ~IPV6SRLG();


}; // IPV6SRLG

class ISREACHABILITYBANDWIDTHCONSTRAINTS : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYBANDWIDTHCONSTRAINTS();
        ~ISREACHABILITYBANDWIDTHCONSTRAINTS();


}; // ISREACHABILITYBANDWIDTHCONSTRAINTS

class IPV4TEROUTERID : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        IPV4TEROUTERID();
        ~IPV4TEROUTERID();


}; // IPV4TEROUTERID

class ISREACHABILITYIPV6INTERFACEADDRESS : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYIPV6INTERFACEADDRESS();
        ~ISREACHABILITYIPV6INTERFACEADDRESS();


}; // ISREACHABILITYIPV6INTERFACEADDRESS

class ROUTERCAPABILITYSUBTLVSTYPE : public openconfig::openconfig_isis_lsdb_types::ISISSUBTLVTYPE, virtual ydk::Identity
{
    public:
        ROUTERCAPABILITYSUBTLVSTYPE();
        ~ROUTERCAPABILITYSUBTLVSTYPE();


}; // ROUTERCAPABILITYSUBTLVSTYPE

class ISREACHABILITYADJSID : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYADJSID();
        ~ISREACHABILITYADJSID();


}; // ISREACHABILITYADJSID

class MULTITOPOLOGY : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        MULTITOPOLOGY();
        ~MULTITOPOLOGY();


}; // MULTITOPOLOGY

class ISREACHABILITYLINKATTRIBUTES : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYLINKATTRIBUTES();
        ~ISREACHABILITYLINKATTRIBUTES();


}; // ISREACHABILITYLINKATTRIBUTES

class IPV6INTERFACEADDRESSES : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        IPV6INTERFACEADDRESSES();
        ~IPV6INTERFACEADDRESSES();


}; // IPV6INTERFACEADDRESSES

class DYNAMICNAME : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        DYNAMICNAME();
        ~DYNAMICNAME();


}; // DYNAMICNAME

class ISREACHABILITYAVAILABLEBANDWIDTH : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYAVAILABLEBANDWIDTH();
        ~ISREACHABILITYAVAILABLEBANDWIDTH();


}; // ISREACHABILITYAVAILABLEBANDWIDTH

class IPV4INTERFACEADDRESSES : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        IPV4INTERFACEADDRESSES();
        ~IPV4INTERFACEADDRESSES();


}; // IPV4INTERFACEADDRESSES

class IPV6TEROUTERID : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        IPV6TEROUTERID();
        ~IPV6TEROUTERID();


}; // IPV6TEROUTERID

class INSTANCEID : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        INSTANCEID();
        ~INSTANCEID();


}; // INSTANCEID

class ISREACHABILITYADJLANSID : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYADJLANSID();
        ~ISREACHABILITYADJLANSID();


}; // ISREACHABILITYADJLANSID

class MTIPV4REACHABILITY : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        MTIPV4REACHABILITY();
        ~MTIPV4REACHABILITY();


}; // MTIPV4REACHABILITY

class ISREACHABILITYUTILIZEDBANDWIDTH : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYUTILIZEDBANDWIDTH();
        ~ISREACHABILITYUTILIZEDBANDWIDTH();


}; // ISREACHABILITYUTILIZEDBANDWIDTH

class IPREACHABILITYSUBTLVSTYPE : public openconfig::openconfig_isis_lsdb_types::ISISSUBTLVTYPE, virtual ydk::Identity
{
    public:
        IPREACHABILITYSUBTLVSTYPE();
        ~IPREACHABILITYSUBTLVSTYPE();


}; // IPREACHABILITYSUBTLVSTYPE

class ISREACHABILITYMINMAXLINKDELAY : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYMINMAXLINKDELAY();
        ~ISREACHABILITYMINMAXLINKDELAY();


}; // ISREACHABILITYMINMAXLINKDELAY

class IPREACHABILITYPREFIXSID : public openconfig::openconfig_isis_lsdb_types::IPREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        IPREACHABILITYPREFIXSID();
        ~IPREACHABILITYPREFIXSID();


}; // IPREACHABILITYPREFIXSID

class EXTENDEDIPV4REACHABILITY : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        EXTENDEDIPV4REACHABILITY();
        ~EXTENDEDIPV4REACHABILITY();


}; // EXTENDEDIPV4REACHABILITY

class IPREACHABILITYPREFIXFLAGS : public openconfig::openconfig_isis_lsdb_types::IPREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        IPREACHABILITYPREFIXFLAGS();
        ~IPREACHABILITYPREFIXFLAGS();


}; // IPREACHABILITYPREFIXFLAGS

class ISREACHABILITYMAXRESERVABLEBANDWIDTH : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYMAXRESERVABLEBANDWIDTH();
        ~ISREACHABILITYMAXRESERVABLEBANDWIDTH();


}; // ISREACHABILITYMAXRESERVABLEBANDWIDTH

class PURGEOI : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        PURGEOI();
        ~PURGEOI();


}; // PURGEOI

class IPV4EXTERNALREACHABILITY : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        IPV4EXTERNALREACHABILITY();
        ~IPV4EXTERNALREACHABILITY();


}; // IPV4EXTERNALREACHABILITY

class IPV6REACHABILITY : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        IPV6REACHABILITY();
        ~IPV6REACHABILITY();


}; // IPV6REACHABILITY

class ISREACHABILITYMAXLINKBANDWIDTH : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYMAXLINKBANDWIDTH();
        ~ISREACHABILITYMAXLINKBANDWIDTH();


}; // ISREACHABILITYMAXLINKBANDWIDTH

class IPV4SRLG : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        IPV4SRLG();
        ~IPV4SRLG();


}; // IPV4SRLG

class IPV4INTERNALREACHABILITY : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        IPV4INTERNALREACHABILITY();
        ~IPV4INTERNALREACHABILITY();


}; // IPV4INTERNALREACHABILITY

class ISREACHABILITYUNRESERVEDBANDWIDTH : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYUNRESERVEDBANDWIDTH();
        ~ISREACHABILITYUNRESERVEDBANDWIDTH();


}; // ISREACHABILITYUNRESERVEDBANDWIDTH

class ROUTERCAPABILITYSRCAPABILITY : public openconfig::openconfig_isis_lsdb_types::ROUTERCAPABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ROUTERCAPABILITYSRCAPABILITY();
        ~ROUTERCAPABILITYSRCAPABILITY();


}; // ROUTERCAPABILITYSRCAPABILITY

class ROUTERCAPABILITY : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        ROUTERCAPABILITY();
        ~ROUTERCAPABILITY();


}; // ROUTERCAPABILITY

class EXTENDEDISREACHABILITY : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        EXTENDEDISREACHABILITY();
        ~EXTENDEDISREACHABILITY();


}; // EXTENDEDISREACHABILITY

class ISREACHABILITYADMINGROUP : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYADMINGROUP();
        ~ISREACHABILITYADMINGROUP();


}; // ISREACHABILITYADMINGROUP

class IPREACHABILITYTAG64 : public openconfig::openconfig_isis_lsdb_types::IPREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        IPREACHABILITYTAG64();
        ~IPREACHABILITYTAG64();


}; // IPREACHABILITYTAG64

class ISREACHABILITYLINKDELAY : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYLINKDELAY();
        ~ISREACHABILITYLINKDELAY();


}; // ISREACHABILITYLINKDELAY

class ISREACHABILITYTEDEFAULTMETRIC : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYTEDEFAULTMETRIC();
        ~ISREACHABILITYTEDEFAULTMETRIC();


}; // ISREACHABILITYTEDEFAULTMETRIC

class AUTHENTICATION : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        AUTHENTICATION();
        ~AUTHENTICATION();


}; // AUTHENTICATION

class IISNEIGHBORS : public openconfig::openconfig_isis_lsdb_types::ISISTLVTYPE, virtual ydk::Identity
{
    public:
        IISNEIGHBORS();
        ~IISNEIGHBORS();


}; // IISNEIGHBORS

class ISREACHABILITYUNCONSTRAINEDLSP : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYUNCONSTRAINEDLSP();
        ~ISREACHABILITYUNCONSTRAINEDLSP();


}; // ISREACHABILITYUNCONSTRAINEDLSP

class ISREACHABILITYIPV6NEIGHBORADDRESS : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYIPV6NEIGHBORADDRESS();
        ~ISREACHABILITYIPV6NEIGHBORADDRESS();


}; // ISREACHABILITYIPV6NEIGHBORADDRESS

class ISREACHABILITYRESIDUALBANDWIDTH : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYRESIDUALBANDWIDTH();
        ~ISREACHABILITYRESIDUALBANDWIDTH();


}; // ISREACHABILITYRESIDUALBANDWIDTH

class ISREACHABILITYLINKDELAYVARIATION : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYLINKDELAYVARIATION();
        ~ISREACHABILITYLINKDELAYVARIATION();


}; // ISREACHABILITYLINKDELAYVARIATION

class ROUTERCAPABILITYSRALGORITHM : public openconfig::openconfig_isis_lsdb_types::ROUTERCAPABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ROUTERCAPABILITYSRALGORITHM();
        ~ROUTERCAPABILITYSRALGORITHM();


}; // ROUTERCAPABILITYSRALGORITHM

class IPREACHABILITYIPV6ROUTERID : public openconfig::openconfig_isis_lsdb_types::IPREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        IPREACHABILITYIPV6ROUTERID();
        ~IPREACHABILITYIPV6ROUTERID();


}; // IPREACHABILITYIPV6ROUTERID

class ISREACHABILITYLINKPROTECTIONTYPE : public openconfig::openconfig_isis_lsdb_types::ISREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        ISREACHABILITYLINKPROTECTIONTYPE();
        ~ISREACHABILITYLINKPROTECTIONTYPE();


}; // ISREACHABILITYLINKPROTECTIONTYPE

class IPREACHABILITYTAG : public openconfig::openconfig_isis_lsdb_types::IPREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        IPREACHABILITYTAG();
        ~IPREACHABILITYTAG();


}; // IPREACHABILITYTAG

class IPREACHABILITYIPV4ROUTERID : public openconfig::openconfig_isis_lsdb_types::IPREACHABILITYSUBTLVSTYPE, virtual ydk::Identity
{
    public:
        IPREACHABILITYIPV4ROUTERID();
        ~IPREACHABILITYIPV4ROUTERID();


}; // IPREACHABILITYIPV4ROUTERID


}
}

#endif /* _OPENCONFIG_ISIS_LSDB_TYPES_ */

