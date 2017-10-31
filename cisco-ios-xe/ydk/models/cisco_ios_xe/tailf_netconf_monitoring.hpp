#ifndef _TAILF_NETCONF_MONITORING_
#define _TAILF_NETCONF_MONITORING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_netconf_monitoring.hpp"

namespace cisco_ios_xe {
namespace tailf_netconf_monitoring {

class CliConsole : public ietf::ietf_netconf_monitoring::Transport, virtual ydk::Identity
{
    public:
        CliConsole();
        ~CliConsole();


}; // CliConsole

class CliSsh : public ietf::ietf_netconf_monitoring::Transport, virtual ydk::Identity
{
    public:
        CliSsh();
        ~CliSsh();


}; // CliSsh

class CliTcp : public ietf::ietf_netconf_monitoring::Transport, virtual ydk::Identity
{
    public:
        CliTcp();
        ~CliTcp();


}; // CliTcp

class WebuiHttp : public ietf::ietf_netconf_monitoring::Transport, virtual ydk::Identity
{
    public:
        WebuiHttp();
        ~WebuiHttp();


}; // WebuiHttp

class WebuiHttps : public ietf::ietf_netconf_monitoring::Transport, virtual ydk::Identity
{
    public:
        WebuiHttps();
        ~WebuiHttps();


}; // WebuiHttps

class NetconfTcp : public ietf::ietf_netconf_monitoring::Transport, virtual ydk::Identity
{
    public:
        NetconfTcp();
        ~NetconfTcp();


}; // NetconfTcp

class SnmpUdp : public ietf::ietf_netconf_monitoring::Transport, virtual ydk::Identity
{
    public:
        SnmpUdp();
        ~SnmpUdp();


}; // SnmpUdp

class RestHttp : public ietf::ietf_netconf_monitoring::Transport, virtual ydk::Identity
{
    public:
        RestHttp();
        ~RestHttp();


}; // RestHttp

class RestHttps : public ietf::ietf_netconf_monitoring::Transport, virtual ydk::Identity
{
    public:
        RestHttps();
        ~RestHttps();


}; // RestHttps


}
}

#endif /* _TAILF_NETCONF_MONITORING_ */

