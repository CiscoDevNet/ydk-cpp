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

        static int get_enum_value(const std::string & name) {
            if (name == "utd-update-status-unknown") return 0;
            if (name == "utd-update-status-success") return 1;
            if (name == "utd-update-status-failure") return 2;
            if (name == "utd-update-status-no-update") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_UTD_COMMON_OPER_ */

