#ifndef _CISCO_IOS_XR_DWDM_UI_CFG_
#define _CISCO_IOS_XR_DWDM_UI_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_dwdm_ui_cfg {


class WaveChannelNumEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf channel_wavelength;
        static const Enum::YLeaf channel_frequency;
        static const Enum::YLeaf Y_100mhz_frequency;

};

class DwdmLoopbackEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf line;
        static const Enum::YLeaf internal;

};

class FecEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf standard;
        static const Enum::YLeaf enhanced;
        static const Enum::YLeaf high_gain_hd;
        static const Enum::YLeaf long_haul_hd;
        static const Enum::YLeaf high_gain_sd;
        static const Enum::YLeaf long_haul_sd;
        static const Enum::YLeaf ci_bch;
        static const Enum::YLeaf high_gain_multivendor_hd;

};

class OduAlarmEnum : public Enum
{
    public:
        static const Enum::YLeaf oci;
        static const Enum::YLeaf odu_ais;
        static const Enum::YLeaf lck;
        static const Enum::YLeaf odu_bdi;
        static const Enum::YLeaf odu_sf;
        static const Enum::YLeaf odu_sd;
        static const Enum::YLeaf plm;
        static const Enum::YLeaf odu_tim;

};

class PrbsModeEnum : public Enum
{
    public:
        static const Enum::YLeaf source;
        static const Enum::YLeaf sink;
        static const Enum::YLeaf source_sink;
        static const Enum::YLeaf invalid;

};

class ExpectedTtiEnum : public Enum
{
    public:
        static const Enum::YLeaf expected_tti_ascii;
        static const Enum::YLeaf expected_tti_hex;

};

class DwdmAdminStateEnum : public Enum
{
    public:
        static const Enum::YLeaf out_of_service;
        static const Enum::YLeaf in_service;
        static const Enum::YLeaf maintenance;
        static const Enum::YLeaf in_service_config_allowed;

};

class PrbsPatternEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf null;
        static const Enum::YLeaf pn11;
        static const Enum::YLeaf pn23;
        static const Enum::YLeaf pn31;

};

class OtuThresholdEnum : public Enum
{
    public:
        static const Enum::YLeaf prefec_sd;
        static const Enum::YLeaf prefec_sf;
        static const Enum::YLeaf otu_sd;
        static const Enum::YLeaf otu_sf;

};

class OtuAlarmEnum : public Enum
{
    public:
        static const Enum::YLeaf los;
        static const Enum::YLeaf lof;
        static const Enum::YLeaf lom;
        static const Enum::YLeaf iae;
        static const Enum::YLeaf otu_bdi;
        static const Enum::YLeaf otu_tim;
        static const Enum::YLeaf otu_sf;
        static const Enum::YLeaf otu_sd;
        static const Enum::YLeaf fec_mismatch;
        static const Enum::YLeaf prefec_sd_ber;
        static const Enum::YLeaf prefec_sf_ber;

};

class OduThresholdEnum : public Enum
{
    public:
        static const Enum::YLeaf odu_sd;
        static const Enum::YLeaf odu_sf;

};

class TxTtiEnum : public Enum
{
    public:
        static const Enum::YLeaf tx_tti_ascii;
        static const Enum::YLeaf tx_tti_hex;

};

class EfecEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf i__DOT__4;
        static const Enum::YLeaf i__DOT__7;

};

class ProactiveEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf graceful;

};

class FramingEnum : public Enum
{
    public:
        static const Enum::YLeaf opu1e;
        static const Enum::YLeaf opu2e;

};


}
}

#endif /* _CISCO_IOS_XR_DWDM_UI_CFG_ */

