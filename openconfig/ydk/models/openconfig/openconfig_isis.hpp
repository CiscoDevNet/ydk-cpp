#ifndef _OPENCONFIG_ISIS_
#define _OPENCONFIG_ISIS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_isis {

class IsisMetricFlags : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INTERNAL;
        static const ydk::Enum::YLeaf UNSUPPORTED;

};


}
}

#endif /* _OPENCONFIG_ISIS_ */

