#ifndef _IANA_IF_TYPE_
#define _IANA_IF_TYPE_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_interfaces.hpp"

namespace cisco_ios_xr {
namespace iana_if_type {

class IanaInterfaceType : public ietf_interfaces::InterfaceType, virtual ydk::Identity
{
    public:
        IanaInterfaceType();
        ~IanaInterfaceType();


}; // IanaInterfaceType

class Mpc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpc();
        ~Mpc();


}; // Mpc

class Smdsicip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Smdsicip();
        ~Smdsicip();


}; // Smdsicip

class Gigabitethernet : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gigabitethernet();
        ~Gigabitethernet();


}; // Gigabitethernet

class Other : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Other();
        ~Other();


}; // Other

class Ces : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ces();
        ~Ces();


}; // Ces

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

class Gr303Idt : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gr303Idt();
        ~Gr303Idt();


}; // Gr303Idt

class Homepna : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Homepna();
        ~Homepna();


}; // Homepna

class Rpr : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rpr();
        ~Rpr();


}; // Rpr

class Propmultiplexor : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propmultiplexor();
        ~Propmultiplexor();


}; // Propmultiplexor

class Voicedid : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicedid();
        ~Voicedid();


}; // Voicedid

class Framerelaympi : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelaympi();
        ~Framerelaympi();


}; // Framerelaympi

class Fibrechannel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fibrechannel();
        ~Fibrechannel();


}; // Fibrechannel

class E1 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        E1();
        ~E1();


}; // E1

class A12Mppswitch : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        A12Mppswitch();
        ~A12Mppswitch();


}; // A12Mppswitch

class Atmdxi : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmdxi();
        ~Atmdxi();


}; // Atmdxi

class Bridge : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bridge();
        ~Bridge();


}; // Bridge

class Para : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Para();
        ~Para();


}; // Para

class Iso88022Llc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88022Llc();
        ~Iso88022Llc();


}; // Iso88022Llc

class Ieee802154 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee802154();
        ~Ieee802154();


}; // Ieee802154

class Isup : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isup();
        ~Isup();


}; // Isup

class V37 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V37();
        ~V37();


}; // V37

class Ultra : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ultra();
        ~Ultra();


}; // Ultra

class Ipswitch : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipswitch();
        ~Ipswitch();


}; // Ipswitch

class Voiceoveratm : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceoveratm();
        ~Voiceoveratm();


}; // Voiceoveratm

class Mpls : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpls();
        ~Mpls();


}; // Mpls

class Pos : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pos();
        ~Pos();


}; // Pos

class Ip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ip();
        ~Ip();


}; // Ip

class Lmp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lmp();
        ~Lmp();


}; // Lmp

class Frdlciendpt : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Frdlciendpt();
        ~Frdlciendpt();


}; // Frdlciendpt

class Atmsubinterface : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmsubinterface();
        ~Atmsubinterface();


}; // Atmsubinterface

class L2Vlan : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L2Vlan();
        ~L2Vlan();


}; // L2Vlan

class Wwanpp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Wwanpp();
        ~Wwanpp();


}; // Wwanpp

class Gfp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gfp();
        ~Gfp();


}; // Gfp

class Iso88023Csmacd : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88023Csmacd();
        ~Iso88023Csmacd();


}; // Iso88023Csmacd

class Ipoveratm : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipoveratm();
        ~Ipoveratm();


}; // Ipoveratm

class Cnr : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cnr();
        ~Cnr();


}; // Cnr

class Hdh1822 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdh1822();
        ~Hdh1822();


}; // Hdh1822

class Ipovercdlc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipovercdlc();
        ~Ipovercdlc();


}; // Ipovercdlc

class Pdnetherloop1 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pdnetherloop1();
        ~Pdnetherloop1();


}; // Pdnetherloop1

class Voiceovercable : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceovercable();
        ~Voiceovercable();


}; // Voiceovercable

class Ieee80216Wman : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80216Wman();
        ~Ieee80216Wman();


}; // Ieee80216Wman

class Docscablemcmtsdownstream : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscablemcmtsdownstream();
        ~Docscablemcmtsdownstream();


}; // Docscablemcmtsdownstream

class Alueponlogicallink : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Alueponlogicallink();
        ~Alueponlogicallink();


}; // Alueponlogicallink

