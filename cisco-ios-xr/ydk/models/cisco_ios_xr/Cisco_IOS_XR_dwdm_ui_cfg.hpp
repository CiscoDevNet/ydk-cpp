#ifndef _CISCO_IOS_XR_DWDM_UI_CFG_
#define _CISCO_IOS_XR_DWDM_UI_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dwdm_ui_cfg {

class DwdmAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out_of_service;
        static const ydk::Enum::YLeaf in_service;
        static const ydk::Enum::YLeaf maintenance;
        static const ydk::Enum::YLeaf in_service_config_allowed;

};

class OduAlarm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oci;
        static const ydk::Enum::YLeaf odu_ais;
        static const ydk::Enum::YLeaf lck;
        static const ydk::Enum::YLeaf odu_bdi;
        static const ydk::Enum::YLeaf odu_sf;
        static const ydk::Enum::YLeaf odu_sd;
        static const ydk::Enum::YLeaf plm;
        static const ydk::Enum::YLeaf odu_tim;

};

class WaveChannelNum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf channel_wavelength;
        static const ydk::Enum::YLeaf channel_frequency;
        static const ydk::Enum::YLeaf Y_100mhz_frequency;

};

class PrbsMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf source;
        static const ydk::Enum::YLeaf sink;
        static const ydk::Enum::YLeaf source_sink;
        static const ydk::Enum::YLeaf invalid;

};

class OtuAlarm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf los;
        static const ydk::Enum::YLeaf lof;
        static const ydk::Enum::YLeaf lom;
        static const ydk::Enum::YLeaf iae;
        static const ydk::Enum::YLeaf otu_bdi;
        static const ydk::Enum::YLeaf otu_tim;
        static const ydk::Enum::YLeaf otu_sf;
        static const ydk::Enum::YLeaf otu_sd;
        static const ydk::Enum::YLeaf fec_mismatch;
        static const ydk::Enum::YLeaf prefec_sd_ber;
        static const ydk::Enum::YLeaf prefec_sf_ber;

};

class Efec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf i__DOT__4;
        static const ydk::Enum::YLeaf i__DOT__7;

};

class PrbsPattern : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf null;
        static const ydk::Enum::YLeaf pn11;
        static const ydk::Enum::YLeaf pn23;
        static const ydk::Enum::YLeaf pn31;

};

class DwdmLoopback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf line;
        static const ydk::Enum::YLeaf internal;

};

class OtuThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prefec_sd;
        static const ydk::Enum::YLeaf prefec_sf;
        static const ydk::Enum::YLeaf otu_sd;
        static const ydk::Enum::YLeaf otu_sf;

};

class Fec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf enhanced;
        static const ydk::Enum::YLeaf high_gain_hd;
        static const ydk::Enum::YLeaf long_haul_hd;
        static const ydk::Enum::YLeaf high_gain_sd;
        static const ydk::Enum::YLeaf long_haul_sd;
        static const ydk::Enum::YLeaf ci_bch;
        static const ydk::Enum::YLeaf high_gain_multivendor_hd;

};

class ExpectedTti : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf expected_tti_ascii;
        static const ydk::Enum::YLeaf expected_tti_hex;

};

class Proactive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf graceful;

};

class Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf opu1e;
        static const ydk::Enum::YLeaf opu2e;

};

class OduThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf odu_sd;
        static const ydk::Enum::YLeaf odu_sf;

};

class TxTti : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tx_tti_ascii;
        static const ydk::Enum::YLeaf tx_tti_hex;

};


}
}

#endif /* _CISCO_IOS_XR_DWDM_UI_CFG_ */

