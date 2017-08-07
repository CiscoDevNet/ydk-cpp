#ifndef _CISCO_IOS_XR_INFRA_ALARM_LOGGER_DATATYPES_
#define _CISCO_IOS_XR_INFRA_ALARM_LOGGER_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_alarm_logger_datatypes {

class AlarmLoggerSeverityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf informational;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_ALARM_LOGGER_DATATYPES_ */

