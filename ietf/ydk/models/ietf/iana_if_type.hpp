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

class DdnX25 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DdnX25();
        ~DdnX25();


}; // DdnX25

class Rfc877x25 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rfc877x25();
        ~Rfc877x25();


}; // Rfc877x25

class EthernetCsmacd : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        EthernetCsmacd();
        ~EthernetCsmacd();


}; // EthernetCsmacd

class Iso88023Csmacd : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88023Csmacd();
        ~Iso88023Csmacd();


}; // Iso88023Csmacd

class Iso88024TokenBus : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88024TokenBus();
        ~Iso88024TokenBus();


}; // Iso88024TokenBus

class Iso88025TokenRing : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025TokenRing();
        ~Iso88025TokenRing();


}; // Iso88025TokenRing

class Iso88026Man : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88026Man();
        ~Iso88026Man();


}; // Iso88026Man

class StarLan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        StarLan();
        ~StarLan();


}; // StarLan

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

class BasicISDN : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        BasicISDN();
        ~BasicISDN();


}; // BasicISDN

class PrimaryISDN : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PrimaryISDN();
        ~PrimaryISDN();


}; // PrimaryISDN

class PropPointToPointSerial : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropPointToPointSerial();
        ~PropPointToPointSerial();


}; // PropPointToPointSerial

class Ppp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ppp();
        ~Ppp();


}; // Ppp

class SoftwareLoopback : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SoftwareLoopback();
        ~SoftwareLoopback();


}; // SoftwareLoopback

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

class FrameRelay : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FrameRelay();
        ~FrameRelay();


}; // FrameRelay

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

class ArcnetPlus : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        ArcnetPlus();
        ~ArcnetPlus();


}; // ArcnetPlus

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

class X25ple : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25ple();
        ~X25ple();


}; // X25ple

class Iso88022llc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88022llc();
        ~Iso88022llc();


}; // Iso88022llc

class LocalTalk : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        LocalTalk();
        ~LocalTalk();


}; // LocalTalk

class SmdsDxi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SmdsDxi();
        ~SmdsDxi();


}; // SmdsDxi

class FrameRelayService : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FrameRelayService();
        ~FrameRelayService();


}; // FrameRelayService

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

class SonetPath : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SonetPath();
        ~SonetPath();


}; // SonetPath

class SonetVT : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SonetVT();
        ~SonetVT();


}; // SonetVT

class SmdsIcip : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SmdsIcip();
        ~SmdsIcip();


}; // SmdsIcip

class PropVirtual : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropVirtual();
        ~PropVirtual();


}; // PropVirtual

class PropMultiplexor : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropMultiplexor();
        ~PropMultiplexor();


}; // PropMultiplexor

class Ieee80212 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80212();
        ~Ieee80212();


}; // Ieee80212

class FibreChannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FibreChannel();
        ~FibreChannel();


}; // FibreChannel

class HippiInterface : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        HippiInterface();
        ~HippiInterface();


}; // HippiInterface

class FrameRelayInterconnect : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FrameRelayInterconnect();
        ~FrameRelayInterconnect();


}; // FrameRelayInterconnect

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

class CctEmul : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CctEmul();
        ~CctEmul();


}; // CctEmul

class FastEther : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FastEther();
        ~FastEther();


}; // FastEther

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

class G703at64k : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G703at64k();
        ~G703at64k();


}; // G703at64k

class G703at2mb : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        G703at2mb();
        ~G703at2mb();


}; // G703at2mb

class Qllc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Qllc();
        ~Qllc();


}; // Qllc

class FastEtherFX : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FastEtherFX();
        ~FastEtherFX();


}; // FastEtherFX

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

class Ibm370parChan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ibm370parChan();
        ~Ibm370parChan();


}; // Ibm370parChan

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

class IpSwitch : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IpSwitch();
        ~IpSwitch();


}; // IpSwitch

class Rsrb : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Rsrb();
        ~Rsrb();


}; // Rsrb

class AtmLogical : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmLogical();
        ~AtmLogical();


}; // AtmLogical

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

class PropCnls : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropCnls();
        ~PropCnls();


}; // PropCnls

class HostPad : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        HostPad();
        ~HostPad();


}; // HostPad

class TermPad : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        TermPad();
        ~TermPad();


}; // TermPad

class FrameRelayMPI : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FrameRelayMPI();
        ~FrameRelayMPI();


}; // FrameRelayMPI

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

class Iso88025CRFPInt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Iso88025CRFPInt();
        ~Iso88025CRFPInt();


}; // Iso88025CRFPInt

class Myrinet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Myrinet();
        ~Myrinet();


}; // Myrinet

class VoiceEM : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceEM();
        ~VoiceEM();


}; // VoiceEM

