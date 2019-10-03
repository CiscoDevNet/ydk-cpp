#ifndef _CISCO_IOS_XR_IPV4_MA_OPER_
#define _CISCO_IOS_XR_IPV4_MA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ma_oper {

class ImStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf im_state_not_ready;
        static const ydk::Enum::YLeaf im_state_admin_down;
        static const ydk::Enum::YLeaf im_state_down;
        static const ydk::Enum::YLeaf im_state_up;
        static const ydk::Enum::YLeaf im_state_shutdown;
        static const ydk::Enum::YLeaf im_state_err_disable;
        static const ydk::Enum::YLeaf im_state_down_immediate;
        static const ydk::Enum::YLeaf im_state_down_immediate_admin;
        static const ydk::Enum::YLeaf im_state_down_graceful;
        static const ydk::Enum::YLeaf im_state_begin_shutdown;
        static const ydk::Enum::YLeaf im_state_end_shutdown;
        static const ydk::Enum::YLeaf im_state_begin_error_disable;
        static const ydk::Enum::YLeaf im_state_end_error_disable;
        static const ydk::Enum::YLeaf im_state_begin_down_graceful;
        static const ydk::Enum::YLeaf im_state_reset;
        static const ydk::Enum::YLeaf im_state_operational;
        static const ydk::Enum::YLeaf im_state_not_operational;
        static const ydk::Enum::YLeaf im_state_unknown;
        static const ydk::Enum::YLeaf im_state_last;

        static int get_enum_value(const std::string & name) {
            if (name == "im-state-not-ready") return 0;
            if (name == "im-state-admin-down") return 1;
            if (name == "im-state-down") return 2;
            if (name == "im-state-up") return 3;
            if (name == "im-state-shutdown") return 4;
            if (name == "im-state-err-disable") return 5;
            if (name == "im-state-down-immediate") return 6;
            if (name == "im-state-down-immediate-admin") return 7;
            if (name == "im-state-down-graceful") return 8;
            if (name == "im-state-begin-shutdown") return 9;
            if (name == "im-state-end-shutdown") return 10;
            if (name == "im-state-begin-error-disable") return 11;
            if (name == "im-state-end-error-disable") return 12;
            if (name == "im-state-begin-down-graceful") return 13;
            if (name == "im-state-reset") return 14;
            if (name == "im-state-operational") return 15;
            if (name == "im-state-not-operational") return 16;
            if (name == "im-state-unknown") return 17;
            if (name == "im-state-last") return 18;
            return -1;
        }
};

class Ipv4MaOperConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_ma_oper_client_none;
        static const ydk::Enum::YLeaf ipv4_ma_oper_non_oc_client;
        static const ydk::Enum::YLeaf ipv4_ma_oper_oc_client;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4-ma-oper-client-none") return 0;
            if (name == "ipv4-ma-oper-non-oc-client") return 1;
            if (name == "ipv4-ma-oper-oc-client") return 2;
            return -1;
        }
};

class RpfMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;

        static int get_enum_value(const std::string & name) {
            if (name == "strict") return 0;
            if (name == "loose") return 1;
            return -1;
        }
};

class Ipv4MaOperLineState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "shutdown") return 1;
            if (name == "down") return 2;
            if (name == "up") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV4_MA_OPER_ */

