#ifndef _IANA_RTPROTO_MIB_
#define _IANA_RTPROTO_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace IANA_RTPROTO_MIB {

class IANAipMRouteProtocol : public ydk::Enum
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

class IANAipRouteProtocol : public ydk::Enum
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


}
}

#endif /* _IANA_RTPROTO_MIB_ */

