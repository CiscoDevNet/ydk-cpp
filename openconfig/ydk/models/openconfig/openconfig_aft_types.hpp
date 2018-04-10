#ifndef _OPENCONFIG_AFT_TYPES_
#define _OPENCONFIG_AFT_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_aft_types {

class AFTADDRESSFAMILY : public virtual ydk::Identity
{
    public:
        AFTADDRESSFAMILY();
        ~AFTADDRESSFAMILY();


}; // AFTADDRESSFAMILY

class IPV4UNICAST : public openconfig::openconfig_aft_types::AFTADDRESSFAMILY, virtual ydk::Identity
{
    public:
        IPV4UNICAST();
        ~IPV4UNICAST();


}; // IPV4UNICAST

class IPV6UNICAST : public openconfig::openconfig_aft_types::AFTADDRESSFAMILY, virtual ydk::Identity
{
    public:
        IPV6UNICAST();
        ~IPV6UNICAST();


}; // IPV6UNICAST

class MPLS : public openconfig::openconfig_aft_types::AFTADDRESSFAMILY, virtual ydk::Identity
{
    public:
        MPLS();
        ~MPLS();


}; // MPLS

class L2ETHERNET : public openconfig::openconfig_aft_types::AFTADDRESSFAMILY, virtual ydk::Identity
{
    public:
        L2ETHERNET();
        ~L2ETHERNET();


}; // L2ETHERNET

class EncapsulationHeaderType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf GRE;
        static const ydk::Enum::YLeaf IPV4;
        static const ydk::Enum::YLeaf IPV6;
        static const ydk::Enum::YLeaf MPLS;

};


}
}

#endif /* _OPENCONFIG_AFT_TYPES_ */

