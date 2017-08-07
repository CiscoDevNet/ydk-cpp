#ifndef _IANA_IF_TYPE_
#define _IANA_IF_TYPE_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ietf_interfaces.hpp"

namespace ietf {
namespace iana_if_type {

class IanaInterfaceType : public ietf_interfaces::InterfaceType, virtual ydk::Identity
{
    public:
        IanaInterfaceType();
        ~IanaInterfaceType();


}; // IanaInterfaceType

class Pos : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pos();
        ~Pos();


}; // Pos

class Hiperlan2 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hiperlan2();
        ~Hiperlan2();


}; // Hiperlan2

class G703At2Mb : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G703At2Mb();
        ~G703At2Mb();


}; // G703At2Mb

class Rfc877X25 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rfc877X25();
        ~Rfc877X25();


}; // Rfc877X25

class Dvbasiin : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbasiin();
        ~Dvbasiin();


}; // Dvbasiin

class Gfp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gfp();
        ~Gfp();


}; // Gfp

class Sonetoverheadchannel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonetoverheadchannel();
        ~Sonetoverheadchannel();


}; // Sonetoverheadchannel

class Pppmultilinkbundle : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pppmultilinkbundle();
        ~Pppmultilinkbundle();


}; // Pppmultilinkbundle

class Lmp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lmp();
        ~Lmp();


}; // Lmp

class Eplrs : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Eplrs();
        ~Eplrs();


}; // Eplrs

class Lapd : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapd();
        ~Lapd();


}; // Lapd

class Ds0Bundle : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds0Bundle();
        ~Ds0Bundle();


}; // Ds0Bundle

class Docscablemcmtsdownstream : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscablemcmtsdownstream();
        ~Docscablemcmtsdownstream();


}; // Docscablemcmtsdownstream

class Ifvfitype : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ifvfitype();
        ~Ifvfitype();


}; // Ifvfitype

class Propmultiplexor : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propmultiplexor();
        ~Propmultiplexor();


}; // Propmultiplexor

class IfGsn : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IfGsn();
        ~IfGsn();


}; // IfGsn

class Macseccontrolledif : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Macseccontrolledif();
        ~Macseccontrolledif();


}; // Macseccontrolledif

class Gr303Idt : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gr303Idt();
        ~Gr303Idt();


}; // Gr303Idt

class Vdsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vdsl();
        ~Vdsl();


}; // Vdsl

class Wwanpp2 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Wwanpp2();
        ~Wwanpp2();


}; // Wwanpp2

class A12Mppswitch : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        A12Mppswitch();
        ~A12Mppswitch();


}; // A12Mppswitch

class Interleave : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Interleave();
        ~Interleave();


}; // Interleave

class Ds1Fdl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds1Fdl();
        ~Ds1Fdl();


}; // Ds1Fdl

class Frf16Mfrbundle : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Frf16Mfrbundle();
        ~Frf16Mfrbundle();


}; // Frf16Mfrbundle

class Tr008 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tr008();
        ~Tr008();


}; // Tr008

class Mpegtransport : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpegtransport();
        ~Mpegtransport();


}; // Mpegtransport

class Econet : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Econet();
        ~Econet();


}; // Econet

class Ciscoislvlan : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ciscoislvlan();
        ~Ciscoislvlan();


}; // Ciscoislvlan

class L2Vlan : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L2Vlan();
        ~L2Vlan();


}; // L2Vlan

class Dvbrcsmaclayer : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrcsmaclayer();
        ~Dvbrcsmaclayer();


}; // Dvbrcsmaclayer

class Pdnetherloop1 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pdnetherloop1();
        ~Pdnetherloop1();


}; // Pdnetherloop1

class Atmlogical : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmlogical();
        ~Atmlogical();


}; // Atmlogical

class Aal5 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aal5();
        ~Aal5();


}; // Aal5

class Basicisdn : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Basicisdn();
        ~Basicisdn();


}; // Basicisdn

class Dvbrcstdma : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrcstdma();
        ~Dvbrcstdma();


}; // Dvbrcstdma

class Rsrb : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rsrb();
        ~Rsrb();


}; // Rsrb

class Atmbond : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmbond();
        ~Atmbond();


}; // Atmbond

class X86Laps : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X86Laps();
        ~X86Laps();


}; // X86Laps

