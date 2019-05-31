#ifndef _CISCO_IOS_XR_INFRA_XTC_AGENT_CFG_
#define _CISCO_IOS_XR_INFRA_XTC_AGENT_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_agent_cfg {

class XtcMetricValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf relative;
        static const ydk::Enum::YLeaf absolute;

};

class XtcAffinityRule : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf affinity_include_all;
        static const ydk::Enum::YLeaf affinity_exclude_any;
        static const ydk::Enum::YLeaf affinity_include_any;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_XTC_AGENT_CFG_ */

