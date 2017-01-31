#ifndef _CISCO_IOS_XR_TYPES_
#define _CISCO_IOS_XR_TYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_types {


class EncryptionTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf md5;
        static const Enum::YLeaf proprietary;

};


}
}

#endif /* _CISCO_IOS_XR_TYPES_ */