class Stacktostack : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Stacktostack();
        ~Stacktostack();


}; // Stacktostack

class Hippi : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hippi();
        ~Hippi();


}; // Hippi

class Dvbasiin : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbasiin();
        ~Dvbasiin();


}; // Dvbasiin

class Hiperlan2 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hiperlan2();
        ~Hiperlan2();


}; // Hiperlan2

class Linegroup : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Linegroup();
        ~Linegroup();


}; // Linegroup

class Arap : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Arap();
        ~Arap();


}; // Arap

class Ifpwtype : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ifpwtype();
        ~Ifpwtype();


}; // Ifpwtype

class Mediamailoverip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mediamailoverip();
        ~Mediamailoverip();


}; // Mediamailoverip

class Vmwarevirtualnic : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vmwarevirtualnic();
        ~Vmwarevirtualnic();


}; // Vmwarevirtualnic

class Gpon : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gpon();
        ~Gpon();


}; // Gpon

class Voicefgdos : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicefgdos();
        ~Voicefgdos();


}; // Voicefgdos

class Macseccontrolledif : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Macseccontrolledif();
        ~Macseccontrolledif();


}; // Macseccontrolledif

class Docscableupstreamchannel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscableupstreamchannel();
        ~Docscableupstreamchannel();


}; // Docscableupstreamchannel

class Sonetvt : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonetvt();
        ~Sonetvt();


}; // Sonetvt

class Gr303Rdt : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gr303Rdt();
        ~Gr303Rdt();


}; // Gr303Rdt

class Rfc1483 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rfc1483();
        ~Rfc1483();


}; // Rfc1483

class Pip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pip();
        ~Pip();


}; // Pip

class Capwapdot11Profile : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Capwapdot11Profile();
        ~Capwapdot11Profile();


}; // Capwapdot11Profile

class Telink : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Telink();
        ~Telink();


}; // Telink

class X25Huntgroup : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25Huntgroup();
        ~X25Huntgroup();


}; // X25Huntgroup

class Sdsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sdsl();
        ~Sdsl();


}; // Sdsl

class Iso88025Dtr : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Dtr();
        ~Iso88025Dtr();


}; // Iso88025Dtr

class Arcnet : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Arcnet();
        ~Arcnet();


}; // Arcnet

class Iso88025Fiber : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Fiber();
        ~Iso88025Fiber();


}; // Iso88025Fiber

class Coffee : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Coffee();
        ~Coffee();


}; // Coffee

class Propvirtual : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propvirtual();
        ~Propvirtual();


}; // Propvirtual

class Sipsig : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sipsig();
        ~Sipsig();


}; // Sipsig

class Adsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl();
        ~Adsl();


}; // Adsl

class Dvbrccdownstream : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrccdownstream();
        ~Dvbrccdownstream();


}; // Dvbrccdownstream

class Radiomac : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Radiomac();
        ~Radiomac();


}; // Radiomac

class Digitalpowerline : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Digitalpowerline();
        ~Digitalpowerline();


}; // Digitalpowerline

class Msdsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Msdsl();
        ~Msdsl();


}; // Msdsl

class Bsc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bsc();
        ~Bsc();


}; // Bsc

class Pdnetherloop2 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pdnetherloop2();
        ~Pdnetherloop2();


}; // Pdnetherloop2

class IfGsn : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IfGsn();
        ~IfGsn();


}; // IfGsn

class Tr008 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tr008();
        ~Tr008();


}; // Tr008

class X86Laps : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X86Laps();
        ~X86Laps();


}; // X86Laps

class Fast : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fast();
        ~Fast();


}; // Fast

class Ethernetcsmacd : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ethernetcsmacd();
        ~Ethernetcsmacd();


}; // Ethernetcsmacd

class Dvbtdm : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbtdm();
        ~Dvbtdm();


}; // Dvbtdm

class Fastetherfx : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fastetherfx();
        ~Fastetherfx();


}; // Fastetherfx

class Ethernet3Mbit : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ethernet3Mbit();
        ~Ethernet3Mbit();


}; // Ethernet3Mbit

class Opticalchannel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Opticalchannel();
        ~Opticalchannel();


}; // Opticalchannel

class Primaryisdn : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Primaryisdn();
        ~Primaryisdn();


}; // Primaryisdn

class L3Ipxvlan : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L3Ipxvlan();
        ~L3Ipxvlan();


}; // L3Ipxvlan