class VoiceFXO : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceFXO();
        ~VoiceFXO();


}; // VoiceFXO

class VoiceFXS : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceFXS();
        ~VoiceFXS();


}; // VoiceFXS

class VoiceEncap : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceEncap();
        ~VoiceEncap();


}; // VoiceEncap

class VoiceOverIp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceOverIp();
        ~VoiceOverIp();


}; // VoiceOverIp

class AtmDxi : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmDxi();
        ~AtmDxi();


}; // AtmDxi

class AtmFuni : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmFuni();
        ~AtmFuni();


}; // AtmFuni

class AtmIma : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmIma();
        ~AtmIma();


}; // AtmIma

class PppMultilinkBundle : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PppMultilinkBundle();
        ~PppMultilinkBundle();


}; // PppMultilinkBundle

class IpOverCdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IpOverCdlc();
        ~IpOverCdlc();


}; // IpOverCdlc

class IpOverClaw : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IpOverClaw();
        ~IpOverClaw();


}; // IpOverClaw

class StackToStack : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        StackToStack();
        ~StackToStack();


}; // StackToStack

class VirtualIpAddress : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VirtualIpAddress();
        ~VirtualIpAddress();


}; // VirtualIpAddress

class Mpc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Mpc();
        ~Mpc();


}; // Mpc

class IpOverAtm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IpOverAtm();
        ~IpOverAtm();


}; // IpOverAtm

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

class GigabitEthernet : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        GigabitEthernet();
        ~GigabitEthernet();


}; // GigabitEthernet

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

class X25mlp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25mlp();
        ~X25mlp();


}; // X25mlp

class X25huntGroup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X25huntGroup();
        ~X25huntGroup();


}; // X25huntGroup

class TranspHdlc : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        TranspHdlc();
        ~TranspHdlc();


}; // TranspHdlc

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

class DocsCableMaclayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DocsCableMaclayer();
        ~DocsCableMaclayer();


}; // DocsCableMaclayer

class DocsCableDownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DocsCableDownstream();
        ~DocsCableDownstream();


}; // DocsCableDownstream

class DocsCableUpstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DocsCableUpstream();
        ~DocsCableUpstream();


}; // DocsCableUpstream

class A12MppSwitch : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        A12MppSwitch();
        ~A12MppSwitch();


}; // A12MppSwitch

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

class AtmSubInterface : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmSubInterface();
        ~AtmSubInterface();


}; // AtmSubInterface

class L2vlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L2vlan();
        ~L2vlan();


}; // L2vlan

class L3ipvlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L3ipvlan();
        ~L3ipvlan();


}; // L3ipvlan

class L3ipxvlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        L3ipxvlan();
        ~L3ipxvlan();


}; // L3ipxvlan

class DigitalPowerline : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DigitalPowerline();
        ~DigitalPowerline();


}; // DigitalPowerline

class MediaMailOverIp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        MediaMailOverIp();
        ~MediaMailOverIp();


}; // MediaMailOverIp

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

class IpForward : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IpForward();
        ~IpForward();


}; // IpForward

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

class DvbRccMacLayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbRccMacLayer();
        ~DvbRccMacLayer();


}; // DvbRccMacLayer

class DvbRccDownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbRccDownstream();
        ~DvbRccDownstream();


}; // DvbRccDownstream

class DvbRccUpstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbRccUpstream();
        ~DvbRccUpstream();


}; // DvbRccUpstream

class AtmVirtual : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmVirtual();
        ~AtmVirtual();


}; // AtmVirtual

class MplsTunnel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        MplsTunnel();
        ~MplsTunnel();


}; // MplsTunnel

class Srp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Srp();
        ~Srp();


}; // Srp

class VoiceOverAtm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceOverAtm();
        ~VoiceOverAtm();


}; // VoiceOverAtm

class VoiceOverFrameRelay : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceOverFrameRelay();
        ~VoiceOverFrameRelay();


}; // VoiceOverFrameRelay

class Idsl : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Idsl();
        ~Idsl();


}; // Idsl

class CompositeLink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CompositeLink();
        ~CompositeLink();


}; // CompositeLink

class Ss7SigLink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ss7SigLink();
        ~Ss7SigLink();


}; // Ss7SigLink

class PropWirelessP2P : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropWirelessP2P();
        ~PropWirelessP2P();


}; // PropWirelessP2P

class FrForward : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FrForward();
        ~FrForward();


}; // FrForward

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

class Ieee8023adLag : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee8023adLag();
        ~Ieee8023adLag();


}; // Ieee8023adLag

class Bgppolicyaccounting : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bgppolicyaccounting();
        ~Bgppolicyaccounting();


}; // Bgppolicyaccounting

class Frf16MfrBundle : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Frf16MfrBundle();
        ~Frf16MfrBundle();


}; // Frf16MfrBundle

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

