#ifndef _IANA_RTPROTO_MIB_
#define _IANA_RTPROTO_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace IANA_RTPROTO_MIB {

class IanaipmrouteprotocolEnum : public Enum
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

class IanaiprouteprotocolEnum : public Enum
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


}
}

#endif /* _IANA_RTPROTO_MIB_ */