class Aluelp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aluelp();
        ~Aluelp();


}; // Aluelp

class Bgppolicyaccounting : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bgppolicyaccounting();
        ~Bgppolicyaccounting();


}; // Bgppolicyaccounting

class Otnodu : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Otnodu();
        ~Otnodu();


}; // Otnodu

class Aflane8025 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aflane8025();
        ~Aflane8025();


}; // Aflane8025

class Slip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Slip();
        ~Slip();


}; // Slip

class Vdsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vdsl();
        ~Vdsl();


}; // Vdsl

class X25Ple : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25Ple();
        ~X25Ple();


}; // X25Ple

class Channel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Channel();
        ~Channel();


}; // Channel

class Adsl2 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl2();
        ~Adsl2();


}; // Adsl2

class Srp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Srp();
        ~Srp();


}; // Srp

class Qam : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Qam();
        ~Qam();


}; // Qam

class G9981 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G9981();
        ~G9981();


}; // G9981

class Sdlc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sdlc();
        ~Sdlc();


}; // Sdlc

class V11 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V11();
        ~V11();


}; // V11

class G9983 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G9983();
        ~G9983();


}; // G9983

class Docscableupstream : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscableupstream();
        ~Docscableupstream();


}; // Docscableupstream

class Dlsw : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dlsw();
        ~Dlsw();


}; // Dlsw

class Pon155 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pon155();
        ~Pon155();


}; // Pon155

class Aluepononu : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aluepononu();
        ~Aluepononu();


}; // Aluepononu

class Opticalchannelgroup : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Opticalchannelgroup();
        ~Opticalchannelgroup();


}; // Opticalchannelgroup

class V35 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V35();
        ~V35();


}; // V35

class Hdsl2 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdsl2();
        ~Hdsl2();


}; // Hdsl2

class Myrinet : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Myrinet();
        ~Myrinet();


}; // Myrinet

class Isdnu : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isdnu();
        ~Isdnu();


}; // Isdnu

class Atmradio : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmradio();
        ~Atmradio();


}; // Atmradio

class Ilan : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ilan();
        ~Ilan();


}; // Ilan

class Adsl2Plus : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl2Plus();
        ~Adsl2Plus();


}; // Adsl2Plus

class Shdsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Shdsl();
        ~Shdsl();


}; // Shdsl

class Propcnls : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propcnls();
        ~Propcnls();


}; // Propcnls

class Aal2 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aal2();
        ~Aal2();


}; // Aal2

class Siptg : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Siptg();
        ~Siptg();


}; // Siptg

class Aflane8023 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aflane8023();
        ~Aflane8023();


}; // Aflane8023

class Ieee1394 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee1394();
        ~Ieee1394();


}; // Ieee1394

class Alueponphysicaluni : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Alueponphysicaluni();
        ~Alueponphysicaluni();


}; // Alueponphysicaluni

class Rs232 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rs232();
        ~Rs232();


}; // Rs232

class Nfas : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Nfas();
        ~Nfas();


}; // Nfas

class L3Ipvlan : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L3Ipvlan();
        ~L3Ipvlan();


}; // L3Ipvlan

class Atmima : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmima();
        ~Atmima();


}; // Atmima

class Docscablemaclayer : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscablemaclayer();
        ~Docscablemaclayer();


}; // Docscablemaclayer

class Compositelink : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Compositelink();
        ~Compositelink();


}; // Compositelink

class G703At2Mb : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G703At2Mb();
        ~G703At2Mb();


}; // G703At2Mb

class Hippiinterface : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hippiinterface();
        ~Hippiinterface();


}; // Hippiinterface

class Mvl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mvl();
        ~Mvl();


}; // Mvl

class Rsrb : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rsrb();
        ~Rsrb();


}; // Rsrb

class Sip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sip();
        ~Sip();


}; // Sip

class Bits : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bits();
        ~Bits();


}; // Bits

class Lapf : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapf();
        ~Lapf();


}; // Lapf

class Qllc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Qllc();
        ~Qllc();


}; // Qllc

class Framerelayinterconnect : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelayinterconnect();
        ~Framerelayinterconnect();


}; // Framerelayinterconnect

class Framerelayservice : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelayservice();
        ~Framerelayservice();


}; // Framerelayservice