class MfSigLink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        MfSigLink();
        ~MfSigLink();


}; // MfSigLink

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

class Ds1FDL : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ds1FDL();
        ~Ds1FDL();


}; // Ds1FDL

class Pos : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Pos();
        ~Pos();


}; // Pos

class DvbAsiIn : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbAsiIn();
        ~DvbAsiIn();


}; // DvbAsiIn

class DvbAsiOut : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbAsiOut();
        ~DvbAsiOut();


}; // DvbAsiOut

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

class Gr303RDT : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gr303RDT();
        ~Gr303RDT();


}; // Gr303RDT

class Gr303IDT : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gr303IDT();
        ~Gr303IDT();


}; // Gr303IDT

class Isup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Isup();
        ~Isup();


}; // Isup

class PropDocsWirelessMaclayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropDocsWirelessMaclayer();
        ~PropDocsWirelessMaclayer();


}; // PropDocsWirelessMaclayer

class PropDocsWirelessDownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropDocsWirelessDownstream();
        ~PropDocsWirelessDownstream();


}; // PropDocsWirelessDownstream

class PropDocsWirelessUpstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropDocsWirelessUpstream();
        ~PropDocsWirelessUpstream();


}; // PropDocsWirelessUpstream

class Hiperlan2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Hiperlan2();
        ~Hiperlan2();


}; // Hiperlan2

class PropBWAp2Mp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropBWAp2Mp();
        ~PropBWAp2Mp();


}; // PropBWAp2Mp

class SonetOverheadChannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SonetOverheadChannel();
        ~SonetOverheadChannel();


}; // SonetOverheadChannel

class DigitalWrapperOverheadChannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DigitalWrapperOverheadChannel();
        ~DigitalWrapperOverheadChannel();


}; // DigitalWrapperOverheadChannel

class Aal2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Aal2();
        ~Aal2();


}; // Aal2

class RadioMAC : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        RadioMAC();
        ~RadioMAC();


}; // RadioMAC

class AtmRadio : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmRadio();
        ~AtmRadio();


}; // AtmRadio

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

class ReachDSL : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        ReachDSL();
        ~ReachDSL();


}; // ReachDSL

class FrDlciEndPt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FrDlciEndPt();
        ~FrDlciEndPt();


}; // FrDlciEndPt

class AtmVciEndPt : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AtmVciEndPt();
        ~AtmVciEndPt();


}; // AtmVciEndPt

class OpticalChannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        OpticalChannel();
        ~OpticalChannel();


}; // OpticalChannel

class OpticalTransport : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        OpticalTransport();
        ~OpticalTransport();


}; // OpticalTransport

class PropAtm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PropAtm();
        ~PropAtm();


}; // PropAtm

class VoiceOverCable : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceOverCable();
        ~VoiceOverCable();


}; // VoiceOverCable

class Infiniband : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Infiniband();
        ~Infiniband();


}; // Infiniband

class TeLink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        TeLink();
        ~TeLink();


}; // TeLink

class Q2931 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Q2931();
        ~Q2931();


}; // Q2931

class VirtualTg : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VirtualTg();
        ~VirtualTg();


}; // VirtualTg

class SipTg : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SipTg();
        ~SipTg();


}; // SipTg

class SipSig : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SipSig();
        ~SipSig();


}; // SipSig

class DocsCableUpstreamChannel : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DocsCableUpstreamChannel();
        ~DocsCableUpstreamChannel();


}; // DocsCableUpstreamChannel

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

class VoiceEMFGD : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceEMFGD();
        ~VoiceEMFGD();


}; // VoiceEMFGD

class VoiceFGDEANA : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceFGDEANA();
        ~VoiceFGDEANA();


}; // VoiceFGDEANA

class VoiceDID : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceDID();
        ~VoiceDID();


}; // VoiceDID

class MpegTransport : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        MpegTransport();
        ~MpegTransport();


}; // MpegTransport

class SixToFour : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        SixToFour();
        ~SixToFour();


}; // SixToFour

class Gtp : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Gtp();
        ~Gtp();


}; // Gtp

class PdnEtherLoop1 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PdnEtherLoop1();
        ~PdnEtherLoop1();


}; // PdnEtherLoop1

class PdnEtherLoop2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        PdnEtherLoop2();
        ~PdnEtherLoop2();


}; // PdnEtherLoop2

class OpticalChannelGroup : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        OpticalChannelGroup();
        ~OpticalChannelGroup();


}; // OpticalChannelGroup

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

class CiscoISLvlan : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CiscoISLvlan();
        ~CiscoISLvlan();


}; // CiscoISLvlan

class ActelisMetaLOOP : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        ActelisMetaLOOP();
        ~ActelisMetaLOOP();


}; // ActelisMetaLOOP

