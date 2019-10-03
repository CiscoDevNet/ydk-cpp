#ifndef _IETF_NETCONF_WITH_DEFAULTS_
#define _IETF_NETCONF_WITH_DEFAULTS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ietf {
namespace ietf_netconf_with_defaults {

class WithDefaultsMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_all;
        static const ydk::Enum::YLeaf report_all_tagged;
        static const ydk::Enum::YLeaf trim;
        static const ydk::Enum::YLeaf explicit_;

        static int get_enum_value(const std::string & name) {
            if (name == "report-all") return 0;
            if (name == "report-all-tagged") return 1;
            if (name == "trim") return 2;
            if (name == "explicit") return 3;
            return -1;
        }
};


}
}

#endif /* _IETF_NETCONF_WITH_DEFAULTS_ */

