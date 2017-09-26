
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_syslog_types.hpp"

using namespace ydk;

namespace ietf {
namespace ietf_syslog_types {

SyslogFacility::SyslogFacility()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:syslog-facility")
{

}

SyslogFacility::~SyslogFacility()
{
}

Audit::Audit()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:audit")
{

}

Audit::~Audit()
{
}

Auth::Auth()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:auth")
{

}

Auth::~Auth()
{
}

Authpriv::Authpriv()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:authpriv")
{

}

Authpriv::~Authpriv()
{
}

Console::Console()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:console")
{

}

Console::~Console()
{
}

Cron::Cron()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:cron")
{

}

Cron::~Cron()
{
}

Cron2::Cron2()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:cron2")
{

}

Cron2::~Cron2()
{
}

Daemon::Daemon()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:daemon")
{

}

Daemon::~Daemon()
{
}

Ftp::Ftp()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:ftp")
{

}

Ftp::~Ftp()
{
}

Kern::Kern()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:kern")
{

}

Kern::~Kern()
{
}

Local0::Local0()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local0")
{

}

Local0::~Local0()
{
}

Local1::Local1()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local1")
{

}

Local1::~Local1()
{
}

Local2::Local2()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local2")
{

}

Local2::~Local2()
{
}

Local3::Local3()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local3")
{

}

Local3::~Local3()
{
}

Local4::Local4()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local4")
{

}

Local4::~Local4()
{
}

Local5::Local5()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local5")
{

}

Local5::~Local5()
{
}

Local6::Local6()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local6")
{

}

Local6::~Local6()
{
}

Local7::Local7()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:local7")
{

}

Local7::~Local7()
{
}

Lpr::Lpr()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:lpr")
{

}

Lpr::~Lpr()
{
}

Mail::Mail()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:mail")
{

}

Mail::~Mail()
{
}

News::News()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:news")
{

}

News::~News()
{
}

Ntp::Ntp()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:ntp")
{

}

Ntp::~Ntp()
{
}

Syslog::Syslog()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:syslog")
{

}

Syslog::~Syslog()
{
}

User::User()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:user")
{

}

User::~User()
{
}

Uucp::Uucp()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-syslog-types", "ietf-syslog-types", "ietf-syslog-types:uucp")
{

}

Uucp::~Uucp()
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

