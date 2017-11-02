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

class IanaInterfaceType : public ietf::ietf_interfaces::InterfaceType, virtual ydk::Identity
{
    public:
        IanaInterfaceType();
        ~IanaInterfaceType();


}; // IanaInterfaceType

class Other : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Other();
        ~Other();


}; // Other

class Regular1822 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Regular1822();
        ~Regular1822();


}; // Regular1822

class Hdh1822 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdh1822();
        ~Hdh1822();


}; // Hdh1822

class Ddnx25 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ddnx25();
        ~Ddnx25();


}; // Ddnx25

class Rfc877X25 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rfc877X25();
        ~Rfc877X25();


}; // Rfc877X25

class Ethernetcsmacd : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ethernetcsmacd();
        ~Ethernetcsmacd();


}; // Ethernetcsmacd

class Iso88023Csmacd : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88023Csmacd();
        ~Iso88023Csmacd();


}; // Iso88023Csmacd

class Iso88024Tokenbus : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88024Tokenbus();
        ~Iso88024Tokenbus();


}; // Iso88024Tokenbus

class Iso88025Tokenring : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Tokenring();
        ~Iso88025Tokenring();


}; // Iso88025Tokenring

class Iso88026Man : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88026Man();
        ~Iso88026Man();


}; // Iso88026Man

class Starlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Starlan();
        ~Starlan();


}; // Starlan

class Proteon10Mbit : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Proteon10Mbit();
        ~Proteon10Mbit();


}; // Proteon10Mbit

class Proteon80Mbit : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Proteon80Mbit();
        ~Proteon80Mbit();


}; // Proteon80Mbit

class Hyperchannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hyperchannel();
        ~Hyperchannel();


}; // Hyperchannel

class Fddi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fddi();
        ~Fddi();


}; // Fddi

class Lapb : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapb();
        ~Lapb();


}; // Lapb

class Sdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sdlc();
        ~Sdlc();


}; // Sdlc

class Ds1 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds1();
        ~Ds1();


}; // Ds1

class E1 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        E1();
        ~E1();


}; // E1

class Basicisdn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Basicisdn();
        ~Basicisdn();


}; // Basicisdn

class Primaryisdn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Primaryisdn();
        ~Primaryisdn();


}; // Primaryisdn

class Proppointtopointserial : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Proppointtopointserial();
        ~Proppointtopointserial();


}; // Proppointtopointserial

class Ppp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ppp();
        ~Ppp();


}; // Ppp

class Softwareloopback : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Softwareloopback();
        ~Softwareloopback();


}; // Softwareloopback

class Eon : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Eon();
        ~Eon();


}; // Eon

class Ethernet3Mbit : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ethernet3Mbit();
        ~Ethernet3Mbit();


}; // Ethernet3Mbit

class Nsip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Nsip();
        ~Nsip();


}; // Nsip

class Slip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Slip();
        ~Slip();


}; // Slip

class Ultra : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ultra();
        ~Ultra();


}; // Ultra

class Ds3 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds3();
        ~Ds3();


}; // Ds3

class Sip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sip();
        ~Sip();


}; // Sip

class Framerelay : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelay();
        ~Framerelay();


}; // Framerelay

class Rs232 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rs232();
        ~Rs232();


}; // Rs232

class Para : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Para();
        ~Para();


}; // Para

class Arcnet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Arcnet();
        ~Arcnet();


}; // Arcnet

class Arcnetplus : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Arcnetplus();
        ~Arcnetplus();


}; // Arcnetplus

class Atm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atm();
        ~Atm();


}; // Atm

class Miox25 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Miox25();
        ~Miox25();


}; // Miox25

class Sonet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonet();
        ~Sonet();


}; // Sonet

class X25Ple : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25Ple();
        ~X25Ple();


}; // X25Ple

class Iso88022Llc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88022Llc();
        ~Iso88022Llc();


}; // Iso88022Llc

class Localtalk : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Localtalk();
        ~Localtalk();


}; // Localtalk

class Smdsdxi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Smdsdxi();
        ~Smdsdxi();


}; // Smdsdxi

class Framerelayservice : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelayservice();
        ~Framerelayservice();


}; // Framerelayservice

class V35 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V35();
        ~V35();


}; // V35

class Hssi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hssi();
        ~Hssi();


}; // Hssi

