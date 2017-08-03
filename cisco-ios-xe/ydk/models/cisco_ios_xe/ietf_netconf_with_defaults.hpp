#ifndef _IETF_NETCONF_WITH_DEFAULTS_
#define _IETF_NETCONF_WITH_DEFAULTS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace ietf_netconf_with_defaults {

class WithDefaultsMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_all;
        static const ydk::Enum::YLeaf report_all_tagged;
        static const ydk::Enum::YLeaf trim;
        static const ydk::Enum::YLeaf explicit_;

};


}
}

#endif /* _IETF_NETCONF_WITH_DEFAULTS_ */

