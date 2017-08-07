#ifndef _CISCO_QOS_COMMON_
#define _CISCO_QOS_COMMON_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace cisco_qos_common {

class ThreshUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf bytes;
        static const ydk::Enum::YLeaf sec;
        static const ydk::Enum::YLeaf packets;
        static const ydk::Enum::YLeaf cells;
        static const ydk::Enum::YLeaf percent;

};


}
}

#endif /* _CISCO_QOS_COMMON_ */