class Hippi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hippi();
        ~Hippi();


}; // Hippi

class Modem : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Modem();
        ~Modem();


}; // Modem

class Aal5 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aal5();
        ~Aal5();


}; // Aal5

class Sonetpath : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonetpath();
        ~Sonetpath();


}; // Sonetpath

class Sonetvt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonetvt();
        ~Sonetvt();


}; // Sonetvt

class Smdsicip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Smdsicip();
        ~Smdsicip();


}; // Smdsicip

class Propvirtual : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propvirtual();
        ~Propvirtual();


}; // Propvirtual

class Propmultiplexor : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propmultiplexor();
        ~Propmultiplexor();


}; // Propmultiplexor

class Ieee80212 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80212();
        ~Ieee80212();


}; // Ieee80212

class Fibrechannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fibrechannel();
        ~Fibrechannel();


}; // Fibrechannel

class Hippiinterface : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hippiinterface();
        ~Hippiinterface();


}; // Hippiinterface

class Framerelayinterconnect : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelayinterconnect();
        ~Framerelayinterconnect();


}; // Framerelayinterconnect

class Aflane8023 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aflane8023();
        ~Aflane8023();


}; // Aflane8023

class Aflane8025 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aflane8025();
        ~Aflane8025();


}; // Aflane8025

class Cctemul : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cctemul();
        ~Cctemul();


}; // Cctemul

class Fastether : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fastether();
        ~Fastether();


}; // Fastether

class Isdn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isdn();
        ~Isdn();


}; // Isdn

class V11 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V11();
        ~V11();


}; // V11

class V36 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V36();
        ~V36();


}; // V36

class G703At64K : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G703At64K();
        ~G703At64K();


}; // G703At64K

class G703At2Mb : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G703At2Mb();
        ~G703At2Mb();


}; // G703At2Mb

class Qllc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Qllc();
        ~Qllc();


}; // Qllc

class Fastetherfx : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fastetherfx();
        ~Fastetherfx();


}; // Fastetherfx

class Channel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Channel();
        ~Channel();


}; // Channel

class Ieee80211 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80211();
        ~Ieee80211();


}; // Ieee80211

class Ibm370Parchan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ibm370Parchan();
        ~Ibm370Parchan();


}; // Ibm370Parchan

class Escon : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Escon();
        ~Escon();


}; // Escon

class Dlsw : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dlsw();
        ~Dlsw();


}; // Dlsw

class Isdns : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isdns();
        ~Isdns();


}; // Isdns

class Isdnu : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isdnu();
        ~Isdnu();


}; // Isdnu

class Lapd : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapd();
        ~Lapd();


}; // Lapd

class Ipswitch : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipswitch();
        ~Ipswitch();


}; // Ipswitch

class Rsrb : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rsrb();
        ~Rsrb();


}; // Rsrb

class Atmlogical : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmlogical();
        ~Atmlogical();


}; // Atmlogical

class Ds0 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds0();
        ~Ds0();


}; // Ds0

class Ds0Bundle : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds0Bundle();
        ~Ds0Bundle();


}; // Ds0Bundle

class Bsc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bsc();
        ~Bsc();


}; // Bsc

class Async : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Async();
        ~Async();


}; // Async

class Cnr : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cnr();
        ~Cnr();


}; // Cnr

class Iso88025Dtr : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Dtr();
        ~Iso88025Dtr();


}; // Iso88025Dtr

class Eplrs : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Eplrs();
        ~Eplrs();


}; // Eplrs

class Arap : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Arap();
        ~Arap();


}; // Arap

class Propcnls : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propcnls();
        ~Propcnls();


}; // Propcnls

class Hostpad : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hostpad();
        ~Hostpad();


}; // Hostpad

class Termpad : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Termpad();
        ~Termpad();


}; // Termpad

class Framerelaympi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelaympi();
        ~Framerelaympi();


}; // Framerelaympi

class X213 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X213();
        ~X213();


}; // X213

class Adsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl();
        ~Adsl();


}; // Adsl

class Radsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Radsl();
        ~Radsl();


}; // Radsl

class Sdsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sdsl();
        ~Sdsl();


}; // Sdsl

class Vdsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vdsl();
        ~Vdsl();


}; // Vdsl

