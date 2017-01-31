#ifndef _CISCO_IOS_XR_INFRA_ALARM_LOGGER_DATATYPES_
#define _CISCO_IOS_XR_INFRA_ALARM_LOGGER_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_alarm_logger_datatypes {


class AlarmLoggerSeverityLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf emergency;
        static const Enum::YLeaf alert;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf error;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf notice;
        static const Enum::YLeaf informational;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_ALARM_LOGGER_DATATYPES_ */

