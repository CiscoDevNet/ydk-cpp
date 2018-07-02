#ifndef _OPENCONFIG_SEGMENT_ROUTING_
#define _OPENCONFIG_SEGMENT_ROUTING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_segment_routing {

class SrDataplaneType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf MPLS;
        static const ydk::Enum::YLeaf IPV6;

};

class MplsLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IPV4_EXPLICIT_NULL;
        static const ydk::Enum::YLeaf ROUTER_ALERT;
        static const ydk::Enum::YLeaf IPV6_EXPLICIT_NULL;
        static const ydk::Enum::YLeaf IMPLICIT_NULL;
        static const ydk::Enum::YLeaf ENTROPY_LABEL_INDICATOR;
        static const ydk::Enum::YLeaf NO_LABEL;

};


}
}

#endif /* _OPENCONFIG_SEGMENT_ROUTING_ */

