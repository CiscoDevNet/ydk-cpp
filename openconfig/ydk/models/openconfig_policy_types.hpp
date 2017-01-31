#ifndef _OPENCONFIG_POLICY_TYPES_
#define _OPENCONFIG_POLICY_TYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace openconfig_policy_types {

class InstallProtocolTypeIdentity : public virtual Identity
{
    public:
        InstallProtocolTypeIdentity();
        ~InstallProtocolTypeIdentity();





}; // InstallProtocolTypeIdentity

class AttributeComparisonIdentity : public virtual Identity
{
    public:
        AttributeComparisonIdentity();
        ~AttributeComparisonIdentity();





}; // AttributeComparisonIdentity

class IsisIdentity : public openconfig_policy_types::InstallProtocolTypeIdentity, virtual Identity
{
    public:
        IsisIdentity();
        ~IsisIdentity();




}; // IsisIdentity

class AttributeLeIdentity : public openconfig_policy_types::AttributeComparisonIdentity, virtual Identity
{
    public:
        AttributeLeIdentity();
        ~AttributeLeIdentity();




}; // AttributeLeIdentity

class AttributeGeIdentity : public openconfig_policy_types::AttributeComparisonIdentity, virtual Identity
{
    public:
        AttributeGeIdentity();
        ~AttributeGeIdentity();




}; // AttributeGeIdentity

class BgpIdentity : public openconfig_policy_types::InstallProtocolTypeIdentity, virtual Identity
{
    public:
        BgpIdentity();
        ~BgpIdentity();




}; // BgpIdentity

class DirectlyConnectedIdentity : public openconfig_policy_types::InstallProtocolTypeIdentity, virtual Identity
{
    public:
        DirectlyConnectedIdentity();
        ~DirectlyConnectedIdentity();




}; // DirectlyConnectedIdentity

class StaticIdentity : public openconfig_policy_types::InstallProtocolTypeIdentity, virtual Identity
{
    public:
        StaticIdentity();
        ~StaticIdentity();




}; // StaticIdentity

class LocalAggregateIdentity : public openconfig_policy_types::InstallProtocolTypeIdentity, virtual Identity
{
    public:
        LocalAggregateIdentity();
        ~LocalAggregateIdentity();




}; // LocalAggregateIdentity

class AttributeEqIdentity : public openconfig_policy_types::AttributeComparisonIdentity, virtual Identity
{
    public:
        AttributeEqIdentity();
        ~AttributeEqIdentity();




}; // AttributeEqIdentity

class OspfIdentity : public openconfig_policy_types::InstallProtocolTypeIdentity, virtual Identity
{
    public:
        OspfIdentity();
        ~OspfIdentity();




}; // OspfIdentity

class Ospf3Identity : public openconfig_policy_types::InstallProtocolTypeIdentity, virtual Identity
{
    public:
        Ospf3Identity();
        ~Ospf3Identity();




}; // Ospf3Identity


class MatchSetOptionsRestrictedTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ANY;
        static const Enum::YLeaf INVERT;

};

class MatchSetOptionsTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ANY;
        static const Enum::YLeaf ALL;
        static const Enum::YLeaf INVERT;

};


}
}

#endif /* _OPENCONFIG_POLICY_TYPES_ */

