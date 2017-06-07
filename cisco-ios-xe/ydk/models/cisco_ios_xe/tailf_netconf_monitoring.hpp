#ifndef _TAILF_NETCONF_MONITORING_
#define _TAILF_NETCONF_MONITORING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_netconf_monitoring.hpp"

namespace ydk {
namespace tailf_netconf_monitoring {

class RestHttpsIdentity : public ietf_netconf_monitoring::TransportIdentity, virtual Identity
{
    public:
        RestHttpsIdentity();
        ~RestHttpsIdentity();


}; // RestHttpsIdentity

class CliSshIdentity : public ietf_netconf_monitoring::TransportIdentity, virtual Identity
{
    public:
        CliSshIdentity();
        ~CliSshIdentity();


}; // CliSshIdentity

class CliConsoleIdentity : public ietf_netconf_monitoring::TransportIdentity, virtual Identity
{
    public:
        CliConsoleIdentity();
        ~CliConsoleIdentity();


}; // CliConsoleIdentity

class WebuiHttpsIdentity : public ietf_netconf_monitoring::TransportIdentity, virtual Identity
{
    public:
        WebuiHttpsIdentity();
        ~WebuiHttpsIdentity();


}; // WebuiHttpsIdentity

class SnmpUdpIdentity : public ietf_netconf_monitoring::TransportIdentity, virtual Identity
{
    public:
        SnmpUdpIdentity();
        ~SnmpUdpIdentity();


}; // SnmpUdpIdentity

class WebuiHttpIdentity : public ietf_netconf_monitoring::TransportIdentity, virtual Identity
{
    public:
        WebuiHttpIdentity();
        ~WebuiHttpIdentity();


}; // WebuiHttpIdentity

class RestHttpIdentity : public ietf_netconf_monitoring::TransportIdentity, virtual Identity
{
    public:
        RestHttpIdentity();
        ~RestHttpIdentity();


}; // RestHttpIdentity

class NetconfTcpIdentity : public ietf_netconf_monitoring::TransportIdentity, virtual Identity
{
    public:
        NetconfTcpIdentity();
        ~NetconfTcpIdentity();


}; // NetconfTcpIdentity

class CliTcpIdentity : public ietf_netconf_monitoring::TransportIdentity, virtual Identity
{
    public:
        CliTcpIdentity();
        ~CliTcpIdentity();


}; // CliTcpIdentity


}
}

#endif /* _TAILF_NETCONF_MONITORING_ */

