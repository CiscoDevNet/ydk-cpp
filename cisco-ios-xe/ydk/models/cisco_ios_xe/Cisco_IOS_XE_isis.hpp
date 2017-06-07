#ifndef _CISCO_IOS_XE_ISIS_
#define _CISCO_IOS_XE_ISIS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_isis {

class AuthenticationLevelTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class IsisLevelTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_1_2;
        static const Enum::YLeaf level_2;

};

class IsisRoutesLevelTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_1_2;
        static const Enum::YLeaf level_2;

};


}
}

#endif /* _CISCO_IOS_XE_ISIS_ */