class Framerelayinterconnect : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelayinterconnect();
        ~Framerelayinterconnect();


}; // Framerelayinterconnect

class Slip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Slip();
        ~Slip();


}; // Slip

class Vmwarevirtualnic : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vmwarevirtualnic();
        ~Vmwarevirtualnic();


}; // Vmwarevirtualnic

class Atmvirtual : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmvirtual();
        ~Atmvirtual();


}; // Atmvirtual

class Fciplink : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fciplink();
        ~Fciplink();


}; // Fciplink

class Isup : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isup();
        ~Isup();


}; // Isup

class Virtualtg : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Virtualtg();
        ~Virtualtg();


}; // Virtualtg

class Miox25 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Miox25();
        ~Miox25();


}; // Miox25

class Adsl2Plus : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl2Plus();
        ~Adsl2Plus();


}; // Adsl2Plus

class Iso88024Tokenbus : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88024Tokenbus();
        ~Iso88024Tokenbus();


}; // Iso88024Tokenbus

class Rfc1483 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rfc1483();
        ~Rfc1483();


}; // Rfc1483

class Framerelayservice : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelayservice();
        ~Framerelayservice();


}; // Framerelayservice

class Propcnls : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propcnls();
        ~Propcnls();


}; // Propcnls

class Dvbasiout : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbasiout();
        ~Dvbasiout();


}; // Dvbasiout

class Adsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl();
        ~Adsl();


}; // Adsl

class Mvl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mvl();
        ~Mvl();


}; // Mvl

class Iso88022Llc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88022Llc();
        ~Iso88022Llc();


}; // Iso88022Llc

class Propdocswirelessmaclayer : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propdocswirelessmaclayer();
        ~Propdocswirelessmaclayer();


}; // Propdocswirelessmaclayer

class Other : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Other();
        ~Other();


}; // Other

class Ss7Siglink : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ss7Siglink();
        ~Ss7Siglink();


}; // Ss7Siglink

class Atmsubinterface : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmsubinterface();
        ~Atmsubinterface();


}; // Atmsubinterface

class G9983 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G9983();
        ~G9983();


}; // G9983

class Ppp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ppp();
        ~Ppp();


}; // Ppp

class Sonetpath : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonetpath();
        ~Sonetpath();


}; // Sonetpath

class Myrinet : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Myrinet();
        ~Myrinet();


}; // Myrinet

class Pip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pip();
        ~Pip();


}; // Pip

class Framerelaympi : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelaympi();
        ~Framerelaympi();


}; // Framerelaympi

class Atmvciendpt : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmvciendpt();
        ~Atmvciendpt();


}; // Atmvciendpt

class Hostpad : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hostpad();
        ~Hostpad();


}; // Hostpad

class Qllc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Qllc();
        ~Qllc();


}; // Qllc

class Ipforward : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipforward();
        ~Ipforward();


}; // Ipforward

class Qam : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Qam();
        ~Qam();


}; // Qam

class Escon : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Escon();
        ~Escon();


}; // Escon

class Voiceoverframerelay : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceoverframerelay();
        ~Voiceoverframerelay();


}; // Voiceoverframerelay

class Propatm : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propatm();
        ~Propatm();


}; // Propatm

class Ds3 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds3();
        ~Ds3();


}; // Ds3

class Vmwarenicteam : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vmwarenicteam();
        ~Vmwarenicteam();


}; // Vmwarenicteam

class Hdh1822 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdh1822();
        ~Hdh1822();


}; // Hdh1822

class G9981 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G9981();
        ~G9981();


}; // G9981

class Ultra : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ultra();
        ~Ultra();


}; // Ultra

class Sdsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sdsl();
        ~Sdsl();


}; // Sdsl

class H323Proxy : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        H323Proxy();
        ~H323Proxy();


}; // H323Proxy

class Stacktostack : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Stacktostack();
        ~Stacktostack();


}; // Stacktostack

class Voicefxs : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicefxs();
        ~Voicefxs();


}; // Voicefxs

class Mpls : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpls();
        ~Mpls();


}; // Mpls

class Smdsdxi : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Smdsdxi();
        ~Smdsdxi();


}; // Smdsdxi

class Voiceebs : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceebs();
        ~Voiceebs();


}; // Voiceebs

class Wwanpp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Wwanpp();
        ~Wwanpp();


}; // Wwanpp

