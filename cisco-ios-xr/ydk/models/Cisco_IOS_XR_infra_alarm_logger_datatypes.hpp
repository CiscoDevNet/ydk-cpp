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
        static const Enum::Value emergency;
        static const Enum::Value alert;
        static const Enum::Value critical;
        static const Enum::Value error;
        static const Enum::Value warning;
        static const Enum::Value notice;
        static const Enum::Value informational;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_ALARM_LOGGER_DATATYPES_ */

