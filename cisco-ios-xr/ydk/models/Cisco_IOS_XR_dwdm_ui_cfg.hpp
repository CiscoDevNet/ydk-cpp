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
        static const Enum::Value default_;
        static const Enum::Value channel_wavelength;
        static const Enum::Value channel_frequency;
        static const Enum::Value Y_100mhz_frequency;

};

class DwdmLoopbackEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value line;
        static const Enum::Value internal;

};

class FecEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value standard;
        static const Enum::Value enhanced;
        static const Enum::Value high_gain_hd;
        static const Enum::Value long_haul_hd;
        static const Enum::Value high_gain_sd;
        static const Enum::Value long_haul_sd;
        static const Enum::Value ci_bch;
        static const Enum::Value high_gain_multivendor_hd;

};

class OduAlarmEnum : public Enum
{
    public:
        static const Enum::Value oci;
        static const Enum::Value odu_ais;
        static const Enum::Value lck;
        static const Enum::Value odu_bdi;
        static const Enum::Value odu_sf;
        static const Enum::Value odu_sd;
        static const Enum::Value plm;
        static const Enum::Value odu_tim;

};

class PrbsModeEnum : public Enum
{
    public:
        static const Enum::Value source;
        static const Enum::Value sink;
        static const Enum::Value source_sink;
        static const Enum::Value invalid;

};

class ExpectedTtiEnum : public Enum
{
    public:
        static const Enum::Value expected_tti_ascii;
        static const Enum::Value expected_tti_hex;

};

class DwdmAdminStateEnum : public Enum
{
    public:
        static const Enum::Value out_of_service;
        static const Enum::Value in_service;
        static const Enum::Value maintenance;
        static const Enum::Value in_service_config_allowed;

};

class PrbsPatternEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value null;
        static const Enum::Value pn11;
        static const Enum::Value pn23;
        static const Enum::Value pn31;

};

class OtuThresholdEnum : public Enum
{
    public:
        static const Enum::Value prefec_sd;
        static const Enum::Value prefec_sf;
        static const Enum::Value otu_sd;
        static const Enum::Value otu_sf;

};

class OtuAlarmEnum : public Enum
{
    public:
        static const Enum::Value los;
        static const Enum::Value lof;
        static const Enum::Value lom;
        static const Enum::Value iae;
        static const Enum::Value otu_bdi;
        static const Enum::Value otu_tim;
        static const Enum::Value otu_sf;
        static const Enum::Value otu_sd;
        static const Enum::Value fec_mismatch;
        static const Enum::Value prefec_sd_ber;
        static const Enum::Value prefec_sf_ber;

};

class OduThresholdEnum : public Enum
{
    public:
        static const Enum::Value odu_sd;
        static const Enum::Value odu_sf;

};

class TxTtiEnum : public Enum
{
    public:
        static const Enum::Value tx_tti_ascii;
        static const Enum::Value tx_tti_hex;

};

class EfecEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value i__DOT__4;
        static const Enum::Value i__DOT__7;

};

class ProactiveEnum : public Enum
{
    public:
        static const Enum::Value default_;
        static const Enum::Value graceful;

};

class FramingEnum : public Enum
{
    public:
        static const Enum::Value opu1e;
        static const Enum::Value opu2e;

};


}
}

#endif /* _CISCO_IOS_XR_DWDM_UI_CFG_ */

