
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "tailf_netconf_monitoring.hpp"

namespace ydk {
namespace tailf_netconf_monitoring {

RestHttpsIdentity::RestHttpsIdentity()
     : Identity("tailf-netconf-monitoring:rest-https")
{
}

RestHttpsIdentity::~RestHttpsIdentity()
{
}

CliSshIdentity::CliSshIdentity()
     : Identity("tailf-netconf-monitoring:cli-ssh")
{
}

CliSshIdentity::~CliSshIdentity()
{
}

CliConsoleIdentity::CliConsoleIdentity()
     : Identity("tailf-netconf-monitoring:cli-console")
{
}

CliConsoleIdentity::~CliConsoleIdentity()
{
}

WebuiHttpsIdentity::WebuiHttpsIdentity()
     : Identity("tailf-netconf-monitoring:webui-https")
{
}

WebuiHttpsIdentity::~WebuiHttpsIdentity()
{
}

SnmpUdpIdentity::SnmpUdpIdentity()
     : Identity("tailf-netconf-monitoring:snmp-udp")
{
}

SnmpUdpIdentity::~SnmpUdpIdentity()
{
}

WebuiHttpIdentity::WebuiHttpIdentity()
     : Identity("tailf-netconf-monitoring:webui-http")
{
}

WebuiHttpIdentity::~WebuiHttpIdentity()
{
}

RestHttpIdentity::RestHttpIdentity()
     : Identity("tailf-netconf-monitoring:rest-http")
{
}

RestHttpIdentity::~RestHttpIdentity()
{
}

NetconfTcpIdentity::NetconfTcpIdentity()
     : Identity("tailf-netconf-monitoring:netconf-tcp")
{
}

NetconfTcpIdentity::~NetconfTcpIdentity()
{
}

CliTcpIdentity::CliTcpIdentity()
     : Identity("tailf-netconf-monitoring:cli-tcp")
{
}

CliTcpIdentity::~CliTcpIdentity()
{
}


}
}

