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

class A12Mppswitch : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        A12Mppswitch();
        ~A12Mppswitch();


}; // A12Mppswitch

class Aal2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aal2();
        ~Aal2();


}; // Aal2

class Aal5 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aal5();
        ~Aal5();


}; // Aal5

class Actelismetaloop : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Actelismetaloop();
        ~Actelismetaloop();


}; // Actelismetaloop

class Adsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl();
        ~Adsl();


}; // Adsl

class Adsl2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl2();
        ~Adsl2();


}; // Adsl2

class Adsl2Plus : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl2Plus();
        ~Adsl2Plus();


}; // Adsl2Plus

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

class Aluelp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aluelp();
        ~Aluelp();


}; // Aluelp

class Aluepon : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aluepon();
        ~Aluepon();


}; // Aluepon

class Alueponlogicallink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Alueponlogicallink();
        ~Alueponlogicallink();


}; // Alueponlogicallink

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

class Arap : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Arap();
        ~Arap();


}; // Arap

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

class Async : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Async();
        ~Async();


}; // Async

class Atm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atm();
        ~Atm();


}; // Atm

class Atmbond : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmbond();
        ~Atmbond();


}; // Atmbond

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

class Atmlogical : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmlogical();
        ~Atmlogical();


}; // Atmlogical

class Atmradio : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmradio();
        ~Atmradio();


}; // Atmradio

class Atmsubinterface : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmsubinterface();
        ~Atmsubinterface();


}; // Atmsubinterface

class Atmvciendpt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmvciendpt();
        ~Atmvciendpt();


}; // Atmvciendpt

class Atmvirtual : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmvirtual();
        ~Atmvirtual();


}; // Atmvirtual

class Aviciopticalether : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aviciopticalether();
        ~Aviciopticalether();


}; // Aviciopticalether

class Basicisdn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Basicisdn();
        ~Basicisdn();


}; // Basicisdn

class Bgppolicyaccounting : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bgppolicyaccounting();
        ~Bgppolicyaccounting();


}; // Bgppolicyaccounting

class Bits : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bits();
        ~Bits();


}; // Bits

class Bridge : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bridge();
        ~Bridge();


}; // Bridge

class Bsc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bsc();
        ~Bsc();


}; // Bsc

class Cabledownstreamrfport : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cabledownstreamrfport();
        ~Cabledownstreamrfport();


}; // Cabledownstreamrfport

class Capwapdot11Bss : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Capwapdot11Bss();
        ~Capwapdot11Bss();


}; // Capwapdot11Bss

class Capwapdot11Profile : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Capwapdot11Profile();
        ~Capwapdot11Profile();


}; // Capwapdot11Profile

class Capwapwtpvirtualradio : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Capwapwtpvirtualradio();
        ~Capwapwtpvirtualradio();


}; // Capwapwtpvirtualradio

class Cblvectastar : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cblvectastar();
        ~Cblvectastar();


}; // Cblvectastar

class Cctemul : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cctemul();
        ~Cctemul();


}; // Cctemul

class Ces : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ces();
        ~Ces();


}; // Ces

class Channel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Channel();
        ~Channel();


}; // Channel

class Ciscoislvlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ciscoislvlan();
        ~Ciscoislvlan();


}; // Ciscoislvlan

class Cnr : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Cnr();
        ~Cnr();


}; // Cnr

class Coffee : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Coffee();
        ~Coffee();


}; // Coffee

class Compositelink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Compositelink();
        ~Compositelink();


}; // Compositelink

class Dcn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dcn();
        ~Dcn();


}; // Dcn

class Ddnx25 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ddnx25();
        ~Ddnx25();


}; // Ddnx25

class Digitalpowerline : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Digitalpowerline();
        ~Digitalpowerline();


}; // Digitalpowerline

class Digitalwrapperoverheadchannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Digitalwrapperoverheadchannel();
        ~Digitalwrapperoverheadchannel();


}; // Digitalwrapperoverheadchannel

class Dlsw : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dlsw();
        ~Dlsw();


}; // Dlsw

class Docscabledownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscabledownstream();
        ~Docscabledownstream();


}; // Docscabledownstream

class Docscablemaclayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscablemaclayer();
        ~Docscablemaclayer();


}; // Docscablemaclayer

class Docscablemcmtsdownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscablemcmtsdownstream();
        ~Docscablemcmtsdownstream();


}; // Docscablemcmtsdownstream

class Docscableupstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscableupstream();
        ~Docscableupstream();


}; // Docscableupstream

class Docscableupstreamchannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscableupstreamchannel();
        ~Docscableupstreamchannel();


}; // Docscableupstreamchannel

class Docscableupstreamrfport : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Docscableupstreamrfport();
        ~Docscableupstreamrfport();


}; // Docscableupstreamrfport

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

class Ds1 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds1();
        ~Ds1();


}; // Ds1

class Ds1Fdl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds1Fdl();
        ~Ds1Fdl();


}; // Ds1Fdl

class Ds3 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds3();
        ~Ds3();


}; // Ds3

class Dtm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dtm();
        ~Dtm();


}; // Dtm

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

class Dvbrccdownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrccdownstream();
        ~Dvbrccdownstream();


}; // Dvbrccdownstream

class Dvbrccmaclayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrccmaclayer();
        ~Dvbrccmaclayer();


}; // Dvbrccmaclayer

class Dvbrccupstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrccupstream();
        ~Dvbrccupstream();


}; // Dvbrccupstream

class Dvbrcsmaclayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrcsmaclayer();
        ~Dvbrcsmaclayer();


}; // Dvbrcsmaclayer

class Dvbrcstdma : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbrcstdma();
        ~Dvbrcstdma();


}; // Dvbrcstdma

class Dvbtdm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Dvbtdm();
        ~Dvbtdm();


}; // Dvbtdm

class E1 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        E1();
        ~E1();


}; // E1

class Econet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Econet();
        ~Econet();


}; // Econet

class Eon : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Eon();
        ~Eon();


}; // Eon

class Eplrs : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Eplrs();
        ~Eplrs();


}; // Eplrs

class Escon : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Escon();
        ~Escon();


}; // Escon

class Ethernet3Mbit : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ethernet3Mbit();
        ~Ethernet3Mbit();


}; // Ethernet3Mbit

class Ethernetcsmacd : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ethernetcsmacd();
        ~Ethernetcsmacd();


}; // Ethernetcsmacd

class Fast : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fast();
        ~Fast();


}; // Fast

class Fastether : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fastether();
        ~Fastether();


}; // Fastether

class Fastetherfx : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fastetherfx();
        ~Fastetherfx();


}; // Fastetherfx

class Fciplink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fciplink();
        ~Fciplink();


}; // Fciplink

class Fddi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fddi();
        ~Fddi();


}; // Fddi

class Fibrechannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Fibrechannel();
        ~Fibrechannel();


}; // Fibrechannel

class Framerelay : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelay();
        ~Framerelay();


}; // Framerelay

class Framerelayinterconnect : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelayinterconnect();
        ~Framerelayinterconnect();


}; // Framerelayinterconnect

class Framerelaympi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelaympi();
        ~Framerelaympi();


}; // Framerelaympi

class Framerelayservice : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Framerelayservice();
        ~Framerelayservice();


}; // Framerelayservice

class Frdlciendpt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Frdlciendpt();
        ~Frdlciendpt();


}; // Frdlciendpt

class Frf16Mfrbundle : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Frf16Mfrbundle();
        ~Frf16Mfrbundle();


}; // Frf16Mfrbundle

class Frforward : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Frforward();
        ~Frforward();


}; // Frforward

class G703At2Mb : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G703At2Mb();
        ~G703At2Mb();


}; // G703At2Mb

class G703At64K : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G703At64K();
        ~G703At64K();


}; // G703At64K

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

class Gfp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gfp();
        ~Gfp();


}; // Gfp

class Gigabitethernet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gigabitethernet();
        ~Gigabitethernet();


}; // Gigabitethernet

class Gpon : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gpon();
        ~Gpon();


}; // Gpon

class Gr303Idt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gr303Idt();
        ~Gr303Idt();


}; // Gr303Idt

class Gr303Rdt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gr303Rdt();
        ~Gr303Rdt();


}; // Gr303Rdt

