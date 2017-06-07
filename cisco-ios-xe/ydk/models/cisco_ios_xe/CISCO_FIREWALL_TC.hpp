#ifndef _CISCO_FIREWALL_TC_
#define _CISCO_FIREWALL_TC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_FIREWALL_TC {

class CfwurlserverstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf online;
        static const Enum::YLeaf offline;
        static const Enum::YLeaf indeterminate;

};

class CfwnetworkprotocolEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf other;
        static const Enum::YLeaf ip;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf gre;
        static const Enum::YLeaf udp;
        static const Enum::YLeaf tcp;

};

class CfwurlfvendoridEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf websense;
        static const Enum::YLeaf n2h2;

};

class CfwapplicationprotocolEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf other;
        static const Enum::YLeaf ftp;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf smtp;
        static const Enum::YLeaf http;
        static const Enum::YLeaf tacacs;
        static const Enum::YLeaf dns;
        static const Enum::YLeaf sqlnet;
        static const Enum::YLeaf https;
        static const Enum::YLeaf tftp;
        static const Enum::YLeaf gopher;
        static const Enum::YLeaf finger;
        static const Enum::YLeaf kerberos;
        static const Enum::YLeaf pop2;
        static const Enum::YLeaf pop3;
        static const Enum::YLeaf sunRpc;
        static const Enum::YLeaf msRpc;
        static const Enum::YLeaf nntp;
        static const Enum::YLeaf snmp;
        static const Enum::YLeaf imap;
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf exec;
        static const Enum::YLeaf login;
        static const Enum::YLeaf shell;
        static const Enum::YLeaf msSql;
        static const Enum::YLeaf sybaseSql;
        static const Enum::YLeaf nfs;
        static const Enum::YLeaf lotusnote;
        static const Enum::YLeaf h323;
        static const Enum::YLeaf cuseeme;
        static const Enum::YLeaf realmedia;
        static const Enum::YLeaf netshow;
        static const Enum::YLeaf streamworks;
        static const Enum::YLeaf vdolive;
        static const Enum::YLeaf sap;
        static const Enum::YLeaf sip;
        static const Enum::YLeaf mgcp;
        static const Enum::YLeaf rtsp;
        static const Enum::YLeaf skinny;
        static const Enum::YLeaf gtpV0;
        static const Enum::YLeaf gtpV1;
        static const Enum::YLeaf echo;
        static const Enum::YLeaf discard;
        static const Enum::YLeaf daytime;
        static const Enum::YLeaf netstat;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf time;
        static const Enum::YLeaf tacacsDs;
        static const Enum::YLeaf bootps;
        static const Enum::YLeaf bootpc;
        static const Enum::YLeaf dnsix;
        static const Enum::YLeaf rtelnet;
        static const Enum::YLeaf ident;
        static const Enum::YLeaf sqlServ;
        static const Enum::YLeaf ntp;
        static const Enum::YLeaf pwdgen;
        static const Enum::YLeaf ciscoFna;
        static const Enum::YLeaf ciscoTna;
        static const Enum::YLeaf ciscoSys;
        static const Enum::YLeaf netbiosNs;
        static const Enum::YLeaf netbiosDgm;
        static const Enum::YLeaf netbiosSsn;
        static const Enum::YLeaf sqlSrv;
        static const Enum::YLeaf snmpTrap;
        static const Enum::YLeaf rsvd;
        static const Enum::YLeaf send;
        static const Enum::YLeaf xdmcp;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf irc;
        static const Enum::YLeaf qmtp;
        static const Enum::YLeaf ipx;
        static const Enum::YLeaf dbase;
        static const Enum::YLeaf imap3;
        static const Enum::YLeaf rsvpTunnel;
        static const Enum::YLeaf hpCollector;
        static const Enum::YLeaf hpManagedNode;
        static const Enum::YLeaf hpAlarmMgr;
        static const Enum::YLeaf microsoftDs;
        static const Enum::YLeaf creativeServer;
        static const Enum::YLeaf creativePartnr;
        static const Enum::YLeaf appleQtc;
        static const Enum::YLeaf igmpV3Lite;
        static const Enum::YLeaf isakmp;
        static const Enum::YLeaf biff;
        static const Enum::YLeaf who;
        static const Enum::YLeaf syslog;
        static const Enum::YLeaf router;
        static const Enum::YLeaf ncp;
        static const Enum::YLeaf timed;
        static const Enum::YLeaf ircServ;
        static const Enum::YLeaf uucp;
        static const Enum::YLeaf syslogConn;
        static const Enum::YLeaf sshell;
        static const Enum::YLeaf ldaps;
        static const Enum::YLeaf dhcpFailover;
        static const Enum::YLeaf msexchRouting;
        static const Enum::YLeaf entrustSvcs;
        static const Enum::YLeaf entrustSvcHandler;
        static const Enum::YLeaf ciscoTdp;
        static const Enum::YLeaf webster;
        static const Enum::YLeaf gdoi;
        static const Enum::YLeaf iscsi;
        static const Enum::YLeaf cddbp;
        static const Enum::YLeaf ftps;
        static const Enum::YLeaf telnets;
        static const Enum::YLeaf imaps;
        static const Enum::YLeaf ircs;
        static const Enum::YLeaf pop3s;
        static const Enum::YLeaf socks;
        static const Enum::YLeaf kazaa;
        static const Enum::YLeaf msSqlM;
        static const Enum::YLeaf msSna;
        static const Enum::YLeaf wins;
        static const Enum::YLeaf ica;
        static const Enum::YLeaf orasrv;
        static const Enum::YLeaf rdbDbsDisp;
        static const Enum::YLeaf vqp;
        static const Enum::YLeaf icabrowser;
        static const Enum::YLeaf kermit;
        static const Enum::YLeaf rsvpEncap;
        static const Enum::YLeaf l2tp;
        static const Enum::YLeaf pptp;
        static const Enum::YLeaf h323Gatestat;
        static const Enum::YLeaf rWinsock;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf hsrp;
        static const Enum::YLeaf net8Cman;
        static const Enum::YLeaf oracleEmVp;
        static const Enum::YLeaf oracleNames;
        static const Enum::YLeaf oracle;
        static const Enum::YLeaf ciscoSvcs;
        static const Enum::YLeaf ciscoNetMgmt;
        static const Enum::YLeaf stun;
        static const Enum::YLeaf trRsrb;
        static const Enum::YLeaf ddnsV3;
        static const Enum::YLeaf aceSvr;
        static const Enum::YLeaf giop;
        static const Enum::YLeaf ttc;
        static const Enum::YLeaf ipass;
        static const Enum::YLeaf clp;
        static const Enum::YLeaf citrixImaClient;
        static const Enum::YLeaf sms;
        static const Enum::YLeaf citrix;
        static const Enum::YLeaf realSecure;
        static const Enum::YLeaf lotusMtap;
        static const Enum::YLeaf cifs;
        static const Enum::YLeaf msDotnetster;
        static const Enum::YLeaf tarantella;
        static const Enum::YLeaf fcipPort;
        static const Enum::YLeaf ssp;
        static const Enum::YLeaf iscsiTarget;
        static const Enum::YLeaf mySql;
        static const Enum::YLeaf msClusterNet;
        static const Enum::YLeaf ldapAdmin;
        static const Enum::YLeaf ieee80211Iapp;
        static const Enum::YLeaf oemAgent;
        static const Enum::YLeaf rtcPmPort;
        static const Enum::YLeaf dbControlAgent;
        static const Enum::YLeaf ipsecMsft;
        static const Enum::YLeaf sipTls;
        static const Enum::YLeaf aim;
        static const Enum::YLeaf pcAnyWhereData;
        static const Enum::YLeaf pcAnyWhereStat;
        static const Enum::YLeaf x11;
        static const Enum::YLeaf ircu;
        static const Enum::YLeaf n2h2Server;
        static const Enum::YLeaf h323CallSigAlt;
        static const Enum::YLeaf yahooMsgr;
        static const Enum::YLeaf msnMsgr;

};

class CfwpolicytargettypeEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf other;
        static const Enum::YLeaf interface;
        static const Enum::YLeaf zone;
        static const Enum::YLeaf zonepair;
        static const Enum::YLeaf user;
        static const Enum::YLeaf usergroup;
        static const Enum::YLeaf context;

};


}
}

#endif /* _CISCO_FIREWALL_TC_ */