class Capwapwtpvirtualradio : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Capwapwtpvirtualradio();
        ~Capwapwtpvirtualradio();


}; // Capwapwtpvirtualradio

class Sonet : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonet();
        ~Sonet();


}; // Sonet

class Cblvectastar : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cblvectastar();
        ~Cblvectastar();


}; // Cblvectastar

class Hssi : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hssi();
        ~Hssi();


}; // Hssi

class Framerelay : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelay();
        ~Framerelay();


}; // Framerelay

class Starlan : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Starlan();
        ~Starlan();


}; // Starlan

class Ieee8023Adlag : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee8023Adlag();
        ~Ieee8023Adlag();


}; // Ieee8023Adlag

class Imt : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Imt();
        ~Imt();


}; // Imt

class Nsip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Nsip();
        ~Nsip();


}; // Nsip

class Otnotu : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Otnotu();
        ~Otnotu();


}; // Otnotu

class Virtualtg : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Virtualtg();
        ~Virtualtg();


}; // Virtualtg

class Lapb : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapb();
        ~Lapb();


}; // Lapb

class Dvbrccupstream : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrccupstream();
        ~Dvbrccupstream();


}; // Dvbrccupstream

class Mocaversion1 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mocaversion1();
        ~Mocaversion1();


}; // Mocaversion1

class Dvbrccmaclayer : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrccmaclayer();
        ~Dvbrccmaclayer();


}; // Dvbrccmaclayer

class Iso88025Tokenring : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Tokenring();
        ~Iso88025Tokenring();


}; // Iso88025Tokenring

class Propdocswirelessmaclayer : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propdocswirelessmaclayer();
        ~Propdocswirelessmaclayer();


}; // Propdocswirelessmaclayer

class Proteon10Mbit : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Proteon10Mbit();
        ~Proteon10Mbit();


}; // Proteon10Mbit

class X213 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X213();
        ~X213();


}; // X213

class Proppointtopointserial : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Proppointtopointserial();
        ~Proppointtopointserial();


}; // Proppointtopointserial

class H323Gatekeeper : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        H323Gatekeeper();
        ~H323Gatekeeper();


}; // H323Gatekeeper

class Ibm370Parchan : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ibm370Parchan();
        ~Ibm370Parchan();


}; // Ibm370Parchan

class Fciplink : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fciplink();
        ~Fciplink();


}; // Fciplink

class Mpegtransport : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpegtransport();
        ~Mpegtransport();


}; // Mpegtransport

class Frforward : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Frforward();
        ~Frforward();


}; // Frforward

class Proteon80Mbit : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Proteon80Mbit();
        ~Proteon80Mbit();


}; // Proteon80Mbit

class Ifvfitype : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ifvfitype();
        ~Ifvfitype();


}; // Ifvfitype

class Regular1822 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Regular1822();
        ~Regular1822();


}; // Regular1822

class Dvbrcstdma : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrcstdma();
        ~Dvbrcstdma();


}; // Dvbrcstdma

class Opticaltransport : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Opticaltransport();
        ~Opticaltransport();


}; // Opticaltransport

class Localtalk : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Localtalk();
        ~Localtalk();


}; // Localtalk

class Ppp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ppp();
        ~Ppp();


}; // Ppp

class Dtm : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dtm();
        ~Dtm();


}; // Dtm

class Alugpononu : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Alugpononu();
        ~Alugpononu();


}; // Alugpononu

class Cabledownstreamrfport : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cabledownstreamrfport();
        ~Cabledownstreamrfport();


}; // Cabledownstreamrfport

class Mplstunnel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mplstunnel();
        ~Mplstunnel();


}; // Mplstunnel

class Hostpad : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hostpad();
        ~Hostpad();


}; // Hostpad

class Voiceencap : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceencap();
        ~Voiceencap();


}; // Voiceencap

class Escon : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Escon();
        ~Escon();


}; // Escon

class Voicefxo : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicefxo();
        ~Voicefxo();


}; // Voicefxo

class Miox25 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Miox25();
        ~Miox25();


}; // Miox25

class Hyperchannel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hyperchannel();
        ~Hyperchannel();


}; // Hyperchannel

class Aviciopticalether : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aviciopticalether();
        ~Aviciopticalether();


}; // Aviciopticalether

class Basicisdn : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Basicisdn();
        ~Basicisdn();


}; // Basicisdn

