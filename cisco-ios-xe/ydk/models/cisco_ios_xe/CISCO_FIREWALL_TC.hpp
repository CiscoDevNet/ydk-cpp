#ifndef _CISCO_FIREWALL_TC_
#define _CISCO_FIREWALL_TC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_FIREWALL_TC {

class CFWUrlServerStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf online;
        static const ydk::Enum::YLeaf offline;
        static const ydk::Enum::YLeaf indeterminate;

        static int get_enum_value(const std::string & name) {
            if (name == "online") return 1;
            if (name == "offline") return 2;
            if (name == "indeterminate") return 3;
            return -1;
        }
};

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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "other") return 2;
            if (name == "ip") return 3;
            if (name == "icmp") return 4;
            if (name == "gre") return 5;
            if (name == "udp") return 6;
            if (name == "tcp") return 7;
            return -1;
        }
};

class CFWUrlfVendorId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf websense;
        static const ydk::Enum::YLeaf n2h2;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "websense") return 2;
            if (name == "n2h2") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "other") return 2;
            if (name == "ftp") return 3;
            if (name == "telnet") return 4;
            if (name == "smtp") return 5;
            if (name == "http") return 6;
            if (name == "tacacs") return 7;
            if (name == "dns") return 8;
            if (name == "sqlnet") return 9;
            if (name == "https") return 10;
            if (name == "tftp") return 11;
            if (name == "gopher") return 12;
            if (name == "finger") return 13;
            if (name == "kerberos") return 14;
            if (name == "pop2") return 15;
            if (name == "pop3") return 16;
            if (name == "sunRpc") return 17;
            if (name == "msRpc") return 18;
            if (name == "nntp") return 19;
            if (name == "snmp") return 20;
            if (name == "imap") return 21;
            if (name == "ldap") return 22;
            if (name == "exec") return 23;
            if (name == "login") return 24;
            if (name == "shell") return 25;
            if (name == "msSql") return 26;
            if (name == "sybaseSql") return 27;
            if (name == "nfs") return 28;
            if (name == "lotusnote") return 29;
            if (name == "h323") return 30;
            if (name == "cuseeme") return 31;
            if (name == "realmedia") return 32;
            if (name == "netshow") return 33;
            if (name == "streamworks") return 34;
            if (name == "vdolive") return 35;
            if (name == "sap") return 36;
            if (name == "sip") return 37;
            if (name == "mgcp") return 38;
            if (name == "rtsp") return 39;
            if (name == "skinny") return 40;
            if (name == "gtpV0") return 41;
            if (name == "gtpV1") return 42;
            if (name == "echo") return 43;
            if (name == "discard") return 44;
            if (name == "daytime") return 45;
            if (name == "netstat") return 46;
            if (name == "ssh") return 47;
            if (name == "time") return 48;
            if (name == "tacacsDs") return 49;
            if (name == "bootps") return 50;
            if (name == "bootpc") return 51;
            if (name == "dnsix") return 52;
            if (name == "rtelnet") return 53;
            if (name == "ident") return 54;
            if (name == "sqlServ") return 55;
            if (name == "ntp") return 56;
            if (name == "pwdgen") return 57;
            if (name == "ciscoFna") return 58;
            if (name == "ciscoTna") return 59;
            if (name == "ciscoSys") return 60;
            if (name == "netbiosNs") return 61;
            if (name == "netbiosDgm") return 62;
            if (name == "netbiosSsn") return 63;
            if (name == "sqlSrv") return 64;
            if (name == "snmpTrap") return 65;
            if (name == "rsvd") return 66;
            if (name == "send") return 67;
            if (name == "xdmcp") return 68;
            if (name == "bgp") return 69;
            if (name == "irc") return 70;
            if (name == "qmtp") return 71;
            if (name == "ipx") return 72;
            if (name == "dbase") return 73;
            if (name == "imap3") return 74;
            if (name == "rsvpTunnel") return 75;
            if (name == "hpCollector") return 76;
            if (name == "hpManagedNode") return 77;
            if (name == "hpAlarmMgr") return 78;
            if (name == "microsoftDs") return 79;
            if (name == "creativeServer") return 80;
            if (name == "creativePartnr") return 81;
            if (name == "appleQtc") return 82;
            if (name == "igmpV3Lite") return 83;
            if (name == "isakmp") return 84;
            if (name == "biff") return 85;
            if (name == "who") return 86;
            if (name == "syslog") return 87;
            if (name == "router") return 88;
            if (name == "ncp") return 89;
            if (name == "timed") return 90;
            if (name == "ircServ") return 91;
            if (name == "uucp") return 92;
            if (name == "syslogConn") return 93;
            if (name == "sshell") return 94;
            if (name == "ldaps") return 95;
            if (name == "dhcpFailover") return 96;
            if (name == "msexchRouting") return 97;
            if (name == "entrustSvcs") return 98;
            if (name == "entrustSvcHandler") return 99;
            if (name == "ciscoTdp") return 100;
            if (name == "webster") return 101;
            if (name == "gdoi") return 102;
            if (name == "iscsi") return 103;
            if (name == "cddbp") return 104;
            if (name == "ftps") return 105;
            if (name == "telnets") return 106;
            if (name == "imaps") return 107;
            if (name == "ircs") return 108;
            if (name == "pop3s") return 109;
            if (name == "socks") return 110;
            if (name == "kazaa") return 111;
            if (name == "msSqlM") return 112;
            if (name == "msSna") return 113;
            if (name == "wins") return 114;
            if (name == "ica") return 115;
            if (name == "orasrv") return 116;
            if (name == "rdbDbsDisp") return 117;
            if (name == "vqp") return 118;
            if (name == "icabrowser") return 119;
            if (name == "kermit") return 120;
            if (name == "rsvpEncap") return 121;
            if (name == "l2tp") return 122;
            if (name == "pptp") return 123;
            if (name == "h323Gatestat") return 124;
            if (name == "rWinsock") return 125;
            if (name == "radius") return 126;
            if (name == "hsrp") return 127;
            if (name == "net8Cman") return 128;
            if (name == "oracleEmVp") return 129;
            if (name == "oracleNames") return 130;
            if (name == "oracle") return 131;
            if (name == "ciscoSvcs") return 132;
            if (name == "ciscoNetMgmt") return 133;
            if (name == "stun") return 134;
            if (name == "trRsrb") return 135;
            if (name == "ddnsV3") return 136;
            if (name == "aceSvr") return 137;
            if (name == "giop") return 138;
            if (name == "ttc") return 139;
            if (name == "ipass") return 140;
            if (name == "clp") return 141;
            if (name == "citrixImaClient") return 142;
            if (name == "sms") return 143;
            if (name == "citrix") return 144;
            if (name == "realSecure") return 145;
            if (name == "lotusMtap") return 146;
            if (name == "cifs") return 147;
            if (name == "msDotnetster") return 148;
            if (name == "tarantella") return 149;
            if (name == "fcipPort") return 150;
            if (name == "ssp") return 151;
            if (name == "iscsiTarget") return 152;
            if (name == "mySql") return 153;
            if (name == "msClusterNet") return 154;
            if (name == "ldapAdmin") return 155;
            if (name == "ieee80211Iapp") return 156;
            if (name == "oemAgent") return 157;
            if (name == "rtcPmPort") return 158;
            if (name == "dbControlAgent") return 159;
            if (name == "ipsecMsft") return 160;
            if (name == "sipTls") return 161;
            if (name == "aim") return 162;
            if (name == "pcAnyWhereData") return 163;
            if (name == "pcAnyWhereStat") return 164;
            if (name == "x11") return 165;
            if (name == "ircu") return 166;
            if (name == "n2h2Server") return 167;
            if (name == "h323CallSigAlt") return 168;
            if (name == "yahooMsgr") return 169;
            if (name == "msnMsgr") return 170;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 1;
            if (name == "other") return 2;
            if (name == "interface") return 3;
            if (name == "zone") return 4;
            if (name == "zonepair") return 5;
            if (name == "user") return 6;
            if (name == "usergroup") return 7;
            if (name == "context") return 8;
            return -1;
        }
};


}
}

#endif /* _CISCO_FIREWALL_TC_ */

