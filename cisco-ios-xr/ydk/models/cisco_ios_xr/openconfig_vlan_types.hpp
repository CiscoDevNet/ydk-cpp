#ifndef _OPENCONFIG_VLAN_TYPES_
#define _OPENCONFIG_VLAN_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace openconfig_vlan_types {

class Tpid_Types : public virtual ydk::Identity
{
    public:
        Tpid_Types();
        ~Tpid_Types();


}; // Tpid_Types

class Tpid_0X9200 : public openconfig_vlan_types::Tpid_Types, virtual ydk::Identity
{
    public:
        Tpid_0X9200();
        ~Tpid_0X9200();


}; // Tpid_0X9200

class Tpid_0X8A88 : public openconfig_vlan_types::Tpid_Types, virtual ydk::Identity
{
    public:
        Tpid_0X8A88();
        ~Tpid_0X8A88();


}; // Tpid_0X8A88

class Tpid_0X8100 : public openconfig_vlan_types::Tpid_Types, virtual ydk::Identity
{
    public:
        Tpid_0X8100();
        ~Tpid_0X8100();


}; // Tpid_0X8100

class Tpid_0X9100 : public openconfig_vlan_types::Tpid_Types, virtual ydk::Identity
{
    public:
        Tpid_0X9100();
        ~Tpid_0X9100();


}; // Tpid_0X9100

class VlanModeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ACCESS;
        static const ydk::Enum::YLeaf TRUNK;

};


}
}

#endif /* _OPENCONFIG_VLAN_TYPES_ */