class Ipoverclaw : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipoverclaw();
        ~Ipoverclaw();


}; // Ipoverclaw

class Voicefgdeana : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicefgdeana();
        ~Voicefgdeana();


}; // Voicefgdeana

class Iso88025Crfpint : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Crfpint();
        ~Iso88025Crfpint();


}; // Iso88025Crfpint

class Propatm : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propatm();
        ~Propatm();


}; // Propatm

class Fddi : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fddi();
        ~Fddi();


}; // Fddi

class Eplrs : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Eplrs();
        ~Eplrs();


}; // Eplrs

class X25Mlp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25Mlp();
        ~X25Mlp();


}; // X25Mlp

class Arcnetplus : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Arcnetplus();
        ~Arcnetplus();


}; // Arcnetplus

class Gtp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gtp();
        ~Gtp();


}; // Gtp

class Voiceoverip : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceoverip();
        ~Voiceoverip();


}; // Voiceoverip

class Virtualipaddress : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Virtualipaddress();
        ~Virtualipaddress();


}; // Virtualipaddress

class Idsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Idsl();
        ~Idsl();


}; // Idsl

class Actelismetaloop : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Actelismetaloop();
        ~Actelismetaloop();


}; // Actelismetaloop

class Ieee80211 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80211();
        ~Ieee80211();


}; // Ieee80211

class Propbwap2Mp : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propbwap2Mp();
        ~Propbwap2Mp();


}; // Propbwap2Mp

class H323Proxy : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        H323Proxy();
        ~H323Proxy();


}; // H323Proxy

class Capwapdot11Bss : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Capwapdot11Bss();
        ~Capwapdot11Bss();


}; // Capwapdot11Bss

class Econet : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Econet();
        ~Econet();


}; // Econet

class Atmvirtual : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmvirtual();
        ~Atmvirtual();


}; // Atmvirtual

class Eon : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Eon();
        ~Eon();


}; // Eon

class Infiniband : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Infiniband();
        ~Infiniband();


}; // Infiniband

class Docscableupstreamrfport : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscableupstreamrfport();
        ~Docscableupstreamrfport();


}; // Docscableupstreamrfport

class Atmfuni : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmfuni();
        ~Atmfuni();


}; // Atmfuni

class Pon622 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pon622();
        ~Pon622();


}; // Pon622

class Dvbasiout : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbasiout();
        ~Dvbasiout();


}; // Dvbasiout

class Iso88024Tokenbus : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88024Tokenbus();
        ~Iso88024Tokenbus();


}; // Iso88024Tokenbus

class Modem : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Modem();
        ~Modem();


}; // Modem

class Propdocswirelessupstream : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propdocswirelessupstream();
        ~Propdocswirelessupstream();


}; // Propdocswirelessupstream

class Ds0 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds0();
        ~Ds0();


}; // Ds0

class Docscabledownstream : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscabledownstream();
        ~Docscabledownstream();


}; // Docscabledownstream

class Mfsiglink : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mfsiglink();
        ~Mfsiglink();


}; // Mfsiglink

class Aluepon : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aluepon();
        ~Aluepon();


}; // Aluepon

class Smdsdxi : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Smdsdxi();
        ~Smdsdxi();


}; // Smdsdxi

class Macsecuncontrolledif : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Macsecuncontrolledif();
        ~Macsecuncontrolledif();


}; // Macsecuncontrolledif

class Ciscoislvlan : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ciscoislvlan();
        ~Ciscoislvlan();


}; // Ciscoislvlan

class Plc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Plc();
        ~Plc();


}; // Plc

class Propwirelessp2P : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propwirelessp2P();
        ~Propwirelessp2P();


}; // Propwirelessp2P

class Wwanpp2 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Wwanpp2();
        ~Wwanpp2();


}; // Wwanpp2

class Voiceebs : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceebs();
        ~Voiceebs();


}; // Voiceebs

class Ddnx25 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ddnx25();
        ~Ddnx25();


}; // Ddnx25

class Fastether : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fastether();
        ~Fastether();


}; // Fastether

class Atmvciendpt : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmvciendpt();
        ~Atmvciendpt();


}; // Atmvciendpt

class Voicefxs : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicefxs();
        ~Voicefxs();


}; // Voicefxs

class Iso88026Man : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88026Man();
        ~Iso88026Man();


}; // Iso88026Man

