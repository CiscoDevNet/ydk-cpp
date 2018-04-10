#ifndef _CISCO_XE_IETF_YANG_PUSH_EXT_
#define _CISCO_XE_IETF_YANG_PUSH_EXT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_event_notifications.hpp"

namespace cisco_ios_xe {
namespace cisco_xe_ietf_yang_push_ext {

class EncodeTdl : public ietf::ietf_event_notifications::Encodings, virtual ydk::Identity
{
    public:
        EncodeTdl();
        ~EncodeTdl();


}; // EncodeTdl

class TdlStream : public ietf::ietf_event_notifications::Stream, virtual ydk::Identity
{
    public:
        TdlStream();
        ~TdlStream();


}; // TdlStream


}
}

#endif /* _CISCO_XE_IETF_YANG_PUSH_EXT_ */