class FcipLink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        FcipLink();
        ~FcipLink();


}; // FcipLink

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

class CblVectaStar : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CblVectaStar();
        ~CblVectaStar();


}; // CblVectaStar

class DocsCableMCmtsDownstream : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DocsCableMCmtsDownstream();
        ~DocsCableMCmtsDownstream();


}; // DocsCableMCmtsDownstream

class Adsl2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl2();
        ~Adsl2();


}; // Adsl2

class MacSecControlledIF : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        MacSecControlledIF();
        ~MacSecControlledIF();


}; // MacSecControlledIF

class MacSecUncontrolledIF : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        MacSecUncontrolledIF();
        ~MacSecUncontrolledIF();


}; // MacSecUncontrolledIF

class AviciOpticalEther : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AviciOpticalEther();
        ~AviciOpticalEther();


}; // AviciOpticalEther

class Atmbond : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Atmbond();
        ~Atmbond();


}; // Atmbond

class VoiceFGDOS : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceFGDOS();
        ~VoiceFGDOS();


}; // VoiceFGDOS

class MocaVersion1 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        MocaVersion1();
        ~MocaVersion1();


}; // MocaVersion1

class Ieee80216WMAN : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee80216WMAN();
        ~Ieee80216WMAN();


}; // Ieee80216WMAN

class Adsl2plus : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Adsl2plus();
        ~Adsl2plus();


}; // Adsl2plus

class DvbRcsMacLayer : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbRcsMacLayer();
        ~DvbRcsMacLayer();


}; // DvbRcsMacLayer

class DvbTdm : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbTdm();
        ~DvbTdm();


}; // DvbTdm

class DvbRcsTdma : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DvbRcsTdma();
        ~DvbRcsTdma();


}; // DvbRcsTdma

class X86Laps : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        X86Laps();
        ~X86Laps();


}; // X86Laps

class WwanPP : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        WwanPP();
        ~WwanPP();


}; // WwanPP

class WwanPP2 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        WwanPP2();
        ~WwanPP2();


}; // WwanPP2

class VoiceEBS : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VoiceEBS();
        ~VoiceEBS();


}; // VoiceEBS

class IfPwType : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IfPwType();
        ~IfPwType();


}; // IfPwType

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

class AluELP : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AluELP();
        ~AluELP();


}; // AluELP

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

class CapwapDot11Profile : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CapwapDot11Profile();
        ~CapwapDot11Profile();


}; // CapwapDot11Profile

class CapwapDot11Bss : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CapwapDot11Bss();
        ~CapwapDot11Bss();


}; // CapwapDot11Bss

class CapwapWtpVirtualRadio : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CapwapWtpVirtualRadio();
        ~CapwapWtpVirtualRadio();


}; // CapwapWtpVirtualRadio

class Bits : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Bits();
        ~Bits();


}; // Bits

class DocsCableUpstreamRfPort : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        DocsCableUpstreamRfPort();
        ~DocsCableUpstreamRfPort();


}; // DocsCableUpstreamRfPort

class CableDownstreamRfPort : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        CableDownstreamRfPort();
        ~CableDownstreamRfPort();


}; // CableDownstreamRfPort

class VmwareVirtualNic : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VmwareVirtualNic();
        ~VmwareVirtualNic();


}; // VmwareVirtualNic

class Ieee802154 : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        Ieee802154();
        ~Ieee802154();


}; // Ieee802154

class OtnOdu : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        OtnOdu();
        ~OtnOdu();


}; // OtnOdu

class OtnOtu : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        OtnOtu();
        ~OtnOtu();


}; // OtnOtu

class IfVfiType : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        IfVfiType();
        ~IfVfiType();


}; // IfVfiType

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

class AluEpon : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AluEpon();
        ~AluEpon();


}; // AluEpon

class AluEponOnu : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AluEponOnu();
        ~AluEponOnu();


}; // AluEponOnu

class AluEponPhysicalUni : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AluEponPhysicalUni();
        ~AluEponPhysicalUni();


}; // AluEponPhysicalUni

class AluEponLogicalLink : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AluEponLogicalLink();
        ~AluEponLogicalLink();


}; // AluEponLogicalLink

class AluGponOnu : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AluGponOnu();
        ~AluGponOnu();


}; // AluGponOnu

class AluGponPhysicalUni : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        AluGponPhysicalUni();
        ~AluGponPhysicalUni();


}; // AluGponPhysicalUni

class VmwareNicTeam : public ietf::iana_if_type::IanaInterfaceType, virtual ydk::Identity
{
    public:
        VmwareNicTeam();
        ~VmwareNicTeam();


}; // VmwareNicTeam


}
}

#endif /* _IANA_IF_TYPE_ */

