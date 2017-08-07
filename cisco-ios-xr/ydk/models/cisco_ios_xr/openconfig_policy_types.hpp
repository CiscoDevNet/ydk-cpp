#ifndef _OPENCONFIG_POLICY_TYPES_
#define _OPENCONFIG_POLICY_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace openconfig_policy_types {

class Attribute_Comparison : public virtual ydk::Identity
{
    public:
        Attribute_Comparison();
        ~Attribute_Comparison();


}; // Attribute_Comparison

class Install_Protocol_Type : public virtual ydk::Identity
{
    public:
        Install_Protocol_Type();
        ~Install_Protocol_Type();


}; // Install_Protocol_Type

class Isis : public openconfig_policy_types::Install_Protocol_Type, virtual ydk::Identity
{
    public:
        Isis();
        ~Isis();


}; // Isis

class Local_Aggregate : public openconfig_policy_types::Install_Protocol_Type, virtual ydk::Identity
{
    public:
        Local_Aggregate();
        ~Local_Aggregate();


}; // Local_Aggregate

class Attribute_Eq : public openconfig_policy_types::Attribute_Comparison, virtual ydk::Identity
{
    public:
        Attribute_Eq();
        ~Attribute_Eq();


}; // Attribute_Eq

class Ospf : public openconfig_policy_types::Install_Protocol_Type, virtual ydk::Identity
{
    public:
        Ospf();
        ~Ospf();


}; // Ospf

class Directly_Connected : public openconfig_policy_types::Install_Protocol_Type, virtual ydk::Identity
{
    public:
        Directly_Connected();
        ~Directly_Connected();


}; // Directly_Connected

class Attribute_Ge : public openconfig_policy_types::Attribute_Comparison, virtual ydk::Identity
{
    public:
        Attribute_Ge();
        ~Attribute_Ge();


}; // Attribute_Ge

class Bgp : public openconfig_policy_types::Install_Protocol_Type, virtual ydk::Identity
{
    public:
        Bgp();
        ~Bgp();


}; // Bgp

class Static_ : public openconfig_policy_types::Install_Protocol_Type, virtual ydk::Identity
{
    public:
        Static_();
        ~Static_();


}; // Static_

class Attribute_Le : public openconfig_policy_types::Attribute_Comparison, virtual ydk::Identity
{
    public:
        Attribute_Le();
        ~Attribute_Le();


}; // Attribute_Le

class Ospf3 : public openconfig_policy_types::Install_Protocol_Type, virtual ydk::Identity
{
    public:
        Ospf3();
        ~Ospf3();


}; // Ospf3

class MatchSetOptionsRestrictedType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ANY;
        static const ydk::Enum::YLeaf INVERT;

};

class MatchSetOptionsType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ANY;
        static const ydk::Enum::YLeaf ALL;
        static const ydk::Enum::YLeaf INVERT;

};


}
}

#endif /* _OPENCONFIG_POLICY_TYPES_ */

