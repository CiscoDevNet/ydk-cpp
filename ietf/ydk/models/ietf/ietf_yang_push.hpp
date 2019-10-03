#ifndef _IETF_YANG_PUSH_
#define _IETF_YANG_PUSH_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ietf_event_notifications.hpp"

namespace ietf {
namespace ietf_yang_push {

class CustomStream : public ietf::ietf_event_notifications::Stream, virtual ydk::Identity
{
    public:
        CustomStream();
        ~CustomStream();


}; // CustomStream

class YangPush : public ietf::ietf_event_notifications::Stream, virtual ydk::Identity
{
    public:
        YangPush();
        ~YangPush();


}; // YangPush

class ErrorDataNotAuthorized : public ietf::ietf_event_notifications::Error, virtual ydk::Identity
{
    public:
        ErrorDataNotAuthorized();
        ~ErrorDataNotAuthorized();


}; // ErrorDataNotAuthorized

class Http2 : public ietf::ietf_event_notifications::Transport, virtual ydk::Identity
{
    public:
        Http2();
        ~Http2();


}; // Http2

class ChangeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf create;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf modify;

        static int get_enum_value(const std::string & name) {
            if (name == "create") return 0;
            if (name == "delete") return 1;
            if (name == "modify") return 2;
            return -1;
        }
};


}
}

#endif /* _IETF_YANG_PUSH_ */

