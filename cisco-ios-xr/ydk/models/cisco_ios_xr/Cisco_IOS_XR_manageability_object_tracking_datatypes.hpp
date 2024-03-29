#ifndef _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_DATATYPES_
#define _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_manageability_object_tracking_datatypes {

class ObjectTrackingBooleanSign : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf without_not;
        static const ydk::Enum::YLeaf with_not;

        static int get_enum_value(const std::string & name) {
            if (name == "without-not") return 0;
            if (name == "with-not") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_DATATYPES_ */

