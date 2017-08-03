
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_syslog_types.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ietf_syslog_types {

SyslogFacility::SyslogFacility()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:syslog-facility")
{
}

SyslogFacility::~SyslogFacility()
{
}

Local4::Local4()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local4")
{
}

Local4::~Local4()
{
}

Auth::Auth()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:auth")
{
}

Auth::~Auth()
{
}

News::News()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:news")
{
}

News::~News()
{
}

Console::Console()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:console")
{
}

Console::~Console()
{
}

Local3::Local3()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local3")
{
}

Local3::~Local3()
{
}

Authpriv::Authpriv()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:authpriv")
{
}

Authpriv::~Authpriv()
{
}

Uucp::Uucp()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:uucp")
{
}

Uucp::~Uucp()
{
}

Ntp::Ntp()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:ntp")
{
}

Ntp::~Ntp()
{
}

Kern::Kern()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:kern")
{
}

Kern::~Kern()
{
}

Cron::Cron()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:cron")
{
}

Cron::~Cron()
{
}

Local7::Local7()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local7")
{
}

Local7::~Local7()
{
}

Syslog::Syslog()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:syslog")
{
}

Syslog::~Syslog()
{
}

Daemon::Daemon()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:daemon")
{
}

Daemon::~Daemon()
{
}

Local0::Local0()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local0")
{
}

Local0::~Local0()
{
}

Ftp::Ftp()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:ftp")
{
}

Ftp::~Ftp()
{
}

Audit::Audit()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:audit")
{
}

Audit::~Audit()
{
}

Local1::Local1()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local1")
{
}

Local1::~Local1()
{
}

User::User()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:user")
{
}

User::~User()
{
}

Cron2::Cron2()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:cron2")
{
}

Cron2::~Cron2()
{
}

Local5::Local5()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local5")
{
}

Local5::~Local5()
{
}

Lpr::Lpr()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:lpr")
{
}

Lpr::~Lpr()
{
}

Local6::Local6()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local6")
{
}

Local6::~Local6()
{
}

Local2::Local2()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local2")
{
}

Local2::~Local2()
{
}

Mail::Mail()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:mail")
{
}

Mail::~Mail()
{
}

const Enum::YLeaf Severity::emergency {0, "emergency"};
const Enum::YLeaf Severity::alert {1, "alert"};
const Enum::YLeaf Severity::critical {2, "critical"};
const Enum::YLeaf Severity::error {3, "error"};
const Enum::YLeaf Severity::warning {4, "warning"};
const Enum::YLeaf Severity::notice {5, "notice"};
const Enum::YLeaf Severity::info {6, "info"};
const Enum::YLeaf Severity::debug {7, "debug"};


}
}