class Iso88025Crfpint : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Crfpint();
        ~Iso88025Crfpint();


}; // Iso88025Crfpint

class Myrinet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Myrinet();
        ~Myrinet();


}; // Myrinet

class Voiceem : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceem();
        ~Voiceem();


}; // Voiceem

class Voicefxo : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicefxo();
        ~Voicefxo();


}; // Voicefxo

class Voicefxs : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicefxs();
        ~Voicefxs();


}; // Voicefxs

class Voiceencap : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceencap();
        ~Voiceencap();


}; // Voiceencap

class Voiceoverip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceoverip();
        ~Voiceoverip();


}; // Voiceoverip

class Atmdxi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmdxi();
        ~Atmdxi();


}; // Atmdxi

class Atmfuni : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmfuni();
        ~Atmfuni();


}; // Atmfuni

class Atmima : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmima();
        ~Atmima();


}; // Atmima

class Pppmultilinkbundle : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pppmultilinkbundle();
        ~Pppmultilinkbundle();


}; // Pppmultilinkbundle

class Ipovercdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipovercdlc();
        ~Ipovercdlc();


}; // Ipovercdlc

class Ipoverclaw : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipoverclaw();
        ~Ipoverclaw();


}; // Ipoverclaw

class Stacktostack : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Stacktostack();
        ~Stacktostack();


}; // Stacktostack

class Virtualipaddress : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Virtualipaddress();
        ~Virtualipaddress();


}; // Virtualipaddress

class Mpc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpc();
        ~Mpc();


}; // Mpc

class Ipoveratm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipoveratm();
        ~Ipoveratm();


}; // Ipoveratm

class Iso88025Fiber : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Fiber();
        ~Iso88025Fiber();


}; // Iso88025Fiber

class Tdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tdlc();
        ~Tdlc();


}; // Tdlc

class Gigabitethernet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gigabitethernet();
        ~Gigabitethernet();


}; // Gigabitethernet

class Hdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdlc();
        ~Hdlc();


}; // Hdlc

class Lapf : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapf();
        ~Lapf();


}; // Lapf

class V37 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V37();
        ~V37();


}; // V37

class X25Mlp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25Mlp();
        ~X25Mlp();


}; // X25Mlp

class X25Huntgroup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25Huntgroup();
        ~X25Huntgroup();


}; // X25Huntgroup

class Transphdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Transphdlc();
        ~Transphdlc();


}; // Transphdlc

class Interleave : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Interleave();
        ~Interleave();


}; // Interleave

class Fast : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fast();
        ~Fast();


}; // Fast

class Ip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ip();
        ~Ip();


}; // Ip

class Docscablemaclayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscablemaclayer();
        ~Docscablemaclayer();


}; // Docscablemaclayer

class Docscabledownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscabledownstream();
        ~Docscabledownstream();


}; // Docscabledownstream

class Docscableupstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscableupstream();
        ~Docscableupstream();


}; // Docscableupstream

class A12Mppswitch : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        A12Mppswitch();
        ~A12Mppswitch();


}; // A12Mppswitch

class Tunnel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tunnel();
        ~Tunnel();


}; // Tunnel

class Coffee : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Coffee();
        ~Coffee();


}; // Coffee

class Ces : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ces();
        ~Ces();


}; // Ces

class Atmsubinterface : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmsubinterface();
        ~Atmsubinterface();


}; // Atmsubinterface

class L2Vlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L2Vlan();
        ~L2Vlan();


}; // L2Vlan

class L3Ipvlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L3Ipvlan();
        ~L3Ipvlan();


}; // L3Ipvlan

class L3Ipxvlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L3Ipxvlan();
        ~L3Ipxvlan();


}; // L3Ipxvlan

class Digitalpowerline : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Digitalpowerline();
        ~Digitalpowerline();


}; // Digitalpowerline

class Mediamailoverip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mediamailoverip();
        ~Mediamailoverip();


}; // Mediamailoverip

class Dtm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dtm();
        ~Dtm();


}; // Dtm

class Dcn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dcn();
        ~Dcn();


}; // Dcn

class Ipforward : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipforward();
        ~Ipforward();


}; // Ipforward

class Msdsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Msdsl();
        ~Msdsl();


}; // Msdsl

class Ieee1394 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee1394();
        ~Ieee1394();


}; // Ieee1394