class Cabledownstreamrfport : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cabledownstreamrfport();
        ~Cabledownstreamrfport();


}; // Cabledownstreamrfport

class Voiceencap : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceencap();
        ~Voiceencap();


}; // Voiceencap

class Gtp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gtp();
        ~Gtp();


}; // Gtp

class Tdlc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tdlc();
        ~Tdlc();


}; // Tdlc

class Regular1822 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Regular1822();
        ~Regular1822();


}; // Regular1822

class Dlsw : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dlsw();
        ~Dlsw();


}; // Dlsw

class Ipswitch : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipswitch();
        ~Ipswitch();


}; // Ipswitch

class Smdsicip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Smdsicip();
        ~Smdsicip();


}; // Smdsicip

class Alueponphysicaluni : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Alueponphysicaluni();
        ~Alueponphysicaluni();


}; // Alueponphysicaluni

class Docscabledownstream : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscabledownstream();
        ~Docscabledownstream();


}; // Docscabledownstream

class Coffee : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Coffee();
        ~Coffee();


}; // Coffee

class Pon622 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pon622();
        ~Pon622();


}; // Pon622

class Sonetvt : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonetvt();
        ~Sonetvt();


}; // Sonetvt

class Lapb : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapb();
        ~Lapb();


}; // Lapb

class Q2931 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Q2931();
        ~Q2931();


}; // Q2931

class Fastether : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fastether();
        ~Fastether();


}; // Fastether

class Proppointtopointserial : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Proppointtopointserial();
        ~Proppointtopointserial();


}; // Proppointtopointserial

class Lapf : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapf();
        ~Lapf();


}; // Lapf

class Dvbrccupstream : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrccupstream();
        ~Dvbrccupstream();


}; // Dvbrccupstream

class Atmfuni : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmfuni();
        ~Atmfuni();


}; // Atmfuni

class Frforward : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Frforward();
        ~Frforward();


}; // Frforward

class Primaryisdn : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Primaryisdn();
        ~Primaryisdn();


}; // Primaryisdn

class Ipoverclaw : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipoverclaw();
        ~Ipoverclaw();


}; // Ipoverclaw

class Atmradio : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmradio();
        ~Atmradio();


}; // Atmradio

class Ieee1394 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee1394();
        ~Ieee1394();


}; // Ieee1394

class Ces : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ces();
        ~Ces();


}; // Ces

class Opticaltransport : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Opticaltransport();
        ~Opticaltransport();


}; // Opticaltransport

class X25Mlp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25Mlp();
        ~X25Mlp();


}; // X25Mlp

class Mfsiglink : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mfsiglink();
        ~Mfsiglink();


}; // Mfsiglink

class Hippiinterface : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hippiinterface();
        ~Hippiinterface();


}; // Hippiinterface

class Aal2 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aal2();
        ~Aal2();


}; // Aal2

class V11 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V11();
        ~V11();


}; // V11

class Atmdxi : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmdxi();
        ~Atmdxi();


}; // Atmdxi

class Aflane8025 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aflane8025();
        ~Aflane8025();


}; // Aflane8025

class Voiceoverip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceoverip();
        ~Voiceoverip();


}; // Voiceoverip

class Alugponphysicaluni : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Alugponphysicaluni();
        ~Alugponphysicaluni();


}; // Alugponphysicaluni

class Atmima : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmima();
        ~Atmima();


}; // Atmima

class Capwapdot11Profile : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Capwapdot11Profile();
        ~Capwapdot11Profile();


}; // Capwapdot11Profile

class Aluelp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aluelp();
        ~Aluelp();


}; // Aluelp

class Aflane8023 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aflane8023();
        ~Aflane8023();


}; // Aflane8023

class Ipovercdlc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipovercdlc();
        ~Ipovercdlc();


}; // Ipovercdlc

class Iso88025Dtr : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Dtr();
        ~Iso88025Dtr();


}; // Iso88025Dtr

class Siptg : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Siptg();
        ~Siptg();


}; // Siptg

class Hippi : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hippi();
        ~Hippi();


}; // Hippi

class Sonet : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonet();
        ~Sonet();


}; // Sonet

class Modem : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Modem();
        ~Modem();


}; // Modem

class Plc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Plc();
        ~Plc();


}; // Plc

class Ieee80216Wman : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80216Wman();
        ~Ieee80216Wman();


}; // Ieee80216Wman

class Async : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Async();
        ~Async();


}; // Async

