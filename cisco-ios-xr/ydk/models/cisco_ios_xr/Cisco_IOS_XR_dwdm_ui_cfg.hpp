#ifndef _CISCO_IOS_XR_DWDM_UI_CFG_
#define _CISCO_IOS_XR_DWDM_UI_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dwdm_ui_cfg {

class WaveChannelNum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf channel_wavelength;
        static const ydk::Enum::YLeaf channel_frequency;
        static const ydk::Enum::YLeaf Y_100mhz_frequency;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "channel-wavelength") return 1;
            if (name == "channel-frequency") return 2;
            if (name == "100mhz-frequency") return 4;
            return -1;
        }
};

class DwdmLoopback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf line;
        static const ydk::Enum::YLeaf internal;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "line") return 1;
            if (name == "internal") return 2;
            return -1;
        }
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
        static const ydk::Enum::YLeaf sd_everest;
        static const ydk::Enum::YLeaf sd_denali;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "standard") return 1;
            if (name == "enhanced") return 2;
            if (name == "high-gain-hd") return 3;
            if (name == "long-haul-hd") return 4;
            if (name == "high-gain-sd") return 5;
            if (name == "long-haul-sd") return 6;
            if (name == "ci-bch") return 7;
            if (name == "high-gain-multivendor-hd") return 8;
            if (name == "sd-everest") return 9;
            if (name == "sd-denali") return 10;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "oci") return 14;
            if (name == "odu-ais") return 15;
            if (name == "lck") return 16;
            if (name == "odu-bdi") return 17;
            if (name == "odu-sf") return 20;
            if (name == "odu-sd") return 21;
            if (name == "plm") return 22;
            if (name == "odu-tim") return 23;
            return -1;
        }
};

class PrbsMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf source;
        static const ydk::Enum::YLeaf sink;
        static const ydk::Enum::YLeaf source_sink;
        static const ydk::Enum::YLeaf invalid;

        static int get_enum_value(const std::string & name) {
            if (name == "source") return 0;
            if (name == "sink") return 1;
            if (name == "source-sink") return 2;
            if (name == "invalid") return 3;
            return -1;
        }
};

class ExpectedTti : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf expected_tti_ascii;
        static const ydk::Enum::YLeaf expected_tti_hex;

        static int get_enum_value(const std::string & name) {
            if (name == "expected-tti-ascii") return 3;
            if (name == "expected-tti-hex") return 4;
            return -1;
        }
};

class DwdmAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out_of_service;
        static const ydk::Enum::YLeaf in_service;
        static const ydk::Enum::YLeaf maintenance;
        static const ydk::Enum::YLeaf in_service_config_allowed;

        static int get_enum_value(const std::string & name) {
            if (name == "out-of-service") return 0;
            if (name == "in-service") return 1;
            if (name == "maintenance") return 2;
            if (name == "in-service-config-allowed") return 3;
            return -1;
        }
};

class PrbsPattern : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf null;
        static const ydk::Enum::YLeaf pn11;
        static const ydk::Enum::YLeaf pn23;
        static const ydk::Enum::YLeaf pn31;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "null") return 1;
            if (name == "pn11") return 2;
            if (name == "pn23") return 3;
            if (name == "pn31") return 4;
            return -1;
        }
};

class OtuThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prefec_sd;
        static const ydk::Enum::YLeaf prefec_sf;
        static const ydk::Enum::YLeaf otu_sd;
        static const ydk::Enum::YLeaf otu_sf;

        static int get_enum_value(const std::string & name) {
            if (name == "prefec-sd") return 0;
            if (name == "prefec-sf") return 1;
            if (name == "otu-sd") return 4;
            if (name == "otu-sf") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "los") return 0;
            if (name == "lof") return 1;
            if (name == "lom") return 2;
            if (name == "iae") return 6;
            if (name == "otu-bdi") return 7;
            if (name == "otu-tim") return 8;
            if (name == "otu-sf") return 10;
            if (name == "otu-sd") return 11;
            if (name == "fec-mismatch") return 24;
            if (name == "prefec-sd-ber") return 31;
            if (name == "prefec-sf-ber") return 32;
            return -1;
        }
};

class OduThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf odu_sd;
        static const ydk::Enum::YLeaf odu_sf;

        static int get_enum_value(const std::string & name) {
            if (name == "odu-sd") return 8;
            if (name == "odu-sf") return 9;
            return -1;
        }
};

class TxTti : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tx_tti_ascii;
        static const ydk::Enum::YLeaf tx_tti_hex;

        static int get_enum_value(const std::string & name) {
            if (name == "tx-tti-ascii") return 0;
            if (name == "tx-tti-hex") return 1;
            return -1;
        }
};

class Efec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf i__DOT__4;
        static const ydk::Enum::YLeaf i__DOT__7;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "i.4") return 1;
            if (name == "i.7") return 2;
            return -1;
        }
};

class Proactive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf graceful;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 1;
            if (name == "graceful") return 2;
            return -1;
        }
};

class Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf opu1e;
        static const ydk::Enum::YLeaf opu2e;

        static int get_enum_value(const std::string & name) {
            if (name == "opu1e") return 1;
            if (name == "opu2e") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_DWDM_UI_CFG_ */

