#ifndef _CISCO_IOS_XR_TYPES_
#define _CISCO_IOS_XR_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_types {

class EncryptionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf proprietary;
        static const ydk::Enum::YLeaf type6;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "md5") return 1;
            if (name == "proprietary") return 2;
            if (name == "type6") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_TYPES_ */

