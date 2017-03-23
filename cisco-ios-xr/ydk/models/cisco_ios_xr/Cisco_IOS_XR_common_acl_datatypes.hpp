#ifndef _CISCO_IOS_XR_COMMON_ACL_DATATYPES_
#define _CISCO_IOS_XR_COMMON_ACL_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_common_acl_datatypes {

class AclUsageAppIdEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf pfilter;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf ospf;

};


}
}

#endif /* _CISCO_IOS_XR_COMMON_ACL_DATATYPES_ */

