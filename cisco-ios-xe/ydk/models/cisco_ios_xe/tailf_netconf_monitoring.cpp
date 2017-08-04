
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "tailf_netconf_monitoring.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace tailf_netconf_monitoring {

RestHttp::RestHttp()
     : Identity("http://tail-f.com/yang/netconf-monitoring", "tailf-netconf-monitoring", "tailf-netconf-monitoring:rest-http")
{
}

RestHttp::~RestHttp()
{
}

NetconfTcp::NetconfTcp()
     : Identity("http://tail-f.com/yang/netconf-monitoring", "tailf-netconf-monitoring", "tailf-netconf-monitoring:netconf-tcp")
{
}

NetconfTcp::~NetconfTcp()
{
}

CliConsole::CliConsole()
     : Identity("http://tail-f.com/yang/netconf-monitoring", "tailf-netconf-monitoring", "tailf-netconf-monitoring:cli-console")
{
}

CliConsole::~CliConsole()
{
}

CliSsh::CliSsh()
     : Identity("http://tail-f.com/yang/netconf-monitoring", "tailf-netconf-monitoring", "tailf-netconf-monitoring:cli-ssh")
{
}

CliSsh::~CliSsh()
{
}

WebuiHttp::WebuiHttp()
     : Identity("http://tail-f.com/yang/netconf-monitoring", "tailf-netconf-monitoring", "tailf-netconf-monitoring:webui-http")
{
}

WebuiHttp::~WebuiHttp()
{
}

SnmpUdp::SnmpUdp()
     : Identity("http://tail-f.com/yang/netconf-monitoring", "tailf-netconf-monitoring", "tailf-netconf-monitoring:snmp-udp")
{
}

SnmpUdp::~SnmpUdp()
{
}

WebuiHttps::WebuiHttps()
     : Identity("http://tail-f.com/yang/netconf-monitoring", "tailf-netconf-monitoring", "tailf-netconf-monitoring:webui-https")
{
}

WebuiHttps::~WebuiHttps()
{
}

RestHttps::RestHttps()
     : Identity("http://tail-f.com/yang/netconf-monitoring", "tailf-netconf-monitoring", "tailf-netconf-monitoring:rest-https")
{
}

RestHttps::~RestHttps()
{
}

CliTcp::CliTcp()
     : Identity("http://tail-f.com/yang/netconf-monitoring", "tailf-netconf-monitoring", "tailf-netconf-monitoring:cli-tcp")
{
}

CliTcp::~CliTcp()
{
}


}
}
