#ifndef _CISCO_IOS_XE_UTD_
#define _CISCO_IOS_XE_UTD_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_utd {

class SyslogLevelType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf crit;
        static const ydk::Enum::YLeaf debug;
        static const ydk::Enum::YLeaf emerg;
        static const ydk::Enum::YLeaf err;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf warning;

};


}
}

#endif /* _CISCO_IOS_XE_UTD_ */

