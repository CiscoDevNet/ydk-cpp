#ifndef _CISCO_IOS_XR_COMMON_ACL_DATATYPES_
#define _CISCO_IOS_XR_COMMON_ACL_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_common_acl_datatypes {

class AclUsageAppIdEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pfilter;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf ospf;

};


}
}

#endif /* _CISCO_IOS_XR_COMMON_ACL_DATATYPES_ */