class Vmwarenicteam : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vmwarenicteam();
        ~Vmwarenicteam();


}; // Vmwarenicteam

class Propdocswirelessdownstream : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propdocswirelessdownstream();
        ~Propdocswirelessdownstream();


}; // Propdocswirelessdownstream

class Vdsl2 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vdsl2();
        ~Vdsl2();


}; // Vdsl2

class Ss7Siglink : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ss7Siglink();
        ~Ss7Siglink();


}; // Ss7Siglink

class Lapd : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapd();
        ~Lapd();


}; // Lapd

class Sonetpath : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonetpath();
        ~Sonetpath();


}; // Sonetpath

class Atmlogical : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmlogical();
        ~Atmlogical();


}; // Atmlogical

class G703At64K : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G703At64K();
        ~G703At64K();


}; // G703At64K

class Digitalwrapperoverheadchannel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Digitalwrapperoverheadchannel();
        ~Digitalwrapperoverheadchannel();


}; // Digitalwrapperoverheadchannel

class Voiceemfgd : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceemfgd();
        ~Voiceemfgd();


}; // Voiceemfgd

class Softwareloopback : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Softwareloopback();
        ~Softwareloopback();


}; // Softwareloopback

class Reachdsl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Reachdsl();
        ~Reachdsl();


}; // Reachdsl

class Ieee80212 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80212();
        ~Ieee80212();


}; // Ieee80212

class Isdn : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isdn();
        ~Isdn();


}; // Isdn

class Dvbrcsmaclayer : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrcsmaclayer();
        ~Dvbrcsmaclayer();


}; // Dvbrcsmaclayer

class Voiceem : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceem();
        ~Voiceem();


}; // Voiceem

class Async : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Async();
        ~Async();


}; // Async

class Ds0Bundle : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds0Bundle();
        ~Ds0Bundle();


}; // Ds0Bundle

class Aal5 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aal5();
        ~Aal5();


}; // Aal5

class Usb : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Usb();
        ~Usb();


}; // Usb

class Hdlc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdlc();
        ~Hdlc();


}; // Hdlc

class Ds1Fdl : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds1Fdl();
        ~Ds1Fdl();


}; // Ds1Fdl

class Cctemul : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cctemul();
        ~Cctemul();


}; // Cctemul

class Sixtofour : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sixtofour();
        ~Sixtofour();


}; // Sixtofour

class Ds1 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds1();
        ~Ds1();


}; // Ds1

class Pppmultilinkbundle : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pppmultilinkbundle();
        ~Pppmultilinkbundle();


}; // Pppmultilinkbundle

class Tdlc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tdlc();
        ~Tdlc();


}; // Tdlc

class Interleave : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Interleave();
        ~Interleave();


}; // Interleave

class Voiceoverframerelay : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceoverframerelay();
        ~Voiceoverframerelay();


}; // Voiceoverframerelay

class Dcn : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dcn();
        ~Dcn();


}; // Dcn

class Termpad : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Termpad();
        ~Termpad();


}; // Termpad

class Alugponphysicaluni : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Alugponphysicaluni();
        ~Alugponphysicaluni();


}; // Alugponphysicaluni

class Transphdlc : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Transphdlc();
        ~Transphdlc();


}; // Transphdlc

class Rfc877X25 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rfc877X25();
        ~Rfc877X25();


}; // Rfc877X25

class G9982 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G9982();
        ~G9982();


}; // G9982

class Ds3 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds3();
        ~Ds3();


}; // Ds3

class Sonetoverheadchannel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonetoverheadchannel();
        ~Sonetoverheadchannel();


}; // Sonetoverheadchannel

class Ipforward : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipforward();
        ~Ipforward();


}; // Ipforward

class Atmbond : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmbond();
        ~Atmbond();


}; // Atmbond

class Tunnel : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tunnel();
        ~Tunnel();


}; // Tunnel

class V36 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V36();
        ~V36();


}; // V36

class Q2931 : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Q2931();
        ~Q2931();


}; // Q2931

class Frf16Mfrbundle : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Frf16Mfrbundle();
        ~Frf16Mfrbundle();


}; // Frf16Mfrbundle

class Atm : public iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atm();
        ~Atm();


}; // Atm


}
}

#endif /* _IANA_IF_TYPE_ */

