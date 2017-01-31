
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "ietf_syslog_types.hpp"

namespace ydk {
namespace ietf_syslog_types {

SyslogFacilityIdentity::SyslogFacilityIdentity()
     : Identity("ietf-syslog-types:syslog-facility")
{
}

SyslogFacilityIdentity::~SyslogFacilityIdentity()
{
}

Cron2Identity::Cron2Identity()
     : Identity("ietf-syslog-types:cron2")
{
}

Cron2Identity::~Cron2Identity()
{
}

CronIdentity::CronIdentity()
     : Identity("ietf-syslog-types:cron")
{
}

CronIdentity::~CronIdentity()
{
}

SyslogIdentity::SyslogIdentity()
     : Identity("ietf-syslog-types:syslog")
{
}

SyslogIdentity::~SyslogIdentity()
{
}

Local4Identity::Local4Identity()
     : Identity("ietf-syslog-types:local4")
{
}

Local4Identity::~Local4Identity()
{
}

FtpIdentity::FtpIdentity()
     : Identity("ietf-syslog-types:ftp")
{
}

FtpIdentity::~FtpIdentity()
{
}

UucpIdentity::UucpIdentity()
     : Identity("ietf-syslog-types:uucp")
{
}

UucpIdentity::~UucpIdentity()
{
}

ConsoleIdentity::ConsoleIdentity()
     : Identity("ietf-syslog-types:console")
{
}

ConsoleIdentity::~ConsoleIdentity()
{
}

MailIdentity::MailIdentity()
     : Identity("ietf-syslog-types:mail")
{
}

MailIdentity::~MailIdentity()
{
}

AuthprivIdentity::AuthprivIdentity()
     : Identity("ietf-syslog-types:authpriv")
{
}

AuthprivIdentity::~AuthprivIdentity()
{
}

NtpIdentity::NtpIdentity()
     : Identity("ietf-syslog-types:ntp")
{
}

NtpIdentity::~NtpIdentity()
{
}

AuthIdentity::AuthIdentity()
     : Identity("ietf-syslog-types:auth")
{
}

AuthIdentity::~AuthIdentity()
{
}

UserIdentity::UserIdentity()
     : Identity("ietf-syslog-types:user")
{
}

UserIdentity::~UserIdentity()
{
}

Local5Identity::Local5Identity()
     : Identity("ietf-syslog-types:local5")
{
}

Local5Identity::~Local5Identity()
{
}

NewsIdentity::NewsIdentity()
     : Identity("ietf-syslog-types:news")
{
}

NewsIdentity::~NewsIdentity()
{
}

Local7Identity::Local7Identity()
     : Identity("ietf-syslog-types:local7")
{
}

Local7Identity::~Local7Identity()
{
}

Local6Identity::Local6Identity()
     : Identity("ietf-syslog-types:local6")
{
}

Local6Identity::~Local6Identity()
{
}

Local1Identity::Local1Identity()
     : Identity("ietf-syslog-types:local1")
{
}

Local1Identity::~Local1Identity()
{
}

Local0Identity::Local0Identity()
     : Identity("ietf-syslog-types:local0")
{
}

Local0Identity::~Local0Identity()
{
}

Local3Identity::Local3Identity()
     : Identity("ietf-syslog-types:local3")
{
}

Local3Identity::~Local3Identity()
{
}

Local2Identity::Local2Identity()
     : Identity("ietf-syslog-types:local2")
{
}

Local2Identity::~Local2Identity()
{
}

AuditIdentity::AuditIdentity()
     : Identity("ietf-syslog-types:audit")
{
}

AuditIdentity::~AuditIdentity()
{
}

DaemonIdentity::DaemonIdentity()
     : Identity("ietf-syslog-types:daemon")
{
}

DaemonIdentity::~DaemonIdentity()
{
}

LprIdentity::LprIdentity()
     : Identity("ietf-syslog-types:lpr")
{
}

LprIdentity::~LprIdentity()
{
}

KernIdentity::KernIdentity()
     : Identity("ietf-syslog-types:kern")
{
}

KernIdentity::~KernIdentity()
{
}


const Enum::YLeaf SeverityEnum::emergency {0, "emergency"};
const Enum::YLeaf SeverityEnum::alert {1, "alert"};
const Enum::YLeaf SeverityEnum::critical {2, "critical"};
const Enum::YLeaf SeverityEnum::error {3, "error"};
const Enum::YLeaf SeverityEnum::warning {4, "warning"};
const Enum::YLeaf SeverityEnum::notice {5, "notice"};
const Enum::YLeaf SeverityEnum::info {6, "info"};
const Enum::YLeaf SeverityEnum::debug {7, "debug"};


}
}

