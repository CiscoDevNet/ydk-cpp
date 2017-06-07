#ifndef _CISCO_IOS_XE_UTD_
#define _CISCO_IOS_XE_UTD_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_utd {

class SyslogLevelTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf alert;
        static const Enum::YLeaf crit;
        static const Enum::YLeaf debug;
        static const Enum::YLeaf emerg;
        static const Enum::YLeaf err;
        static const Enum::YLeaf info;
        static const Enum::YLeaf notice;
        static const Enum::YLeaf warning;

};


}
}

#endif /* _CISCO_IOS_XE_UTD_ */

