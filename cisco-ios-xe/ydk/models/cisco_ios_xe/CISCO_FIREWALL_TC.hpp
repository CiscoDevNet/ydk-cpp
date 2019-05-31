#ifndef _CISCO_FIREWALL_TC_
#define _CISCO_FIREWALL_TC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_FIREWALL_TC {

class CFWNetworkProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf tcp;

};

class CFWApplicationProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf dns;
        static const ydk::Enum::YLeaf sqlnet;
        static const ydk::Enum::YLeaf https;
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf gopher;
        static const ydk::Enum::YLeaf finger;
        static const ydk::Enum::YLeaf kerberos;
        static const ydk::Enum::YLeaf pop2;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf sunRpc;
        static const ydk::Enum::YLeaf msRpc;
        static const ydk::Enum::YLeaf nntp;
        static const ydk::Enum::YLeaf snmp;
        static const ydk::Enum::YLeaf imap;
        static const ydk::Enum::YLeaf ldap;
        static const ydk::Enum::YLeaf exec;
        static const ydk::Enum::YLeaf login;
        static const ydk::Enum::YLeaf shell;
        static const ydk::Enum::YLeaf msSql;
        static const ydk::Enum::YLeaf sybaseSql;
        static const ydk::Enum::YLeaf nfs;
        static const ydk::Enum::YLeaf lotusnote;
        static const ydk::Enum::YLeaf h323;
        static const ydk::Enum::YLeaf cuseeme;
        static const ydk::Enum::YLeaf realmedia;
        static const ydk::Enum::YLeaf netshow;
        static const ydk::Enum::YLeaf streamworks;
        static const ydk::Enum::YLeaf vdolive;
        static const ydk::Enum::YLeaf sap;
        static const ydk::Enum::YLeaf sip;
        static const ydk::Enum::YLeaf mgcp;
        static const ydk::Enum::YLeaf rtsp;
        static const ydk::Enum::YLeaf skinny;
        static const ydk::Enum::YLeaf gtpV0;
        static const ydk::Enum::YLeaf gtpV1;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf daytime;
        static const ydk::Enum::YLeaf netstat;
        static const ydk::Enum::YLeaf ssh;
        static const ydk::Enum::YLeaf time;
        static const ydk::Enum::YLeaf tacacsDs;
        static const ydk::Enum::YLeaf bootps;
        static const ydk::Enum::YLeaf bootpc;
        static const ydk::Enum::YLeaf dnsix;
        static const ydk::Enum::YLeaf rtelnet;
        static const ydk::Enum::YLeaf ident;
        static const ydk::Enum::YLeaf sqlServ;
        static const ydk::Enum::YLeaf ntp;
        static const ydk::Enum::YLeaf pwdgen;
        static const ydk::Enum::YLeaf ciscoFna;
        static const ydk::Enum::YLeaf ciscoTna;
        static const ydk::Enum::YLeaf ciscoSys;
        static const ydk::Enum::YLeaf netbiosNs;
        static const ydk::Enum::YLeaf netbiosDgm;
        static const ydk::Enum::YLeaf netbiosSsn;
        static const ydk::Enum::YLeaf sqlSrv;
        static const ydk::Enum::YLeaf snmpTrap;
        static const ydk::Enum::YLeaf rsvd;
        static const ydk::Enum::YLeaf send;
        static const ydk::Enum::YLeaf xdmcp;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf irc;
        static const ydk::Enum::YLeaf qmtp;
        static const ydk::Enum::YLeaf ipx;
        static const ydk::Enum::YLeaf dbase;
        static const ydk::Enum::YLeaf imap3;
        static const ydk::Enum::YLeaf rsvpTunnel;
        static const ydk::Enum::YLeaf hpCollector;
        static const ydk::Enum::YLeaf hpManagedNode;
        static const ydk::Enum::YLeaf hpAlarmMgr;
        static const ydk::Enum::YLeaf microsoftDs;
        static const ydk::Enum::YLeaf creativeServer;
        static const ydk::Enum::YLeaf creativePartnr;
        static const ydk::Enum::YLeaf appleQtc;
        static const ydk::Enum::YLeaf igmpV3Lite;
        static const ydk::Enum::YLeaf isakmp;
        static const ydk::Enum::YLeaf biff;
        static const ydk::Enum::YLeaf who;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf router;
        static const ydk::Enum::YLeaf ncp;
        static const ydk::Enum::YLeaf timed;
        static const ydk::Enum::YLeaf ircServ;
        static const ydk::Enum::YLeaf uucp;
        static const ydk::Enum::YLeaf syslogConn;
        static const ydk::Enum::YLeaf sshell;
        static const ydk::Enum::YLeaf ldaps;
        static const ydk::Enum::YLeaf dhcpFailover;
        static const ydk::Enum::YLeaf msexchRouting;
        static const ydk::Enum::YLeaf entrustSvcs;
        static const ydk::Enum::YLeaf entrustSvcHandler;
        static const ydk::Enum::YLeaf ciscoTdp;
        static const ydk::Enum::YLeaf webster;
        static const ydk::Enum::YLeaf gdoi;
        static const ydk::Enum::YLeaf iscsi;
        static const ydk::Enum::YLeaf cddbp;
        static const ydk::Enum::YLeaf ftps;
        static const ydk::Enum::YLeaf telnets;
        static const ydk::Enum::YLeaf imaps;
        static const ydk::Enum::YLeaf ircs;
        static const ydk::Enum::YLeaf pop3s;
        static const ydk::Enum::YLeaf socks;
        static const ydk::Enum::YLeaf kazaa;
        static const ydk::Enum::YLeaf msSqlM;
        static const ydk::Enum::YLeaf msSna;
        static const ydk::Enum::YLeaf wins;
        static const ydk::Enum::YLeaf ica;
        static const ydk::Enum::YLeaf orasrv;
        static const ydk::Enum::YLeaf rdbDbsDisp;
        static const ydk::Enum::YLeaf vqp;
        static const ydk::Enum::YLeaf icabrowser;
        static const ydk::Enum::YLeaf kermit;
        static const ydk::Enum::YLeaf rsvpEncap;
        static const ydk::Enum::YLeaf l2tp;
        static const ydk::Enum::YLeaf pptp;
        static const ydk::Enum::YLeaf h323Gatestat;
        static const ydk::Enum::YLeaf rWinsock;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf hsrp;
        static const ydk::Enum::YLeaf net8Cman;
        static const ydk::Enum::YLeaf oracleEmVp;
        static const ydk::Enum::YLeaf oracleNames;
        static const ydk::Enum::YLeaf oracle;
        static const ydk::Enum::YLeaf ciscoSvcs;
        static const ydk::Enum::YLeaf ciscoNetMgmt;
        static const ydk::Enum::YLeaf stun;
        static const ydk::Enum::YLeaf trRsrb;
        static const ydk::Enum::YLeaf ddnsV3;
        static const ydk::Enum::YLeaf aceSvr;
        static const ydk::Enum::YLeaf giop;
        static const ydk::Enum::YLeaf ttc;
        static const ydk::Enum::YLeaf ipass;
        static const ydk::Enum::YLeaf clp;
        static const ydk::Enum::YLeaf citrixImaClient;
        static const ydk::Enum::YLeaf sms;
        static const ydk::Enum::YLeaf citrix;
        static const ydk::Enum::YLeaf realSecure;
        static const ydk::Enum::YLeaf lotusMtap;
        static const ydk::Enum::YLeaf cifs;
        static const ydk::Enum::YLeaf msDotnetster;
        static const ydk::Enum::YLeaf tarantella;
        static const ydk::Enum::YLeaf fcipPort;
        static const ydk::Enum::YLeaf ssp;
        static const ydk::Enum::YLeaf iscsiTarget;
        static const ydk::Enum::YLeaf mySql;
        static const ydk::Enum::YLeaf msClusterNet;
        static const ydk::Enum::YLeaf ldapAdmin;
        static const ydk::Enum::YLeaf ieee80211Iapp;
        static const ydk::Enum::YLeaf oemAgent;
        static const ydk::Enum::YLeaf rtcPmPort;
        static const ydk::Enum::YLeaf dbControlAgent;
        static const ydk::Enum::YLeaf ipsecMsft;
        static const ydk::Enum::YLeaf sipTls;
        static const ydk::Enum::YLeaf aim;
        static const ydk::Enum::YLeaf pcAnyWhereData;
        static const ydk::Enum::YLeaf pcAnyWhereStat;
        static const ydk::Enum::YLeaf x11;
        static const ydk::Enum::YLeaf ircu;
        static const ydk::Enum::YLeaf n2h2Server;
        static const ydk::Enum::YLeaf h323CallSigAlt;
        static const ydk::Enum::YLeaf yahooMsgr;
        static const ydk::Enum::YLeaf msnMsgr;

};

class CFWPolicyTargetType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf zone;
        static const ydk::Enum::YLeaf zonepair;
        static const ydk::Enum::YLeaf user;
        static const ydk::Enum::YLeaf usergroup;
        static const ydk::Enum::YLeaf context;

};

class CFWUrlfVendorId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf websense;
        static const ydk::Enum::YLeaf n2h2;

};

class CFWUrlServerStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf online;
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf indeterminate;

};


}
}

#endif /* _CISCO_FIREWALL_TC_ */

