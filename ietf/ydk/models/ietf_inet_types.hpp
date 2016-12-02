#ifndef _IETF_INET_TYPES_
#define _IETF_INET_TYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace ietf_inet_types {


class IpVersionEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};


}
}

#endif /* _IETF_INET_TYPES_ */

