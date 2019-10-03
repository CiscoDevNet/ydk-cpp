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

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "local") return 2;
            if (name == "netmgmt") return 3;
            if (name == "dvmrp") return 4;
            if (name == "mospf") return 5;
            if (name == "pimSparseDense") return 6;
            if (name == "cbt") return 7;
            if (name == "pimSparseMode") return 8;
            if (name == "pimDenseMode") return 9;
            if (name == "igmpOnly") return 10;
            if (name == "bgmp") return 11;
            if (name == "msdp") return 12;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "local") return 2;
            if (name == "netmgmt") return 3;
            if (name == "icmp") return 4;
            if (name == "egp") return 5;
            if (name == "ggp") return 6;
            if (name == "hello") return 7;
            if (name == "rip") return 8;
            if (name == "isIs") return 9;
            if (name == "esIs") return 10;
            if (name == "ciscoIgrp") return 11;
            if (name == "bbnSpfIgp") return 12;
            if (name == "ospf") return 13;
            if (name == "bgp") return 14;
            if (name == "idpr") return 15;
            if (name == "ciscoEigrp") return 16;
            if (name == "dvmrp") return 17;
            return -1;
        }
};


}
}

#endif /* _IANA_RTPROTO_MIB_ */

