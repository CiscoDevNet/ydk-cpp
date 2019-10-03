#ifndef _MPLS_TC_MIB_
#define _MPLS_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace MPLS_TC_MIB {

class MplsLdpLabelTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf generic;
        static const ydk::Enum::YLeaf atm;
        static const ydk::Enum::YLeaf frameRelay;

        static int get_enum_value(const std::string & name) {
            if (name == "generic") return 1;
            if (name == "atm") return 2;
            if (name == "frameRelay") return 3;
            return -1;
        }
};

class MplsInitialCreationSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf snmp;
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf rsvp;
        static const ydk::Enum::YLeaf crldp;
        static const ydk::Enum::YLeaf policyAgent;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "snmp") return 2;
            if (name == "ldp") return 3;
            if (name == "rsvp") return 4;
            if (name == "crldp") return 5;
            if (name == "policyAgent") return 6;
            if (name == "unknown") return 7;
            return -1;
        }
};


}
}

#endif /* _MPLS_TC_MIB_ */

