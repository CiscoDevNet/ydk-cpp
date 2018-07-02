#ifndef _OPENCONFIG_VLAN_TYPES_
#define _OPENCONFIG_VLAN_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_vlan_types {

class TPIDTYPES : public virtual ydk::Identity
{
    public:
        TPIDTYPES();
        ~TPIDTYPES();


}; // TPIDTYPES

class TPID0X9200 : public openconfig::openconfig_vlan_types::TPIDTYPES, virtual ydk::Identity
{
    public:
        TPID0X9200();
        ~TPID0X9200();


}; // TPID0X9200

class TPID0x8A88 : public openconfig::openconfig_vlan_types::TPIDTYPES, virtual ydk::Identity
{
    public:
        TPID0x8A88();
        ~TPID0x8A88();


}; // TPID0x8A88

class TPID0x8100 : public openconfig::openconfig_vlan_types::TPIDTYPES, virtual ydk::Identity
{
    public:
        TPID0x8100();
        ~TPID0x8100();


}; // TPID0x8100

class TPID0x9100 : public openconfig::openconfig_vlan_types::TPIDTYPES, virtual ydk::Identity
{
    public:
        TPID0x9100();
        ~TPID0x9100();


}; // TPID0x9100

class VlanModeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ACCESS;
        static const ydk::Enum::YLeaf TRUNK;

};


}
}

#endif /* _OPENCONFIG_VLAN_TYPES_ */