class Gtp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gtp();
        ~Gtp();


}; // Gtp

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

class Hdh1822 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdh1822();
        ~Hdh1822();


}; // Hdh1822

class Hdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdlc();
        ~Hdlc();


}; // Hdlc

class Hdsl2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hdsl2();
        ~Hdsl2();


}; // Hdsl2

class Hiperlan2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hiperlan2();
        ~Hiperlan2();


}; // Hiperlan2

class Hippi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hippi();
        ~Hippi();


}; // Hippi

class Hippiinterface : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hippiinterface();
        ~Hippiinterface();


}; // Hippiinterface

class Homepna : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Homepna();
        ~Homepna();


}; // Homepna

class Hostpad : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hostpad();
        ~Hostpad();


}; // Hostpad

class Hssi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hssi();
        ~Hssi();


}; // Hssi

class Hyperchannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hyperchannel();
        ~Hyperchannel();


}; // Hyperchannel

class Ibm370Parchan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ibm370Parchan();
        ~Ibm370Parchan();


}; // Ibm370Parchan

class Idsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Idsl();
        ~Idsl();


}; // Idsl

class Ieee1394 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee1394();
        ~Ieee1394();


}; // Ieee1394

class Ieee80211 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80211();
        ~Ieee80211();


}; // Ieee80211

class Ieee80212 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80212();
        ~Ieee80212();


}; // Ieee80212

class Ieee802154 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee802154();
        ~Ieee802154();


}; // Ieee802154

class Ieee80216Wman : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80216Wman();
        ~Ieee80216Wman();


}; // Ieee80216Wman

class Ieee8023Adlag : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee8023Adlag();
        ~Ieee8023Adlag();


}; // Ieee8023Adlag

class IfGsn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IfGsn();
        ~IfGsn();


}; // IfGsn

class Ifpwtype : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ifpwtype();
        ~Ifpwtype();


}; // Ifpwtype

class Ifvfitype : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ifvfitype();
        ~Ifvfitype();


}; // Ifvfitype

class Ilan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ilan();
        ~Ilan();


}; // Ilan

class Imt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Imt();
        ~Imt();


}; // Imt

class Infiniband : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Infiniband();
        ~Infiniband();


}; // Infiniband

class Interleave : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Interleave();
        ~Interleave();


}; // Interleave

class Ip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ip();
        ~Ip();


}; // Ip

class Ipforward : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipforward();
        ~Ipforward();


}; // Ipforward

class Ipoveratm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipoveratm();
        ~Ipoveratm();


}; // Ipoveratm

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

class Ipswitch : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ipswitch();
        ~Ipswitch();


}; // Ipswitch

class Isdn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isdn();
        ~Isdn();


}; // Isdn

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

class Iso88022Llc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88022Llc();
        ~Iso88022Llc();


}; // Iso88022Llc

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

class Iso88025Crfpint : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Crfpint();
        ~Iso88025Crfpint();


}; // Iso88025Crfpint

class Iso88025Dtr : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Dtr();
        ~Iso88025Dtr();


}; // Iso88025Dtr

class Iso88025Fiber : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025Fiber();
        ~Iso88025Fiber();


}; // Iso88025Fiber

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

class Isup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isup();
        ~Isup();


}; // Isup

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

class Lapb : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapb();
        ~Lapb();


}; // Lapb

class Lapd : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapd();
        ~Lapd();


}; // Lapd

class Lapf : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lapf();
        ~Lapf();


}; // Lapf

class Linegroup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Linegroup();
        ~Linegroup();


}; // Linegroup

class Lmp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Lmp();
        ~Lmp();


}; // Lmp

class Localtalk : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Localtalk();
        ~Localtalk();


}; // Localtalk

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

class Mediamailoverip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mediamailoverip();
        ~Mediamailoverip();


}; // Mediamailoverip

class Mfsiglink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mfsiglink();
        ~Mfsiglink();


}; // Mfsiglink

class Miox25 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Miox25();
        ~Miox25();


}; // Miox25

class Mocaversion1 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mocaversion1();
        ~Mocaversion1();


}; // Mocaversion1

class Modem : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Modem();
        ~Modem();


}; // Modem

