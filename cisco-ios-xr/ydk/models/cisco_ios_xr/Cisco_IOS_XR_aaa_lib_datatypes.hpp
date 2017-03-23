#ifndef _CISCO_IOS_XR_AAA_LIB_DATATYPES_
#define _CISCO_IOS_XR_AAA_LIB_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_aaa_lib_datatypes {

class AaaAccountingUpdateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf newinfo;
        static const Enum::YLeaf periodic;

};

class AaaAccountingEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf start_stop;
        static const Enum::YLeaf stop_only;

};

class AaaMethodEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf none;
        static const Enum::YLeaf local;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs_plus;
        static const Enum::YLeaf dsmd;
        static const Enum::YLeaf sgbp;
        static const Enum::YLeaf acct_d;
        static const Enum::YLeaf error;
        static const Enum::YLeaf if_authenticated;
        static const Enum::YLeaf server_group;
        static const Enum::YLeaf server_group_not_defined;
        static const Enum::YLeaf line;
        static const Enum::YLeaf enable;
        static const Enum::YLeaf kerberos;
        static const Enum::YLeaf diameter;
        static const Enum::YLeaf last;

};

class AaaAccountingBroadcastEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};

class AaaAccountingRpFailoverEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};


}
}

#endif /* _CISCO_IOS_XR_AAA_LIB_DATATYPES_ */

