#ifndef _OPENCONFIG_RIB_BGP_TYPES_
#define _OPENCONFIG_RIB_BGP_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace openconfig_rib_bgp_types {

class Bgp_Not_Selected_BestpathIdentity : public virtual Identity
{
    public:
        Bgp_Not_Selected_BestpathIdentity();
        ~Bgp_Not_Selected_BestpathIdentity();


}; // Bgp_Not_Selected_BestpathIdentity

class Bgp_Not_Selected_PolicyIdentity : public virtual Identity
{
    public:
        Bgp_Not_Selected_PolicyIdentity();
        ~Bgp_Not_Selected_PolicyIdentity();


}; // Bgp_Not_Selected_PolicyIdentity

class Invalid_Route_ReasonIdentity : public virtual Identity
{
    public:
        Invalid_Route_ReasonIdentity();
        ~Invalid_Route_ReasonIdentity();


}; // Invalid_Route_ReasonIdentity

class Invalid_OriginatorIdentity : public openconfig_rib_bgp_types::Invalid_Route_ReasonIdentity, virtual Identity
{
    public:
        Invalid_OriginatorIdentity();
        ~Invalid_OriginatorIdentity();


}; // Invalid_OriginatorIdentity

class Higher_Router_IdIdentity : public openconfig_rib_bgp_types::Bgp_Not_Selected_BestpathIdentity, virtual Identity
{
    public:
        Higher_Router_IdIdentity();
        ~Higher_Router_IdIdentity();


}; // Higher_Router_IdIdentity

class Invalid_Cluster_LoopIdentity : public openconfig_rib_bgp_types::Invalid_Route_ReasonIdentity, virtual Identity
{
    public:
        Invalid_Cluster_LoopIdentity();
        ~Invalid_Cluster_LoopIdentity();


}; // Invalid_Cluster_LoopIdentity

class Rejected_Import_PolicyIdentity : public openconfig_rib_bgp_types::Bgp_Not_Selected_PolicyIdentity, virtual Identity
{
    public:
        Rejected_Import_PolicyIdentity();
        ~Rejected_Import_PolicyIdentity();


}; // Rejected_Import_PolicyIdentity

class Origin_Type_HigherIdentity : public openconfig_rib_bgp_types::Bgp_Not_Selected_BestpathIdentity, virtual Identity
{
    public:
        Origin_Type_HigherIdentity();
        ~Origin_Type_HigherIdentity();


}; // Origin_Type_HigherIdentity

class Med_HigherIdentity : public openconfig_rib_bgp_types::Bgp_Not_Selected_BestpathIdentity, virtual Identity
{
    public:
        Med_HigherIdentity();
        ~Med_HigherIdentity();


}; // Med_HigherIdentity

class Invalid_As_LoopIdentity : public openconfig_rib_bgp_types::Invalid_Route_ReasonIdentity, virtual Identity
{
    public:
        Invalid_As_LoopIdentity();
        ~Invalid_As_LoopIdentity();


}; // Invalid_As_LoopIdentity

class Local_Pref_LowerIdentity : public openconfig_rib_bgp_types::Bgp_Not_Selected_BestpathIdentity, virtual Identity
{
    public:
        Local_Pref_LowerIdentity();
        ~Local_Pref_LowerIdentity();


}; // Local_Pref_LowerIdentity

class Invalid_ConfedIdentity : public openconfig_rib_bgp_types::Invalid_Route_ReasonIdentity, virtual Identity
{
    public:
        Invalid_ConfedIdentity();
        ~Invalid_ConfedIdentity();


}; // Invalid_ConfedIdentity

class As_Path_LongerIdentity : public openconfig_rib_bgp_types::Bgp_Not_Selected_BestpathIdentity, virtual Identity
{
    public:
        As_Path_LongerIdentity();
        ~As_Path_LongerIdentity();


}; // As_Path_LongerIdentity

class Higher_Peer_AddressIdentity : public openconfig_rib_bgp_types::Bgp_Not_Selected_BestpathIdentity, virtual Identity
{
    public:
        Higher_Peer_AddressIdentity();
        ~Higher_Peer_AddressIdentity();


}; // Higher_Peer_AddressIdentity

class Nexthop_Cost_HigherIdentity : public openconfig_rib_bgp_types::Bgp_Not_Selected_BestpathIdentity, virtual Identity
{
    public:
        Nexthop_Cost_HigherIdentity();
        ~Nexthop_Cost_HigherIdentity();


}; // Nexthop_Cost_HigherIdentity

class Prefer_ExternalIdentity : public openconfig_rib_bgp_types::Bgp_Not_Selected_BestpathIdentity, virtual Identity
{
    public:
        Prefer_ExternalIdentity();
        ~Prefer_ExternalIdentity();


}; // Prefer_ExternalIdentity


}
}

#endif /* _OPENCONFIG_RIB_BGP_TYPES_ */

