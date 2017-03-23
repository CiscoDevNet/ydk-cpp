#ifndef _CISCO_XR_OPENCONFIG_BGP_TYPES_
#define _CISCO_XR_OPENCONFIG_BGP_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace cisco_xr_openconfig_bgp_types {

class Afi_Safi_TypeIdentity : public virtual Identity
{
    public:
        Afi_Safi_TypeIdentity();
        ~Afi_Safi_TypeIdentity();





}; // Afi_Safi_TypeIdentity

class Ipv6_UnicastIdentity : public cisco_xr_openconfig_bgp_types::Afi_Safi_TypeIdentity, virtual Identity
{
    public:
        Ipv6_UnicastIdentity();
        ~Ipv6_UnicastIdentity();




}; // Ipv6_UnicastIdentity

class Ipv4_UnicastIdentity : public cisco_xr_openconfig_bgp_types::Afi_Safi_TypeIdentity, virtual Identity
{
    public:
        Ipv4_UnicastIdentity();
        ~Ipv4_UnicastIdentity();




}; // Ipv4_UnicastIdentity

class BgpOriginAttrTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf IGP;
        static const Enum::YLeaf EGP;
        static const Enum::YLeaf INCOMPLETE;

};


}
}

#endif /* _CISCO_XR_OPENCONFIG_BGP_TYPES_ */

