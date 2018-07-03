#ifndef _OPENCONFIG_POLICY_TYPES_
#define _OPENCONFIG_POLICY_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_policy_types {

class ATTRIBUTECOMPARISON : public virtual ydk::Identity
{
    public:
        ATTRIBUTECOMPARISON();
        ~ATTRIBUTECOMPARISON();


}; // ATTRIBUTECOMPARISON

class INSTALLPROTOCOLTYPE : public virtual ydk::Identity
{
    public:
        INSTALLPROTOCOLTYPE();
        ~INSTALLPROTOCOLTYPE();


}; // INSTALLPROTOCOLTYPE

class BGP : public openconfig::openconfig_policy_types::INSTALLPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        BGP();
        ~BGP();


}; // BGP

class ISIS : public openconfig::openconfig_policy_types::INSTALLPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        ISIS();
        ~ISIS();


}; // ISIS

class ATTRIBUTEGE : public openconfig::openconfig_policy_types::ATTRIBUTECOMPARISON, virtual ydk::Identity
{
    public:
        ATTRIBUTEGE();
        ~ATTRIBUTEGE();


}; // ATTRIBUTEGE

class LOCALAGGREGATE : public openconfig::openconfig_policy_types::INSTALLPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        LOCALAGGREGATE();
        ~LOCALAGGREGATE();


}; // LOCALAGGREGATE

class STATIC : public openconfig::openconfig_policy_types::INSTALLPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        STATIC();
        ~STATIC();


}; // STATIC

class ATTRIBUTEEQ : public openconfig::openconfig_policy_types::ATTRIBUTECOMPARISON, virtual ydk::Identity
{
    public:
        ATTRIBUTEEQ();
        ~ATTRIBUTEEQ();


}; // ATTRIBUTEEQ

class DIRECTLYCONNECTED : public openconfig::openconfig_policy_types::INSTALLPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        DIRECTLYCONNECTED();
        ~DIRECTLYCONNECTED();


}; // DIRECTLYCONNECTED

class ATTRIBUTELE : public openconfig::openconfig_policy_types::ATTRIBUTECOMPARISON, virtual ydk::Identity
{
    public:
        ATTRIBUTELE();
        ~ATTRIBUTELE();


}; // ATTRIBUTELE

class OSPF : public openconfig::openconfig_policy_types::INSTALLPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        OSPF();
        ~OSPF();


}; // OSPF

class OSPF3 : public openconfig::openconfig_policy_types::INSTALLPROTOCOLTYPE, virtual ydk::Identity
{
    public:
        OSPF3();
        ~OSPF3();


}; // OSPF3

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

