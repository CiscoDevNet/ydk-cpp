#ifndef _OPENCONFIG_RIB_BGP_TYPES_
#define _OPENCONFIG_RIB_BGP_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_rib_bgp_types {

class Bgp_Not_Selected_Policy : public virtual ydk::Identity
{
    public:
        Bgp_Not_Selected_Policy();
        ~Bgp_Not_Selected_Policy();


}; // Bgp_Not_Selected_Policy

class Bgp_Not_Selected_Bestpath : public virtual ydk::Identity
{
    public:
        Bgp_Not_Selected_Bestpath();
        ~Bgp_Not_Selected_Bestpath();


}; // Bgp_Not_Selected_Bestpath

class Invalid_Route_Reason : public virtual ydk::Identity
{
    public:
        Invalid_Route_Reason();
        ~Invalid_Route_Reason();


}; // Invalid_Route_Reason

class Invalid_Cluster_Loop : public openconfig_rib_bgp_types::Invalid_Route_Reason, virtual ydk::Identity
{
    public:
        Invalid_Cluster_Loop();
        ~Invalid_Cluster_Loop();


}; // Invalid_Cluster_Loop

class Higher_Router_Id : public openconfig_rib_bgp_types::Bgp_Not_Selected_Bestpath, virtual ydk::Identity
{
    public:
        Higher_Router_Id();
        ~Higher_Router_Id();


}; // Higher_Router_Id

class Invalid_As_Loop : public openconfig_rib_bgp_types::Invalid_Route_Reason, virtual ydk::Identity
{
    public:
        Invalid_As_Loop();
        ~Invalid_As_Loop();


}; // Invalid_As_Loop

class Invalid_Originator : public openconfig_rib_bgp_types::Invalid_Route_Reason, virtual ydk::Identity
{
    public:
        Invalid_Originator();
        ~Invalid_Originator();


}; // Invalid_Originator

class Invalid_Confed : public openconfig_rib_bgp_types::Invalid_Route_Reason, virtual ydk::Identity
{
    public:
        Invalid_Confed();
        ~Invalid_Confed();


}; // Invalid_Confed

class Origin_Type_Higher : public openconfig_rib_bgp_types::Bgp_Not_Selected_Bestpath, virtual ydk::Identity
{
    public:
        Origin_Type_Higher();
        ~Origin_Type_Higher();


}; // Origin_Type_Higher

class Local_Pref_Lower : public openconfig_rib_bgp_types::Bgp_Not_Selected_Bestpath, virtual ydk::Identity
{
    public:
        Local_Pref_Lower();
        ~Local_Pref_Lower();


}; // Local_Pref_Lower

class Prefer_External : public openconfig_rib_bgp_types::Bgp_Not_Selected_Bestpath, virtual ydk::Identity
{
    public:
        Prefer_External();
        ~Prefer_External();


}; // Prefer_External

class Rejected_Import_Policy : public openconfig_rib_bgp_types::Bgp_Not_Selected_Policy, virtual ydk::Identity
{
    public:
        Rejected_Import_Policy();
        ~Rejected_Import_Policy();


}; // Rejected_Import_Policy

class As_Path_Longer : public openconfig_rib_bgp_types::Bgp_Not_Selected_Bestpath, virtual ydk::Identity
{
    public:
        As_Path_Longer();
        ~As_Path_Longer();


}; // As_Path_Longer

class Higher_Peer_Address : public openconfig_rib_bgp_types::Bgp_Not_Selected_Bestpath, virtual ydk::Identity
{
    public:
        Higher_Peer_Address();
        ~Higher_Peer_Address();


}; // Higher_Peer_Address

class Nexthop_Cost_Higher : public openconfig_rib_bgp_types::Bgp_Not_Selected_Bestpath, virtual ydk::Identity
{
    public:
        Nexthop_Cost_Higher();
        ~Nexthop_Cost_Higher();


}; // Nexthop_Cost_Higher

class Med_Higher : public openconfig_rib_bgp_types::Bgp_Not_Selected_Bestpath, virtual ydk::Identity
{
    public:
        Med_Higher();
        ~Med_Higher();


}; // Med_Higher


}
}

#endif /* _OPENCONFIG_RIB_BGP_TYPES_ */

