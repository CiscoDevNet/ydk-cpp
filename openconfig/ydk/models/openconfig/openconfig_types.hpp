#ifndef _OPENCONFIG_TYPES_
#define _OPENCONFIG_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_types {

class ADDRESSFAMILY : public virtual ydk::Identity
{
    public:
        ADDRESSFAMILY();
        ~ADDRESSFAMILY();


}; // ADDRESSFAMILY

class IPV4 : public openconfig::openconfig_types::ADDRESSFAMILY, virtual ydk::Identity
{
    public:
        IPV4();
        ~IPV4();


}; // IPV4

class IPV6 : public openconfig::openconfig_types::ADDRESSFAMILY, virtual ydk::Identity
{
    public:
        IPV6();
        ~IPV6();


}; // IPV6

class MPLS : public openconfig::openconfig_types::ADDRESSFAMILY, virtual ydk::Identity
{
    public:
        MPLS();
        ~MPLS();


}; // MPLS

class L2ETHERNET : public openconfig::openconfig_types::ADDRESSFAMILY, virtual ydk::Identity
{
    public:
        L2ETHERNET();
        ~L2ETHERNET();


}; // L2ETHERNET


}
}

#endif /* _OPENCONFIG_TYPES_ */

