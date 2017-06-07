#ifndef _PIM_
#define _PIM_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace pim {

class GroupToRpMappingModeIdentity : public virtual Identity
{
    public:
        GroupToRpMappingModeIdentity();
        ~GroupToRpMappingModeIdentity();


}; // GroupToRpMappingModeIdentity

class AsmMappingModeIdentity : public pim::GroupToRpMappingModeIdentity, virtual Identity
{
    public:
        AsmMappingModeIdentity();
        ~AsmMappingModeIdentity();


}; // AsmMappingModeIdentity

class OtherMappingModeIdentity : public pim::GroupToRpMappingModeIdentity, virtual Identity
{
    public:
        OtherMappingModeIdentity();
        ~OtherMappingModeIdentity();


}; // OtherMappingModeIdentity

class SsmMappingModeIdentity : public pim::GroupToRpMappingModeIdentity, virtual Identity
{
    public:
        SsmMappingModeIdentity();
        ~SsmMappingModeIdentity();


}; // SsmMappingModeIdentity

class SmMappingModeIdentity : public pim::GroupToRpMappingModeIdentity, virtual Identity
{
    public:
        SmMappingModeIdentity();
        ~SmMappingModeIdentity();


}; // SmMappingModeIdentity

class PimBidirMappingModeIdentity : public pim::GroupToRpMappingModeIdentity, virtual Identity
{
    public:
        PimBidirMappingModeIdentity();
        ~PimBidirMappingModeIdentity();


}; // PimBidirMappingModeIdentity

class DmMappingModeIdentity : public pim::GroupToRpMappingModeIdentity, virtual Identity
{
    public:
        DmMappingModeIdentity();
        ~DmMappingModeIdentity();


}; // DmMappingModeIdentity

class OriginEnum : public Enum
{
    public:
        static const Enum::YLeaf other_origin;
        static const Enum::YLeaf pim_request;
        static const Enum::YLeaf ssm_request;
        static const Enum::YLeaf fixed;
        static const Enum::YLeaf embedded;
        static const Enum::YLeaf static_;
        static const Enum::YLeaf config_ssm;
        static const Enum::YLeaf auto_rp;
        static const Enum::YLeaf bsr;
        static const Enum::YLeaf msdp;

};

class PimModeEnum : public Enum
{
    public:
        static const Enum::YLeaf sparse;
        static const Enum::YLeaf dense;
        static const Enum::YLeaf sparse_dense;
        static const Enum::YLeaf dm_proxy;
        static const Enum::YLeaf none;

};

class RouteProtocolTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf local;
        static const Enum::YLeaf netmgmt;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf egp;
        static const Enum::YLeaf ggp;
        static const Enum::YLeaf hello;
        static const Enum::YLeaf rip;
        static const Enum::YLeaf isIs;
        static const Enum::YLeaf esIs;
        static const Enum::YLeaf ciscoIgrp;
        static const Enum::YLeaf bbnSpfIgp;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf idpr;
        static const Enum::YLeaf ciscoEigrp;
        static const Enum::YLeaf dvmrp;

};

class MrouteProtocolTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf local;
        static const Enum::YLeaf netmgmt;
        static const Enum::YLeaf dvmrp;
        static const Enum::YLeaf mospf;
        static const Enum::YLeaf pimSparseDense;
        static const Enum::YLeaf cbt;
        static const Enum::YLeaf pimSparseMode;
        static const Enum::YLeaf pimDenseMode;
        static const Enum::YLeaf igmpOnly;
        static const Enum::YLeaf bgmp;
        static const Enum::YLeaf msdp;

};


}
}

#endif /* _PIM_ */

