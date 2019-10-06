#ifndef _CISCO_IOS_XR_SNMP_IFMIB_OPER_
#define _CISCO_IOS_XR_SNMP_IFMIB_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_snmp_ifmib_oper {

class LinkUpDownStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_SNMP_IFMIB_OPER_ */

