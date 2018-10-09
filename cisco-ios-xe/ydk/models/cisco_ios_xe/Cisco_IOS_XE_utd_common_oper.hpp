#ifndef _CISCO_IOS_XE_UTD_COMMON_OPER_
#define _CISCO_IOS_XE_UTD_COMMON_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_utd_common_oper {

class UtdUpdateStatusVal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf utd_update_status_unknown;
        static const ydk::Enum::YLeaf utd_update_status_success;
        static const ydk::Enum::YLeaf utd_update_status_failure;
        static const ydk::Enum::YLeaf utd_update_status_no_update;

};


}
}

#endif /* _CISCO_IOS_XE_UTD_COMMON_OPER_ */

