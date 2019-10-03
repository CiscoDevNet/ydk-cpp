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

        static int get_enum_value(const std::string & name) {
            if (name == "MPLS") return 0;
            if (name == "IPV6") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "IPV4_EXPLICIT_NULL") return 0;
            if (name == "ROUTER_ALERT") return 1;
            if (name == "IPV6_EXPLICIT_NULL") return 2;
            if (name == "IMPLICIT_NULL") return 3;
            if (name == "ENTROPY_LABEL_INDICATOR") return 7;
            if (name == "NO_LABEL") return 8;
            return -1;
        }
};


}
}

#endif /* _OPENCONFIG_SEGMENT_ROUTING_ */

