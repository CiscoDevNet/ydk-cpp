#ifndef _CISCO_IOS_XR_ES_ACL_DATATYPES_
#define _CISCO_IOS_XR_ES_ACL_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_es_acl_datatypes {

class AclUsageAppIdEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pfilter;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf ospf;

        static int get_enum_value(const std::string & name) {
            if (name == "pfilter") return 1;
            if (name == "bgp") return 2;
            if (name == "ospf") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ES_ACL_DATATYPES_ */

