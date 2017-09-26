#ifndef _MPLS_TC_MIB_
#define _MPLS_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace MPLS_TC_MIB {

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

};

class MplsLdpLabelTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf generic;
        static const ydk::Enum::YLeaf atm;
        static const ydk::Enum::YLeaf frameRelay;

};


}
}

#endif /* _MPLS_TC_MIB_ */

