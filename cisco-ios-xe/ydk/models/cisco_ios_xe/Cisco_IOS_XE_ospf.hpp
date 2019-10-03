#ifndef _CISCO_IOS_XE_OSPF_
#define _CISCO_IOS_XE_OSPF_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ospf {

class RedistOspfExternalType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

        static int get_enum_value(const std::string & name) {
            if (name == "1") return 0;
            if (name == "2") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_OSPF_ */