class Opticalchannelgroup : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Opticalchannelgroup();
        ~Opticalchannelgroup();


}; // Opticalchannelgroup

class Ethernetcsmacd : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ethernetcsmacd();
        ~Ethernetcsmacd();


}; // Ethernetcsmacd

class Msdsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Msdsl();
        ~Msdsl();


}; // Msdsl

class X25Ple : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25Ple();
        ~X25Ple();


}; // X25Ple

class Docscableupstreamchannel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscableupstreamchannel();
        ~Docscableupstreamchannel();


}; // Docscableupstreamchannel

class Docscableupstream : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscableupstream();
        ~Docscableupstream();


}; // Docscableupstream

class Framerelay : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelay();
        ~Framerelay();


}; // Framerelay

class Gr303Rdt : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gr303Rdt();
        ~Gr303Rdt();


}; // Gr303Rdt

class Infiniband : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Infiniband();
        ~Infiniband();


}; // Infiniband

class Cctemul : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cctemul();
        ~Cctemul();


}; // Cctemul

class Pdnetherloop2 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pdnetherloop2();
        ~Pdnetherloop2();


}; // Pdnetherloop2

class Dcn : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dcn();
        ~Dcn();


}; // Dcn

class Docscablemaclayer : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscablemaclayer();
        ~Docscablemaclayer();


}; // Docscablemaclayer

class Arcnetplus : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Arcnetplus();
        ~Arcnetplus();


}; // Arcnetplus

class Voiceem : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceem();
        ~Voiceem();


}; // Voiceem

class Fast : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fast();
        ~Fast();


}; // Fast

class Compositelink : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Compositelink();
        ~Compositelink();


}; // Compositelink

class Rpr : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rpr();
        ~Rpr();


}; // Rpr

class Atm : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atm();
        ~Atm();


}; // Atm

class Transphdlc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Transphdlc();
        ~Transphdlc();


}; // Transphdlc

class Voiceoveratm : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceoveratm();
        ~Voiceoveratm();


}; // Voiceoveratm

class G9982 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G9982();
        ~G9982();


}; // G9982

class Ieee80211 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80211();
        ~Ieee80211();


}; // Ieee80211

class Capwapwtpvirtualradio : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Capwapwtpvirtualradio();
        ~Capwapwtpvirtualradio();


}; // Capwapwtpvirtualradio

class Otnodu : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Otnodu();
        ~Otnodu();


}; // Otnodu

class Sixtofour : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sixtofour();
        ~Sixtofour();


}; // Sixtofour

class Docscableupstreamrfport : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscableupstreamrfport();
        ~Docscableupstreamrfport();


}; // Docscableupstreamrfport

class Mplstunnel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mplstunnel();
        ~Mplstunnel();


}; // Mplstunnel

class Bridge : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bridge();
        ~Bridge();


}; // Bridge

class Ds0 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds0();
        ~Ds0();


}; // Ds0

class Proteon80Mbit : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Proteon80Mbit();
        ~Proteon80Mbit();


}; // Proteon80Mbit

class Fibrechannel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fibrechannel();
        ~Fibrechannel();


}; // Fibrechannel

class V35 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V35();
        ~V35();


}; // V35

class Propvirtual : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propvirtual();
        ~Propvirtual();


}; // Propvirtual

class Shdsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Shdsl();
        ~Shdsl();


}; // Shdsl

class E1 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        E1();
        ~E1();


}; // E1

class Bsc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bsc();
        ~Bsc();


}; // Bsc

class Isdnu : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isdnu();
        ~Isdnu();


}; // Isdnu

class Cnr : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cnr();
        ~Cnr();


}; // Cnr

class Srp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Srp();
        ~Srp();


}; // Srp

class Digitalwrapperoverheadchannel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Digitalwrapperoverheadchannel();
        ~Digitalwrapperoverheadchannel();


}; // Digitalwrapperoverheadchannel

class Starlan : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Starlan();
        ~Starlan();


}; // Starlan

class Iso88023Csmacd : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88023Csmacd();
        ~Iso88023Csmacd();


}; // Iso88023Csmacd

class Virtualipaddress : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Virtualipaddress();
        ~Virtualipaddress();


}; // Virtualipaddress

class Nsip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Nsip();
        ~Nsip();


}; // Nsip