class Mpc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpc();
        ~Mpc();


}; // Mpc

class Mpegtransport : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpegtransport();
        ~Mpegtransport();


}; // Mpegtransport

class Mpls : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpls();
        ~Mpls();


}; // Mpls

class Mplstunnel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mplstunnel();
        ~Mplstunnel();


}; // Mplstunnel

class Msdsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Msdsl();
        ~Msdsl();


}; // Msdsl

class Mvl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mvl();
        ~Mvl();


}; // Mvl

class Myrinet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Myrinet();
        ~Myrinet();


}; // Myrinet

class Nfas : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Nfas();
        ~Nfas();


}; // Nfas

class Nsip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Nsip();
        ~Nsip();


}; // Nsip

class Opticalchannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Opticalchannel();
        ~Opticalchannel();


}; // Opticalchannel

class Opticalchannelgroup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Opticalchannelgroup();
        ~Opticalchannelgroup();


}; // Opticalchannelgroup

class Opticaltransport : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Opticaltransport();
        ~Opticaltransport();


}; // Opticaltransport

class Other : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Other();
        ~Other();


}; // Other

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

class Para : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Para();
        ~Para();


}; // Para

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

class Pip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pip();
        ~Pip();


}; // Pip

class Plc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Plc();
        ~Plc();


}; // Plc

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

class Pos : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pos();
        ~Pos();


}; // Pos

class Ppp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ppp();
        ~Ppp();


}; // Ppp

class Pppmultilinkbundle : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pppmultilinkbundle();
        ~Pppmultilinkbundle();


}; // Pppmultilinkbundle

class Primaryisdn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Primaryisdn();
        ~Primaryisdn();


}; // Primaryisdn

class Propatm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propatm();
        ~Propatm();


}; // Propatm

class Propbwap2Mp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propbwap2Mp();
        ~Propbwap2Mp();


}; // Propbwap2Mp

class Propcnls : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propcnls();
        ~Propcnls();


}; // Propcnls

class Propdocswirelessdownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propdocswirelessdownstream();
        ~Propdocswirelessdownstream();


}; // Propdocswirelessdownstream

class Propdocswirelessmaclayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propdocswirelessmaclayer();
        ~Propdocswirelessmaclayer();


}; // Propdocswirelessmaclayer

class Propdocswirelessupstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propdocswirelessupstream();
        ~Propdocswirelessupstream();


}; // Propdocswirelessupstream

class Propmultiplexor : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propmultiplexor();
        ~Propmultiplexor();


}; // Propmultiplexor

class Proppointtopointserial : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Proppointtopointserial();
        ~Proppointtopointserial();


}; // Proppointtopointserial

class Propvirtual : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propvirtual();
        ~Propvirtual();


}; // Propvirtual

class Propwirelessp2P : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Propwirelessp2P();
        ~Propwirelessp2P();


}; // Propwirelessp2P

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

class Q2931 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Q2931();
        ~Q2931();


}; // Q2931

class Qam : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Qam();
        ~Qam();


}; // Qam

class Qllc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Qllc();
        ~Qllc();


}; // Qllc

class Radiomac : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Radiomac();
        ~Radiomac();


}; // Radiomac

class Radsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Radsl();
        ~Radsl();


}; // Radsl

class Reachdsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Reachdsl();
        ~Reachdsl();


}; // Reachdsl

class Regular1822 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Regular1822();
        ~Regular1822();


}; // Regular1822

class Rfc1483 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rfc1483();
        ~Rfc1483();


}; // Rfc1483

class Rfc877X25 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rfc877X25();
        ~Rfc877X25();


}; // Rfc877X25

class Rpr : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rpr();
        ~Rpr();


}; // Rpr

class Rs232 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rs232();
        ~Rs232();


}; // Rs232

class Rsrb : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rsrb();
        ~Rsrb();


}; // Rsrb

class Sdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sdlc();
        ~Sdlc();


}; // Sdlc

class Sdsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sdsl();
        ~Sdsl();


}; // Sdsl

class Shdsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Shdsl();
        ~Shdsl();


}; // Shdsl

class Sip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sip();
        ~Sip();


}; // Sip

class Sipsig : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sipsig();
        ~Sipsig();


}; // Sipsig

