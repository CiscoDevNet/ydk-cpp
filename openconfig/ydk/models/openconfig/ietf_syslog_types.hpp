#ifndef _IETF_SYSLOG_TYPES_
#define _IETF_SYSLOG_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace ietf_syslog_types {

class SyslogFacility : public virtual ydk::Identity
{
    public:
        SyslogFacility();
        ~SyslogFacility();


}; // SyslogFacility

class Cron2 : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Cron2();
        ~Cron2();


}; // Cron2

class Local0 : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local0();
        ~Local0();


}; // Local0

class Lpr : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Lpr();
        ~Lpr();


}; // Lpr

class Auth : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Auth();
        ~Auth();


}; // Auth

class User : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        User();
        ~User();


}; // User

class Local4 : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local4();
        ~Local4();


}; // Local4

class Mail : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Mail();
        ~Mail();


}; // Mail

class Syslog : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Syslog();
        ~Syslog();


}; // Syslog

class Audit : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Audit();
        ~Audit();


}; // Audit

class Ntp : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Ntp();
        ~Ntp();


}; // Ntp

class Authpriv : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Authpriv();
        ~Authpriv();


}; // Authpriv

class Local3 : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local3();
        ~Local3();


}; // Local3

class Local6 : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local6();
        ~Local6();


}; // Local6

class Daemon : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Daemon();
        ~Daemon();


}; // Daemon

class Local5 : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local5();
        ~Local5();


}; // Local5

class Console : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Console();
        ~Console();


}; // Console

class Local1 : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local1();
        ~Local1();


}; // Local1

class Ftp : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Ftp();
        ~Ftp();


}; // Ftp

class Cron : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Cron();
        ~Cron();


}; // Cron

class Uucp : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Uucp();
        ~Uucp();


}; // Uucp

class Local7 : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local7();
        ~Local7();


}; // Local7

class News : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        News();
        ~News();


}; // News

class Kern : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Kern();
        ~Kern();


}; // Kern

class Local2 : public ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local2();
        ~Local2();


}; // Local2

class Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf info;
        static const ydk::Enum::YLeaf debug;

};


}
}

#endif /* _IETF_SYSLOG_TYPES_ */

