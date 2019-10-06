#ifndef _IETF_INET_TYPES_
#define _IETF_INET_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ietf {
namespace ietf_inet_types {

class IpVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
};


}
}

#endif /* _IETF_INET_TYPES_ */