class IfGsn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IfGsn();
        ~IfGsn();


}; // IfGsn

class Dvbrccmaclayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrccmaclayer();
        ~Dvbrccmaclayer();


}; // Dvbrccmaclayer

class Dvbrccdownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrccdownstream();
        ~Dvbrccdownstream();


}; // Dvbrccdownstream

class Dvbrccupstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrccupstream();
        ~Dvbrccupstream();


}; // Dvbrccupstream

class Atmvirtual : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmvirtual();
        ~Atmvirtual();


}; // Atmvirtual

class Mplstunnel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mplstunnel();
        ~Mplstunnel();


}; // Mplstunnel

class Srp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Srp();
        ~Srp();


}; // Srp

class Voiceoveratm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceoveratm();
        ~Voiceoveratm();


}; // Voiceoveratm

class Voiceoverframerelay : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceoverframerelay();
        ~Voiceoverframerelay();


}; // Voiceoverframerelay

class Idsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Idsl();
        ~Idsl();


}; // Idsl

class Compositelink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Compositelink();
        ~Compositelink();


}; // Compositelink

class Ss7Siglink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ss7Siglink();
        ~Ss7Siglink();


}; // Ss7Siglink

class Propwirelessp2P : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propwirelessp2P();
        ~Propwirelessp2P();


}; // Propwirelessp2P

class Frforward : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Frforward();
        ~Frforward();


}; // Frforward

class Rfc1483 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rfc1483();
        ~Rfc1483();


}; // Rfc1483

class Usb : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Usb();
        ~Usb();


}; // Usb

class Ieee8023Adlag : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee8023Adlag();
        ~Ieee8023Adlag();


}; // Ieee8023Adlag

class Bgppolicyaccounting : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bgppolicyaccounting();
        ~Bgppolicyaccounting();


}; // Bgppolicyaccounting

class Frf16Mfrbundle : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Frf16Mfrbundle();
        ~Frf16Mfrbundle();


}; // Frf16Mfrbundle

class H323Gatekeeper : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        H323Gatekeeper();
        ~H323Gatekeeper();


}; // H323Gatekeeper

class H323Proxy : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        H323Proxy();
        ~H323Proxy();


}; // H323Proxy

class Mpls : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpls();
        ~Mpls();


}; // Mpls

class Mfsiglink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mfsiglink();
        ~Mfsiglink();


}; // Mfsiglink

class Hdsl2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdsl2();
        ~Hdsl2();


}; // Hdsl2

class Shdsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Shdsl();
        ~Shdsl();


}; // Shdsl

class Ds1Fdl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds1Fdl();
        ~Ds1Fdl();


}; // Ds1Fdl

class Pos : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pos();
        ~Pos();


}; // Pos

class Dvbasiin : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbasiin();
        ~Dvbasiin();


}; // Dvbasiin

class Dvbasiout : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbasiout();
        ~Dvbasiout();


}; // Dvbasiout

class Plc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Plc();
        ~Plc();


}; // Plc

class Nfas : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Nfas();
        ~Nfas();


}; // Nfas

class Tr008 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tr008();
        ~Tr008();


}; // Tr008

class Gr303Rdt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gr303Rdt();
        ~Gr303Rdt();


}; // Gr303Rdt

class Gr303Idt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gr303Idt();
        ~Gr303Idt();


}; // Gr303Idt

class Isup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isup();
        ~Isup();


}; // Isup

class Propdocswirelessmaclayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propdocswirelessmaclayer();
        ~Propdocswirelessmaclayer();


}; // Propdocswirelessmaclayer

class Propdocswirelessdownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propdocswirelessdownstream();
        ~Propdocswirelessdownstream();


}; // Propdocswirelessdownstream

class Propdocswirelessupstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propdocswirelessupstream();
        ~Propdocswirelessupstream();


}; // Propdocswirelessupstream

class Hiperlan2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hiperlan2();
        ~Hiperlan2();


}; // Hiperlan2

class Propbwap2Mp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propbwap2Mp();
        ~Propbwap2Mp();


}; // Propbwap2Mp

class Sonetoverheadchannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonetoverheadchannel();
        ~Sonetoverheadchannel();


}; // Sonetoverheadchannel

class Digitalwrapperoverheadchannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Digitalwrapperoverheadchannel();
        ~Digitalwrapperoverheadchannel();


}; // Digitalwrapperoverheadchannel

class Aal2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aal2();
        ~Aal2();


}; // Aal2

class Radiomac : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Radiomac();
        ~Radiomac();


}; // Radiomac

class Atmradio : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmradio();
        ~Atmradio();


}; // Atmradio

class Imt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Imt();
        ~Imt();


}; // Imt

class Mvl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mvl();
        ~Mvl();


}; // Mvl

class Reachdsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Reachdsl();
        ~Reachdsl();


}; // Reachdsl

class Frdlciendpt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Frdlciendpt();
        ~Frdlciendpt();


}; // Frdlciendpt

class Atmvciendpt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmvciendpt();
        ~Atmvciendpt();


}; // Atmvciendpt

class Opticalchannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Opticalchannel();
        ~Opticalchannel();


}; // Opticalchannel

class Opticaltransport : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Opticaltransport();
        ~Opticaltransport();


}; // Opticaltransport

class Propatm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propatm();
        ~Propatm();


}; // Propatm

class Voiceovercable : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceovercable();
        ~Voiceovercable();


}; // Voiceovercable

class Infiniband : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Infiniband();
        ~Infiniband();


}; // Infiniband

class Telink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Telink();
        ~Telink();


}; // Telink

class Q2931 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Q2931();
        ~Q2931();


}; // Q2931

class Virtualtg : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Virtualtg();
        ~Virtualtg();


}; // Virtualtg

class Siptg : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Siptg();
        ~Siptg();


}; // Siptg

class Sipsig : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sipsig();
        ~Sipsig();


}; // Sipsig

class Docscableupstreamchannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscableupstreamchannel();
        ~Docscableupstreamchannel();


}; // Docscableupstreamchannel

class Econet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Econet();
        ~Econet();


}; // Econet

class Pon155 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pon155();
        ~Pon155();


}; // Pon155

class Pon622 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pon622();
        ~Pon622();


}; // Pon622

class Bridge : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bridge();
        ~Bridge();


}; // Bridge

class Linegroup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Linegroup();
        ~Linegroup();


}; // Linegroup

class Voiceemfgd : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceemfgd();
        ~Voiceemfgd();


}; // Voiceemfgd

class Voicefgdeana : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicefgdeana();
        ~Voicefgdeana();


}; // Voicefgdeana

class Voicedid : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicedid();
        ~Voicedid();


}; // Voicedid

class Mpegtransport : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpegtransport();
        ~Mpegtransport();


}; // Mpegtransport

class Sixtofour : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sixtofour();
        ~Sixtofour();


}; // Sixtofour

class Gtp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gtp();
        ~Gtp();


}; // Gtp

class Pdnetherloop1 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pdnetherloop1();
        ~Pdnetherloop1();


}; // Pdnetherloop1

class Pdnetherloop2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pdnetherloop2();
        ~Pdnetherloop2();


}; // Pdnetherloop2

class Opticalchannelgroup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Opticalchannelgroup();
        ~Opticalchannelgroup();


}; // Opticalchannelgroup

class Homepna : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Homepna();
        ~Homepna();


}; // Homepna

class Gfp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gfp();
        ~Gfp();


}; // Gfp

class Ciscoislvlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ciscoislvlan();
        ~Ciscoislvlan();


}; // Ciscoislvlan

class Actelismetaloop : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Actelismetaloop();
        ~Actelismetaloop();


}; // Actelismetaloop

class Fciplink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fciplink();
        ~Fciplink();


}; // Fciplink

class Rpr : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rpr();
        ~Rpr();


}; // Rpr

class Qam : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Qam();
        ~Qam();


}; // Qam

class Lmp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lmp();
        ~Lmp();


}; // Lmp

class Cblvectastar : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cblvectastar();
        ~Cblvectastar();


}; // Cblvectastar

class Docscablemcmtsdownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscablemcmtsdownstream();
        ~Docscablemcmtsdownstream();


}; // Docscablemcmtsdownstream

class Adsl2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl2();
        ~Adsl2();


}; // Adsl2

class Macseccontrolledif : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Macseccontrolledif();
        ~Macseccontrolledif();


}; // Macseccontrolledif