class Ethernet3Mbit : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ethernet3Mbit();
        ~Ethernet3Mbit();


}; // Ethernet3Mbit

class Ifpwtype : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ifpwtype();
        ~Ifpwtype();


}; // Ifpwtype

class Localtalk : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Localtalk();
        ~Localtalk();


}; // Localtalk

class Otnotu : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Otnotu();
        ~Otnotu();


}; // Otnotu

class Iso88025Fiber : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Fiber();
        ~Iso88025Fiber();


}; // Iso88025Fiber

class Voicefxo : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicefxo();
        ~Voicefxo();


}; // Voicefxo

class Reachdsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Reachdsl();
        ~Reachdsl();


}; // Reachdsl

class Capwapdot11Bss : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Capwapdot11Bss();
        ~Capwapdot11Bss();


}; // Capwapdot11Bss

class Propwirelessp2P : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propwirelessp2P();
        ~Propwirelessp2P();


}; // Propwirelessp2P

class Iso88025Crfpint : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Crfpint();
        ~Iso88025Crfpint();


}; // Iso88025Crfpint

class Ddnx25 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ddnx25();
        ~Ddnx25();


}; // Ddnx25

class Ieee80212 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80212();
        ~Ieee80212();


}; // Ieee80212

class Dvbrccmaclayer : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrccmaclayer();
        ~Dvbrccmaclayer();


}; // Dvbrccmaclayer

class Linegroup : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Linegroup();
        ~Linegroup();


}; // Linegroup

class Aluepononu : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aluepononu();
        ~Aluepononu();


}; // Aluepononu

class Sip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sip();
        ~Sip();


}; // Sip

class Voicedid : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicedid();
        ~Voicedid();


}; // Voicedid

class Alugpononu : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Alugpononu();
        ~Alugpononu();


}; // Alugpononu

class Cblvectastar : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cblvectastar();
        ~Cblvectastar();


}; // Cblvectastar

class Ipoveratm : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipoveratm();
        ~Ipoveratm();


}; // Ipoveratm

class Aviciopticalether : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aviciopticalether();
        ~Aviciopticalether();


}; // Aviciopticalether

class L3Ipvlan : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L3Ipvlan();
        ~L3Ipvlan();


}; // L3Ipvlan

class Termpad : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Termpad();
        ~Termpad();


}; // Termpad

class X213 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X213();
        ~X213();


}; // X213

class Adsl2 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl2();
        ~Adsl2();


}; // Adsl2

class Tunnel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tunnel();
        ~Tunnel();


}; // Tunnel

class Arap : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Arap();
        ~Arap();


}; // Arap

class Ds1 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds1();
        ~Ds1();


}; // Ds1

class Proteon10Mbit : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Proteon10Mbit();
        ~Proteon10Mbit();


}; // Proteon10Mbit

class Alueponlogicallink : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Alueponlogicallink();
        ~Alueponlogicallink();


}; // Alueponlogicallink

class Voicefgdos : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicefgdos();
        ~Voicefgdos();


}; // Voicefgdos

class V36 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V36();
        ~V36();


}; // V36

class Ieee8023Adlag : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee8023Adlag();
        ~Ieee8023Adlag();


}; // Ieee8023Adlag

class Gigabitethernet : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gigabitethernet();
        ~Gigabitethernet();


}; // Gigabitethernet

class Mediamailoverip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mediamailoverip();
        ~Mediamailoverip();


}; // Mediamailoverip

class Voicefgdeana : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicefgdeana();
        ~Voicefgdeana();


}; // Voicefgdeana

class Nfas : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Nfas();
        ~Nfas();


}; // Nfas

class X25Huntgroup : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25Huntgroup();
        ~X25Huntgroup();


}; // X25Huntgroup

class Idsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Idsl();
        ~Idsl();


}; // Idsl

class Homepna : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Homepna();
        ~Homepna();


}; // Homepna

class Sipsig : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sipsig();
        ~Sipsig();


}; // Sipsig

class Pon155 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pon155();
        ~Pon155();


}; // Pon155

class Para : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Para();
        ~Para();


}; // Para

class Hdlc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdlc();
        ~Hdlc();


}; // Hdlc

class Propbwap2Mp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propbwap2Mp();
        ~Propbwap2Mp();


}; // Propbwap2Mp

class Fastetherfx : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fastetherfx();
        ~Fastetherfx();


}; // Fastetherfx