class Siptg : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Siptg();
        ~Siptg();


}; // Siptg

class Sixtofour : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sixtofour();
        ~Sixtofour();


}; // Sixtofour

class Slip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Slip();
        ~Slip();


}; // Slip

class Smdsdxi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Smdsdxi();
        ~Smdsdxi();


}; // Smdsdxi

class Smdsicip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Smdsicip();
        ~Smdsicip();


}; // Smdsicip

class Softwareloopback : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Softwareloopback();
        ~Softwareloopback();


}; // Softwareloopback

class Sonet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonet();
        ~Sonet();


}; // Sonet

class Sonetoverheadchannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Sonetoverheadchannel();
        ~Sonetoverheadchannel();


}; // Sonetoverheadchannel

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

class Srp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Srp();
        ~Srp();


}; // Srp

class Ss7Siglink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ss7Siglink();
        ~Ss7Siglink();


}; // Ss7Siglink

class Stacktostack : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Stacktostack();
        ~Stacktostack();


}; // Stacktostack

class Starlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Starlan();
        ~Starlan();


}; // Starlan

class Tdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tdlc();
        ~Tdlc();


}; // Tdlc

class Telink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Telink();
        ~Telink();


}; // Telink

class Termpad : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Termpad();
        ~Termpad();


}; // Termpad

class Tr008 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tr008();
        ~Tr008();


}; // Tr008

class Transphdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Transphdlc();
        ~Transphdlc();


}; // Transphdlc

class Tunnel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Tunnel();
        ~Tunnel();


}; // Tunnel

class Ultra : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ultra();
        ~Ultra();


}; // Ultra

class Usb : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Usb();
        ~Usb();


}; // Usb

class V11 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V11();
        ~V11();


}; // V11

class V35 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V35();
        ~V35();


}; // V35

class V36 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V36();
        ~V36();


}; // V36

class V37 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        V37();
        ~V37();


}; // V37

class Vdsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vdsl();
        ~Vdsl();


}; // Vdsl

class Vdsl2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vdsl2();
        ~Vdsl2();


}; // Vdsl2

class Virtualipaddress : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Virtualipaddress();
        ~Virtualipaddress();


}; // Virtualipaddress

class Virtualtg : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Virtualtg();
        ~Virtualtg();


}; // Virtualtg

class Vmwarenicteam : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vmwarenicteam();
        ~Vmwarenicteam();


}; // Vmwarenicteam

class Vmwarevirtualnic : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Vmwarevirtualnic();
        ~Vmwarevirtualnic();


}; // Vmwarevirtualnic

class Voicedid : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicedid();
        ~Voicedid();


}; // Voicedid

class Voiceebs : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceebs();
        ~Voiceebs();


}; // Voiceebs

class Voiceem : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceem();
        ~Voiceem();


}; // Voiceem

class Voiceemfgd : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceemfgd();
        ~Voiceemfgd();


}; // Voiceemfgd

class Voiceencap : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceencap();
        ~Voiceencap();


}; // Voiceencap

class Voicefgdeana : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicefgdeana();
        ~Voicefgdeana();


}; // Voicefgdeana

class Voicefgdos : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voicefgdos();
        ~Voicefgdos();


}; // Voicefgdos

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

class Voiceoveratm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceoveratm();
        ~Voiceoveratm();


}; // Voiceoveratm

class Voiceovercable : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceovercable();
        ~Voiceovercable();


}; // Voiceovercable

class Voiceoverframerelay : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceoverframerelay();
        ~Voiceoverframerelay();


}; // Voiceoverframerelay

class Voiceoverip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Voiceoverip();
        ~Voiceoverip();


}; // Voiceoverip

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

class X213 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X213();
        ~X213();


}; // X213

class X25Huntgroup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25Huntgroup();
        ~X25Huntgroup();


}; // X25Huntgroup

class X25Mlp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25Mlp();
        ~X25Mlp();


}; // X25Mlp

class X25Ple : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25Ple();
        ~X25Ple();


}; // X25Ple

class X86Laps : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X86Laps();
        ~X86Laps();


}; // X86Laps


}
}

#endif /* _IANA_IF_TYPE_ */

