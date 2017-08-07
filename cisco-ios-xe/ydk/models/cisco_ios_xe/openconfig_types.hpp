#ifndef _OPENCONFIG_TYPES_
#define _OPENCONFIG_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace openconfig_types {

class Address_Family : public virtual ydk::Identity
{
    public:
        Address_Family();
        ~Address_Family();


}; // Address_Family

class Ipv6 : public openconfig_types::Address_Family, virtual ydk::Identity
{
    public:
        Ipv6();
        ~Ipv6();


}; // Ipv6

class Ipv4 : public openconfig_types::Address_Family, virtual ydk::Identity
{
    public:
        Ipv4();
        ~Ipv4();


}; // Ipv4


}
}

#endif /* _OPENCONFIG_TYPES_ */