class Macsecuncontrolledif : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Macsecuncontrolledif();
        ~Macsecuncontrolledif();


}; // Macsecuncontrolledif

class Aviciopticalether : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aviciopticalether();
        ~Aviciopticalether();


}; // Aviciopticalether

class Atmbond : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmbond();
        ~Atmbond();


}; // Atmbond

class Voicefgdos : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicefgdos();
        ~Voicefgdos();


}; // Voicefgdos

class Mocaversion1 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mocaversion1();
        ~Mocaversion1();


}; // Mocaversion1

class Ieee80216Wman : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80216Wman();
        ~Ieee80216Wman();


}; // Ieee80216Wman

class Adsl2Plus : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl2Plus();
        ~Adsl2Plus();


}; // Adsl2Plus

class Dvbrcsmaclayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrcsmaclayer();
        ~Dvbrcsmaclayer();


}; // Dvbrcsmaclayer

class Dvbtdm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbtdm();
        ~Dvbtdm();


}; // Dvbtdm

class Dvbrcstdma : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrcstdma();
        ~Dvbrcstdma();


}; // Dvbrcstdma

class X86Laps : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X86Laps();
        ~X86Laps();


}; // X86Laps

class Wwanpp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Wwanpp();
        ~Wwanpp();


}; // Wwanpp

class Wwanpp2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Wwanpp2();
        ~Wwanpp2();


}; // Wwanpp2

class Voiceebs : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceebs();
        ~Voiceebs();


}; // Voiceebs

class Ifpwtype : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ifpwtype();
        ~Ifpwtype();


}; // Ifpwtype

class Ilan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ilan();
        ~Ilan();


}; // Ilan

class Pip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pip();
        ~Pip();


}; // Pip

class Aluelp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aluelp();
        ~Aluelp();


}; // Aluelp

class Gpon : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gpon();
        ~Gpon();


}; // Gpon

class Vdsl2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vdsl2();
        ~Vdsl2();


}; // Vdsl2

class Capwapdot11Profile : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Capwapdot11Profile();
        ~Capwapdot11Profile();


}; // Capwapdot11Profile

class Capwapdot11Bss : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Capwapdot11Bss();
        ~Capwapdot11Bss();


}; // Capwapdot11Bss

class Capwapwtpvirtualradio : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Capwapwtpvirtualradio();
        ~Capwapwtpvirtualradio();


}; // Capwapwtpvirtualradio

class Bits : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bits();
        ~Bits();


}; // Bits

class Docscableupstreamrfport : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscableupstreamrfport();
        ~Docscableupstreamrfport();


}; // Docscableupstreamrfport

class Cabledownstreamrfport : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cabledownstreamrfport();
        ~Cabledownstreamrfport();


}; // Cabledownstreamrfport

class Vmwarevirtualnic : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vmwarevirtualnic();
        ~Vmwarevirtualnic();


}; // Vmwarevirtualnic

class Ieee802154 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee802154();
        ~Ieee802154();


}; // Ieee802154

class Otnodu : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Otnodu();
        ~Otnodu();


}; // Otnodu

class Otnotu : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Otnotu();
        ~Otnotu();


}; // Otnotu

class Ifvfitype : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ifvfitype();
        ~Ifvfitype();


}; // Ifvfitype

class G9981 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G9981();
        ~G9981();


}; // G9981

class G9982 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G9982();
        ~G9982();


}; // G9982

class G9983 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G9983();
        ~G9983();


}; // G9983

class Aluepon : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aluepon();
        ~Aluepon();


}; // Aluepon

class Aluepononu : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aluepononu();
        ~Aluepononu();


}; // Aluepononu

class Alueponphysicaluni : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Alueponphysicaluni();
        ~Alueponphysicaluni();


}; // Alueponphysicaluni

class Alueponlogicallink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Alueponlogicallink();
        ~Alueponlogicallink();


}; // Alueponlogicallink

class Alugpononu : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Alugpononu();
        ~Alugpononu();


}; // Alugpononu

class Alugponphysicaluni : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Alugponphysicaluni();
        ~Alugponphysicaluni();


}; // Alugponphysicaluni

class Vmwarenicteam : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vmwarenicteam();
        ~Vmwarenicteam();


}; // Vmwarenicteam


}
}

#endif /* _IANA_IF_TYPE_ */