class Actelismetaloop : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Actelismetaloop();
        ~Actelismetaloop();


}; // Actelismetaloop

class Dvbrccdownstream : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrccdownstream();
        ~Dvbrccdownstream();


}; // Dvbrccdownstream

class Bits : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bits();
        ~Bits();


}; // Bits

class Voiceovercable : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceovercable();
        ~Voiceovercable();


}; // Voiceovercable

class Channel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Channel();
        ~Channel();


}; // Channel

class V37 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V37();
        ~V37();


}; // V37

class Dvbtdm : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbtdm();
        ~Dvbtdm();


}; // Dvbtdm

class Bgppolicyaccounting : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bgppolicyaccounting();
        ~Bgppolicyaccounting();


}; // Bgppolicyaccounting

class Mpc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpc();
        ~Mpc();


}; // Mpc

class Dtm : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dtm();
        ~Dtm();


}; // Dtm

class Eon : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Eon();
        ~Eon();


}; // Eon

class Radiomac : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Radiomac();
        ~Radiomac();


}; // Radiomac

class Ilan : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ilan();
        ~Ilan();


}; // Ilan

class Frdlciendpt : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Frdlciendpt();
        ~Frdlciendpt();


}; // Frdlciendpt

class G703At64K : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G703At64K();
        ~G703At64K();


}; // G703At64K

class Propdocswirelessdownstream : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propdocswirelessdownstream();
        ~Propdocswirelessdownstream();


}; // Propdocswirelessdownstream

class Ieee802154 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee802154();
        ~Ieee802154();


}; // Ieee802154

class Hssi : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hssi();
        ~Hssi();


}; // Hssi

class Aluepon : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aluepon();
        ~Aluepon();


}; // Aluepon

class Sdlc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sdlc();
        ~Sdlc();


}; // Sdlc

class Isdn : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isdn();
        ~Isdn();


}; // Isdn

class Digitalpowerline : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Digitalpowerline();
        ~Digitalpowerline();


}; // Digitalpowerline

class Vdsl2 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vdsl2();
        ~Vdsl2();


}; // Vdsl2

class Arcnet : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Arcnet();
        ~Arcnet();


}; // Arcnet

class Rs232 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rs232();
        ~Rs232();


}; // Rs232

class Usb : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Usb();
        ~Usb();


}; // Usb

class Macsecuncontrolledif : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Macsecuncontrolledif();
        ~Macsecuncontrolledif();


}; // Macsecuncontrolledif

class Iso88025Tokenring : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Tokenring();
        ~Iso88025Tokenring();


}; // Iso88025Tokenring

class Opticalchannel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Opticalchannel();
        ~Opticalchannel();


}; // Opticalchannel

class Fddi : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fddi();
        ~Fddi();


}; // Fddi

class Gpon : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gpon();
        ~Gpon();


}; // Gpon

class Softwareloopback : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Softwareloopback();
        ~Softwareloopback();


}; // Softwareloopback

class Imt : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Imt();
        ~Imt();


}; // Imt

class Ibm370Parchan : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ibm370Parchan();
        ~Ibm370Parchan();


}; // Ibm370Parchan

class L3Ipxvlan : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L3Ipxvlan();
        ~L3Ipxvlan();


}; // L3Ipxvlan

class Iso88026Man : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88026Man();
        ~Iso88026Man();


}; // Iso88026Man

class Ip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ip();
        ~Ip();


}; // Ip

class Propdocswirelessupstream : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propdocswirelessupstream();
        ~Propdocswirelessupstream();


}; // Propdocswirelessupstream

class Telink : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Telink();
        ~Telink();


}; // Telink

class Radsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Radsl();
        ~Radsl();


}; // Radsl

class Isdns : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isdns();
        ~Isdns();


}; // Isdns

class Hyperchannel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hyperchannel();
        ~Hyperchannel();


}; // Hyperchannel

class Hdsl2 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdsl2();
        ~Hdsl2();


}; // Hdsl2

class Mocaversion1 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mocaversion1();
        ~Mocaversion1();


}; // Mocaversion1

class H323Gatekeeper : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        H323Gatekeeper();
        ~H323Gatekeeper();


}; // H323Gatekeeper

class Voiceemfgd : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceemfgd();
        ~Voiceemfgd();


}; // Voiceemfgd


}
}

#endif /* _IANA_IF_TYPE_ */

