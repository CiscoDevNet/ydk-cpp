#ifndef _MPLS_TC_MIB_
#define _MPLS_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace MPLS_TC_MIB {

class MplsldplabeltypesEnum : public Enum
{
    public:
        static const Enum::YLeaf generic;
        static const Enum::YLeaf atm;
        static const Enum::YLeaf frameRelay;

};

class MplsinitialcreationsourceEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf snmp;
        static const Enum::YLeaf ldp;
        static const Enum::YLeaf rsvp;
        static const Enum::YLeaf crldp;
        static const Enum::YLeaf policyAgent;
        static const Enum::YLeaf unknown;

};


}
}

#endif /* _MPLS_TC_MIB_ */

