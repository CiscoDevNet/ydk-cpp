#ifndef _IETF_SYSLOG_TYPES_
#define _IETF_SYSLOG_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ietf {
namespace ietf_syslog_types {

class SyslogFacility : public virtual ydk::Identity
{
    public:
        SyslogFacility();
        ~SyslogFacility();


}; // SyslogFacility

class Cron2 : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Cron2();
        ~Cron2();


}; // Cron2

class Cron : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Cron();
        ~Cron();


}; // Cron

class Syslog : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Syslog();
        ~Syslog();


}; // Syslog

class Local4 : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local4();
        ~Local4();


}; // Local4

class Ftp : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Ftp();
        ~Ftp();


}; // Ftp

class Uucp : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Uucp();
        ~Uucp();


}; // Uucp

class Console : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Console();
        ~Console();


}; // Console

class Mail : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Mail();
        ~Mail();


}; // Mail

class Authpriv : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Authpriv();
        ~Authpriv();


}; // Authpriv

class Ntp : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Ntp();
        ~Ntp();


}; // Ntp

class Auth : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Auth();
        ~Auth();


}; // Auth

class User : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        User();
        ~User();


}; // User

class Local5 : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local5();
        ~Local5();


}; // Local5

class News : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        News();
        ~News();


}; // News

class Local7 : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local7();
        ~Local7();


}; // Local7

class Local6 : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local6();
        ~Local6();


}; // Local6

class Local1 : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local1();
        ~Local1();


}; // Local1

class Local0 : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local0();
        ~Local0();


}; // Local0

class Local3 : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local3();
        ~Local3();


}; // Local3

class Local2 : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Local2();
        ~Local2();


}; // Local2

class Audit : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Audit();
        ~Audit();


}; // Audit

class Daemon : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Daemon();
        ~Daemon();


}; // Daemon

class Lpr : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Lpr();
        ~Lpr();


}; // Lpr

class Kern : public ietf::ietf_syslog_types::SyslogFacility, virtual ydk::Identity
{
    public:
        Kern();
        ~Kern();


}; // Kern

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

