#ifndef _PIM_
#define _PIM_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace pim {

class GroupToRpMappingMode : public virtual ydk::Identity
{
    public:
        GroupToRpMappingMode();
        ~GroupToRpMappingMode();


}; // GroupToRpMappingMode

class AsmMappingMode : public cisco_ios_xe::pim::GroupToRpMappingMode, virtual ydk::Identity
{
    public:
        AsmMappingMode();
        ~AsmMappingMode();


}; // AsmMappingMode

class OtherMappingMode : public cisco_ios_xe::pim::GroupToRpMappingMode, virtual ydk::Identity
{
    public:
        OtherMappingMode();
        ~OtherMappingMode();


}; // OtherMappingMode

class SsmMappingMode : public cisco_ios_xe::pim::GroupToRpMappingMode, virtual ydk::Identity
{
    public:
        SsmMappingMode();
        ~SsmMappingMode();


}; // SsmMappingMode

class SmMappingMode : public cisco_ios_xe::pim::GroupToRpMappingMode, virtual ydk::Identity
{
    public:
        SmMappingMode();
        ~SmMappingMode();


}; // SmMappingMode

class PimBidirMappingMode : public cisco_ios_xe::pim::GroupToRpMappingMode, virtual ydk::Identity
{
    public:
        PimBidirMappingMode();
        ~PimBidirMappingMode();


}; // PimBidirMappingMode

class DmMappingMode : public cisco_ios_xe::pim::GroupToRpMappingMode, virtual ydk::Identity
{
    public:
        DmMappingMode();
        ~DmMappingMode();


}; // DmMappingMode

class Origin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other_origin;
        static const ydk::Enum::YLeaf pim_request;
        static const ydk::Enum::YLeaf ssm_request;
        static const ydk::Enum::YLeaf fixed;
        static const ydk::Enum::YLeaf embedded;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf config_ssm;
        static const ydk::Enum::YLeaf auto_rp;
        static const ydk::Enum::YLeaf bsr;
        static const ydk::Enum::YLeaf msdp;

};

class PimMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sparse;
        static const ydk::Enum::YLeaf dense;
        static const ydk::Enum::YLeaf sparse_dense;
        static const ydk::Enum::YLeaf dm_proxy;
        static const ydk::Enum::YLeaf none;

};

class RouteProtocolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf netmgmt;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf ggp;
        static const ydk::Enum::YLeaf hello;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf isIs;
        static const ydk::Enum::YLeaf esIs;
        static const ydk::Enum::YLeaf ciscoIgrp;
        static const ydk::Enum::YLeaf bbnSpfIgp;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf idpr;
        static const ydk::Enum::YLeaf ciscoEigrp;
        static const ydk::Enum::YLeaf dvmrp;

};

class MrouteProtocolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf netmgmt;
        static const ydk::Enum::YLeaf dvmrp;
        static const ydk::Enum::YLeaf mospf;
        static const ydk::Enum::YLeaf pimSparseDense;
        static const ydk::Enum::YLeaf cbt;
        static const ydk::Enum::YLeaf pimSparseMode;
        static const ydk::Enum::YLeaf pimDenseMode;
        static const ydk::Enum::YLeaf igmpOnly;
        static const ydk::Enum::YLeaf bgmp;
        static const ydk::Enum::YLeaf msdp;

};


}
}

#endif /* _PIM_ */

