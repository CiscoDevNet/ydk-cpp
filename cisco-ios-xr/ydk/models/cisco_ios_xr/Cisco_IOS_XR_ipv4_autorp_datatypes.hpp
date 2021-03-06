#ifndef _CISCO_IOS_XR_IPV4_AUTORP_DATATYPES_
#define _CISCO_IOS_XR_IPV4_AUTORP_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_autorp_datatypes {

class AutoRpProtocolMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sparse;
        static const ydk::Enum::YLeaf bidirectional;

        static int get_enum_value(const std::string & name) {
            if (name == "sparse") return 0;
            if (name == "bidirectional") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV4_AUTORP_DATATYPES_ */

