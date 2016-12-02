#ifndef _OPENCONFIG_TYPES_
#define _OPENCONFIG_TYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace openconfig_types {

class Address_FamilyIdentity : public virtual Identity
{
    public:
        Address_FamilyIdentity();
        ~Address_FamilyIdentity();





}; // Address_FamilyIdentity

class Ipv6Identity : public openconfig_types::Address_FamilyIdentity, virtual Identity
{
    public:
        Ipv6Identity();
        ~Ipv6Identity();




}; // Ipv6Identity

class Ipv4Identity : public openconfig_types::Address_FamilyIdentity, virtual Identity
{
    public:
        Ipv4Identity();
        ~Ipv4Identity();




}; // Ipv4Identity



}
}

#endif /* _OPENCONFIG_TYPES_ */

