#ifndef _IETF_SYSLOG_TYPES_
#define _IETF_SYSLOG_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace ietf_syslog_types {

class SyslogFacilityIdentity : public virtual Identity
{
    public:
        SyslogFacilityIdentity();
        ~SyslogFacilityIdentity();





}; // SyslogFacilityIdentity

class Cron2Identity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        Cron2Identity();
        ~Cron2Identity();




}; // Cron2Identity

class CronIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        CronIdentity();
        ~CronIdentity();




}; // CronIdentity

class SyslogIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        SyslogIdentity();
        ~SyslogIdentity();




}; // SyslogIdentity

class Local4Identity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        Local4Identity();
        ~Local4Identity();




}; // Local4Identity

class FtpIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        FtpIdentity();
        ~FtpIdentity();




}; // FtpIdentity

class UucpIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        UucpIdentity();
        ~UucpIdentity();




}; // UucpIdentity

class ConsoleIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        ConsoleIdentity();
        ~ConsoleIdentity();




}; // ConsoleIdentity

class MailIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        MailIdentity();
        ~MailIdentity();




}; // MailIdentity

class AuthprivIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        AuthprivIdentity();
        ~AuthprivIdentity();




}; // AuthprivIdentity

class NtpIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        NtpIdentity();
        ~NtpIdentity();




}; // NtpIdentity

class AuthIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        AuthIdentity();
        ~AuthIdentity();




}; // AuthIdentity

class UserIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        UserIdentity();
        ~UserIdentity();




}; // UserIdentity

class Local5Identity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        Local5Identity();
        ~Local5Identity();




}; // Local5Identity

class NewsIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        NewsIdentity();
        ~NewsIdentity();




}; // NewsIdentity

class Local7Identity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        Local7Identity();
        ~Local7Identity();




}; // Local7Identity

class Local6Identity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        Local6Identity();
        ~Local6Identity();




}; // Local6Identity

class Local1Identity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        Local1Identity();
        ~Local1Identity();




}; // Local1Identity

class Local0Identity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        Local0Identity();
        ~Local0Identity();




}; // Local0Identity

class Local3Identity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        Local3Identity();
        ~Local3Identity();




}; // Local3Identity

class Local2Identity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        Local2Identity();
        ~Local2Identity();




}; // Local2Identity

class AuditIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        AuditIdentity();
        ~AuditIdentity();




}; // AuditIdentity

class DaemonIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        DaemonIdentity();
        ~DaemonIdentity();




}; // DaemonIdentity

class LprIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        LprIdentity();
        ~LprIdentity();




}; // LprIdentity

class KernIdentity : public ietf_syslog_types::SyslogFacilityIdentity, virtual Identity
{
    public:
        KernIdentity();
        ~KernIdentity();




}; // KernIdentity

class SeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf emergency;
        static const Enum::YLeaf alert;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf error;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf notice;
        static const Enum::YLeaf info;
        static const Enum::YLeaf debug;

};


}
}

#endif /* _IETF_SYSLOG_TYPES_ */

