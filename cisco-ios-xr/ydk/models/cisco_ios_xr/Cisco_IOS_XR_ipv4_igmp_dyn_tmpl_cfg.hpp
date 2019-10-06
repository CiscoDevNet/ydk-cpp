#ifndef _CISCO_IOS_XR_IPV4_IGMP_DYN_TMPL_CFG_
#define _CISCO_IOS_XR_IPV4_IGMP_DYN_TMPL_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_igmp_dyn_tmpl_cfg {

class DynTmplMulticastMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf qos_correlation;
        static const ydk::Enum::YLeaf passive;

        static int get_enum_value(const std::string & name) {
            if (name == "qos-correlation") return 1;
            if (name == "passive") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV4_IGMP_DYN_TMPL_CFG_ */

