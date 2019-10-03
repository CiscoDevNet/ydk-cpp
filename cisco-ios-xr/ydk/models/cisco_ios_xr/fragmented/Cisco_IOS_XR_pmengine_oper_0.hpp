#ifndef _CISCO_IOS_XR_PMENGINE_OPER_0_
#define _CISCO_IOS_XR_PMENGINE_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

class PerformanceManagement : public ydk::Entity
{
    public:
        PerformanceManagement();
        ~PerformanceManagement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Macsec; //type: PerformanceManagement::Macsec
        class HoVc; //type: PerformanceManagement::HoVc
        class Odu; //type: PerformanceManagement::Odu
        class Otu; //type: PerformanceManagement::Otu
        class Stm; //type: PerformanceManagement::Stm
        class Sonet; //type: PerformanceManagement::Sonet
        class Optics; //type: PerformanceManagement::Optics
        class Sts; //type: PerformanceManagement::Sts
        class Dwdm; //type: PerformanceManagement::Dwdm
        class Oc; //type: PerformanceManagement::Oc
        class Ethernet; //type: PerformanceManagement::Ethernet

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec> macsec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc> ho_vc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu> odu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu> otu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Stm> stm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet> sonet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics> optics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts> sts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm> dwdm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc> oc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet> ethernet;
        
}; // PerformanceManagement


class PerformanceManagement::Macsec : public ydk::Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacsecPorts; //type: PerformanceManagement::Macsec::MacsecPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts> macsec_ports;
        
}; // PerformanceManagement::Macsec


class PerformanceManagement::Macsec::MacsecPorts : public ydk::Entity
{
    public:
        MacsecPorts();
        ~MacsecPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacsecPort; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort

        ydk::YList macsec_port;
        
}; // PerformanceManagement::Macsec::MacsecPorts


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort : public ydk::Entity
{
    public:
        MacsecPort();
        ~MacsecPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class MacsecCurrent; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent> macsec_current;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent : public ydk::Entity
{
    public:
        MacsecCurrent();
        ~MacsecCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15
        class MacsecSecond30; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30
        class MacsecHour24; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15> macsec_minute15;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30> macsec_second30;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24> macsec_hour24;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15 : public ydk::Entity
{
    public:
        MacsecMinute15();
        ~MacsecMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15secyifs; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs
        class MacsecMinute15secyrxes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes
        class MacsecMinute15secytxes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes
        class MacsecMinute15EtherS; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs> macsec_minute15secyifs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes> macsec_minute15secyrxes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes> macsec_minute15secytxes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS> macsec_minute15_ether_s;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs : public ydk::Entity
{
    public:
        MacsecMinute15secyifs();
        ~MacsecMinute15secyifs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15secyif; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif

        ydk::YList macsec_minute15secyif;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif : public ydk::Entity
{
    public:
        MacsecMinute15secyif();
        ~MacsecMinute15secyif();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class InPktsUntagged; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsUntagged
        class InPktsNoTag; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsNoTag
        class InPktsBadTag; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsBadTag
        class InPktsUnknownSci; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsUnknownSci
        class InPktsNoSci; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsNoSci
        class InPktsOverrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsOverrun
        class InOctetsValidated; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InOctetsDecrypted
        class OutPktsUntagged; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutPktsUntagged
        class OutPktsTooLong; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutPktsTooLong
        class OutOctetsProtected; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutOctetsEncrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsUntagged> in_pkts_untagged;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsNoTag> in_pkts_no_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsBadTag> in_pkts_bad_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsUnknownSci> in_pkts_unknown_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsNoSci> in_pkts_no_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsOverrun> in_pkts_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InOctetsDecrypted> in_octets_decrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutPktsUntagged> out_pkts_untagged;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutPktsTooLong> out_pkts_too_long;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutOctetsEncrypted> out_octets_encrypted;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsUntagged : public ydk::Entity
{
    public:
        InPktsUntagged();
        ~InPktsUntagged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsUntagged


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsNoTag : public ydk::Entity
{
    public:
        InPktsNoTag();
        ~InPktsNoTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsNoTag


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsBadTag : public ydk::Entity
{
    public:
        InPktsBadTag();
        ~InPktsBadTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsBadTag


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsUnknownSci : public ydk::Entity
{
    public:
        InPktsUnknownSci();
        ~InPktsUnknownSci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsUnknownSci


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsNoSci : public ydk::Entity
{
    public:
        InPktsNoSci();
        ~InPktsNoSci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsNoSci


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsOverrun : public ydk::Entity
{
    public:
        InPktsOverrun();
        ~InPktsOverrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InPktsOverrun


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InOctetsValidated : public ydk::Entity
{
    public:
        InOctetsValidated();
        ~InOctetsValidated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InOctetsValidated


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InOctetsDecrypted : public ydk::Entity
{
    public:
        InOctetsDecrypted();
        ~InOctetsDecrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::InOctetsDecrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutPktsUntagged : public ydk::Entity
{
    public:
        OutPktsUntagged();
        ~OutPktsUntagged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutPktsUntagged


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutPktsTooLong : public ydk::Entity
{
    public:
        OutPktsTooLong();
        ~OutPktsTooLong();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutPktsTooLong


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutOctetsProtected : public ydk::Entity
{
    public:
        OutOctetsProtected();
        ~OutOctetsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutOctetsProtected


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutOctetsEncrypted : public ydk::Entity
{
    public:
        OutOctetsEncrypted();
        ~OutOctetsEncrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyifs::MacsecMinute15secyif::OutOctetsEncrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes : public ydk::Entity
{
    public:
        MacsecMinute15secyrxes();
        ~MacsecMinute15secyrxes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15secyrx; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx

        ydk::YList macsec_minute15secyrx;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx : public ydk::Entity
{
    public:
        MacsecMinute15secyrx();
        ~MacsecMinute15secyrx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class InPktsUnchecked; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsUnchecked
        class InPktsDelayed; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsDelayed
        class InPktsLate; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsLate
        class InPktsOk; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsOk
        class InPktsInvalid; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsInvalid
        class InPktsNotValid; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsNotValid
        class InPktsNotUsingSa; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsNotUsingSa
        class InPktsUnusedSa; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsUnusedSa
        class InPktsUntaggedHit; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsUntaggedHit
        class InOctetsValidated; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InOctetsDecrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsUnchecked> in_pkts_unchecked;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsDelayed> in_pkts_delayed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsLate> in_pkts_late;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsOk> in_pkts_ok;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsInvalid> in_pkts_invalid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsNotValid> in_pkts_not_valid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsNotUsingSa> in_pkts_not_using_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsUnusedSa> in_pkts_unused_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsUntaggedHit> in_pkts_untagged_hit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InOctetsDecrypted> in_octets_decrypted;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsUnchecked : public ydk::Entity
{
    public:
        InPktsUnchecked();
        ~InPktsUnchecked();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsUnchecked


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsDelayed : public ydk::Entity
{
    public:
        InPktsDelayed();
        ~InPktsDelayed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsDelayed


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsLate : public ydk::Entity
{
    public:
        InPktsLate();
        ~InPktsLate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsLate


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsOk : public ydk::Entity
{
    public:
        InPktsOk();
        ~InPktsOk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsOk


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsInvalid : public ydk::Entity
{
    public:
        InPktsInvalid();
        ~InPktsInvalid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsInvalid


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsNotValid : public ydk::Entity
{
    public:
        InPktsNotValid();
        ~InPktsNotValid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsNotValid


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsNotUsingSa : public ydk::Entity
{
    public:
        InPktsNotUsingSa();
        ~InPktsNotUsingSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsNotUsingSa


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsUnusedSa : public ydk::Entity
{
    public:
        InPktsUnusedSa();
        ~InPktsUnusedSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsUnusedSa


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsUntaggedHit : public ydk::Entity
{
    public:
        InPktsUntaggedHit();
        ~InPktsUntaggedHit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InPktsUntaggedHit


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InOctetsValidated : public ydk::Entity
{
    public:
        InOctetsValidated();
        ~InOctetsValidated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InOctetsValidated


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InOctetsDecrypted : public ydk::Entity
{
    public:
        InOctetsDecrypted();
        ~InOctetsDecrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secyrxes::MacsecMinute15secyrx::InOctetsDecrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes : public ydk::Entity
{
    public:
        MacsecMinute15secytxes();
        ~MacsecMinute15secytxes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15secytx; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx

        ydk::YList macsec_minute15secytx;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx : public ydk::Entity
{
    public:
        MacsecMinute15secytx();
        ~MacsecMinute15secytx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class OutPktsProtected; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutPktsProtected
        class OutPktsEncrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutPktsEncrypted
        class OutOctetsProtected; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutOctetsEncrypted
        class OutPktsTooLong; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutPktsTooLong

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutPktsProtected> out_pkts_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutPktsEncrypted> out_pkts_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutOctetsEncrypted> out_octets_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutPktsTooLong> out_pkts_too_long;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutPktsProtected : public ydk::Entity
{
    public:
        OutPktsProtected();
        ~OutPktsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutPktsProtected


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutPktsEncrypted : public ydk::Entity
{
    public:
        OutPktsEncrypted();
        ~OutPktsEncrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutPktsEncrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutOctetsProtected : public ydk::Entity
{
    public:
        OutOctetsProtected();
        ~OutOctetsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutOctetsProtected


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutOctetsEncrypted : public ydk::Entity
{
    public:
        OutOctetsEncrypted();
        ~OutOctetsEncrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutOctetsEncrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutPktsTooLong : public ydk::Entity
{
    public:
        OutPktsTooLong();
        ~OutPktsTooLong();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15secytxes::MacsecMinute15secytx::OutPktsTooLong


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS : public ydk::Entity
{
    public:
        MacsecMinute15EtherS();
        ~MacsecMinute15EtherS();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15Ether; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether

        ydk::YList macsec_minute15_ether;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether : public ydk::Entity
{
    public:
        MacsecMinute15Ether();
        ~MacsecMinute15Ether();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class RxPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt
        class StatPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt
        class OctetStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat
        class OversizePktStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat
        class FcsErrorsStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat
        class LongFramesStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat
        class JabberStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat
        class Ether64Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets
        class Ether65127Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet
        class Ether128255Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet
        class Ether256511Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet
        class Ether5121023Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet
        class Ether10241518Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet
        class InUcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt
        class InMcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt
        class InBcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt
        class OutUcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt
        class OutBcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt
        class OutMcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt
        class TxPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt
        class IfInErrors; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors
        class IfInOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets
        class EtherStatMulticastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt
        class EtherStatBroadcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt
        class EtherStatUndersizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt
        class OutOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets
        class InPauseFrame; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame
        class InGoodBytes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes
        class In8021qFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021qFrames
        class InPkts1519MaxOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets
        class InGoodPkts; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts
        class InDropOverrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun
        class InDropAbort; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort
        class InDropInvalidVlan; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan
        class InDropInvalidDmac; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac
        class InDropInvalidEncap; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap
        class InDropOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther
        class InMibGiant; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant
        class InMibJabber; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber
        class InMibcrc; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc
        class InErrorCollisions; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions
        class InErrorSymbol; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol
        class OutGoodBytes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes
        class Out8021qFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021qFrames
        class OutPauseFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames
        class OutPkts1519MaxOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets
        class OutGoodPkts; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts
        class OutDropUnderrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun
        class OutDropAbort; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort
        class OutDropOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther
        class OutErrorOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther
        class InErrorGiant; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant
        class InErrorRunt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt
        class InErrorJabbers; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers
        class InErrorFragments; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments
        class InErrorOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther
        class InPkt64Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet
        class InPkts65To127Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets
        class InPkts128To255Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets
        class InPkts256To511Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets
        class InPkts512To1023Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets
        class InPkts1024To1518Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets
        class Outpkt64octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64octet
        class OutPkts65127Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets
        class OutPkts128255Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets
        class OutPkts256511Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets
        class OutPkts5121023Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets
        class OutPkts10241518Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets
        class RxUtil; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil
        class TxUtil; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil
        class TxUndersizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt
        class TxOversizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt
        class TxFragments; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments
        class TxJabber; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber
        class TxBadFcs; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt> rx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt> stat_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat> octet_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat> oversize_pkt_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat> fcs_errors_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat> long_frames_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat> jabber_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets> ether64_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet> ether65127_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet> ether128255_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet> ether256511_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet> ether5121023_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet> ether10241518_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt> in_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt> in_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt> in_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt> out_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt> out_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt> out_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt> tx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors> if_in_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets> if_in_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt> ether_stat_multicast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt> ether_stat_broadcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt> ether_stat_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets> out_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame> in_pause_frame;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes> in_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021qFrames> in8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets> in_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts> in_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun> in_drop_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort> in_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan> in_drop_invalid_vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac> in_drop_invalid_dmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap> in_drop_invalid_encap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther> in_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant> in_mib_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber> in_mib_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc> in_mibcrc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions> in_error_collisions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol> in_error_symbol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes> out_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021qFrames> out8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames> out_pause_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets> out_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts> out_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun> out_drop_underrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort> out_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther> out_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther> out_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant> in_error_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt> in_error_runt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers> in_error_jabbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments> in_error_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther> in_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet> in_pkt64_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets> in_pkts65_to127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets> in_pkts128_to255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets> in_pkts256_to511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets> in_pkts512_to1023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets> in_pkts1024_to1518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64octet> outpkt64octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets> out_pkts65127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets> out_pkts128255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets> out_pkts256511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets> out_pkts5121023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets> out_pkts10241518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil> rx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil> tx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt> tx_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt> tx_oversized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments> tx_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber> tx_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs> tx_bad_fcs;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt : public ydk::Entity
{
    public:
        RxPkt();
        ~RxPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt : public ydk::Entity
{
    public:
        StatPkt();
        ~StatPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat : public ydk::Entity
{
    public:
        OctetStat();
        ~OctetStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat : public ydk::Entity
{
    public:
        OversizePktStat();
        ~OversizePktStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat : public ydk::Entity
{
    public:
        FcsErrorsStat();
        ~FcsErrorsStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat : public ydk::Entity
{
    public:
        LongFramesStat();
        ~LongFramesStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat : public ydk::Entity
{
    public:
        JabberStat();
        ~JabberStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets : public ydk::Entity
{
    public:
        Ether64Octets();
        ~Ether64Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet : public ydk::Entity
{
    public:
        Ether65127Octet();
        ~Ether65127Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet : public ydk::Entity
{
    public:
        Ether128255Octet();
        ~Ether128255Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet : public ydk::Entity
{
    public:
        Ether256511Octet();
        ~Ether256511Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet : public ydk::Entity
{
    public:
        Ether5121023Octet();
        ~Ether5121023Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet : public ydk::Entity
{
    public:
        Ether10241518Octet();
        ~Ether10241518Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt : public ydk::Entity
{
    public:
        InUcastPkt();
        ~InUcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt : public ydk::Entity
{
    public:
        InMcastPkt();
        ~InMcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt : public ydk::Entity
{
    public:
        InBcastPkt();
        ~InBcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt : public ydk::Entity
{
    public:
        OutUcastPkt();
        ~OutUcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt : public ydk::Entity
{
    public:
        OutBcastPkt();
        ~OutBcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt : public ydk::Entity
{
    public:
        OutMcastPkt();
        ~OutMcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt : public ydk::Entity
{
    public:
        TxPkt();
        ~TxPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors : public ydk::Entity
{
    public:
        IfInErrors();
        ~IfInErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets : public ydk::Entity
{
    public:
        IfInOctets();
        ~IfInOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt : public ydk::Entity
{
    public:
        EtherStatMulticastPkt();
        ~EtherStatMulticastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt : public ydk::Entity
{
    public:
        EtherStatBroadcastPkt();
        ~EtherStatBroadcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt : public ydk::Entity
{
    public:
        EtherStatUndersizedPkt();
        ~EtherStatUndersizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets : public ydk::Entity
{
    public:
        OutOctets();
        ~OutOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame : public ydk::Entity
{
    public:
        InPauseFrame();
        ~InPauseFrame();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes : public ydk::Entity
{
    public:
        InGoodBytes();
        ~InGoodBytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021qFrames : public ydk::Entity
{
    public:
        In8021qFrames();
        ~In8021qFrames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021qFrames


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets : public ydk::Entity
{
    public:
        InPkts1519MaxOctets();
        ~InPkts1519MaxOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts : public ydk::Entity
{
    public:
        InGoodPkts();
        ~InGoodPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun : public ydk::Entity
{
    public:
        InDropOverrun();
        ~InDropOverrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort : public ydk::Entity
{
    public:
        InDropAbort();
        ~InDropAbort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan : public ydk::Entity
{
    public:
        InDropInvalidVlan();
        ~InDropInvalidVlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac : public ydk::Entity
{
    public:
        InDropInvalidDmac();
        ~InDropInvalidDmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap : public ydk::Entity
{
    public:
        InDropInvalidEncap();
        ~InDropInvalidEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther : public ydk::Entity
{
    public:
        InDropOther();
        ~InDropOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant : public ydk::Entity
{
    public:
        InMibGiant();
        ~InMibGiant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber : public ydk::Entity
{
    public:
        InMibJabber();
        ~InMibJabber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc : public ydk::Entity
{
    public:
        InMibcrc();
        ~InMibcrc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions : public ydk::Entity
{
    public:
        InErrorCollisions();
        ~InErrorCollisions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol : public ydk::Entity
{
    public:
        InErrorSymbol();
        ~InErrorSymbol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes : public ydk::Entity
{
    public:
        OutGoodBytes();
        ~OutGoodBytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021qFrames : public ydk::Entity
{
    public:
        Out8021qFrames();
        ~Out8021qFrames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021qFrames


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames : public ydk::Entity
{
    public:
        OutPauseFrames();
        ~OutPauseFrames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets : public ydk::Entity
{
    public:
        OutPkts1519MaxOctets();
        ~OutPkts1519MaxOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts : public ydk::Entity
{
    public:
        OutGoodPkts();
        ~OutGoodPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun : public ydk::Entity
{
    public:
        OutDropUnderrun();
        ~OutDropUnderrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort : public ydk::Entity
{
    public:
        OutDropAbort();
        ~OutDropAbort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther : public ydk::Entity
{
    public:
        OutDropOther();
        ~OutDropOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther : public ydk::Entity
{
    public:
        OutErrorOther();
        ~OutErrorOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant : public ydk::Entity
{
    public:
        InErrorGiant();
        ~InErrorGiant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt : public ydk::Entity
{
    public:
        InErrorRunt();
        ~InErrorRunt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers : public ydk::Entity
{
    public:
        InErrorJabbers();
        ~InErrorJabbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments : public ydk::Entity
{
    public:
        InErrorFragments();
        ~InErrorFragments();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther : public ydk::Entity
{
    public:
        InErrorOther();
        ~InErrorOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet : public ydk::Entity
{
    public:
        InPkt64Octet();
        ~InPkt64Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets : public ydk::Entity
{
    public:
        InPkts65To127Octets();
        ~InPkts65To127Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets : public ydk::Entity
{
    public:
        InPkts128To255Octets();
        ~InPkts128To255Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets : public ydk::Entity
{
    public:
        InPkts256To511Octets();
        ~InPkts256To511Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets : public ydk::Entity
{
    public:
        InPkts512To1023Octets();
        ~InPkts512To1023Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets : public ydk::Entity
{
    public:
        InPkts1024To1518Octets();
        ~InPkts1024To1518Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64octet : public ydk::Entity
{
    public:
        Outpkt64octet();
        ~Outpkt64octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets : public ydk::Entity
{
    public:
        OutPkts65127Octets();
        ~OutPkts65127Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets : public ydk::Entity
{
    public:
        OutPkts128255Octets();
        ~OutPkts128255Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets : public ydk::Entity
{
    public:
        OutPkts256511Octets();
        ~OutPkts256511Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets : public ydk::Entity
{
    public:
        OutPkts5121023Octets();
        ~OutPkts5121023Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets : public ydk::Entity
{
    public:
        OutPkts10241518Octets();
        ~OutPkts10241518Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil : public ydk::Entity
{
    public:
        RxUtil();
        ~RxUtil();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil : public ydk::Entity
{
    public:
        TxUtil();
        ~TxUtil();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt : public ydk::Entity
{
    public:
        TxUndersizedPkt();
        ~TxUndersizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt : public ydk::Entity
{
    public:
        TxOversizedPkt();
        ~TxOversizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments : public ydk::Entity
{
    public:
        TxFragments();
        ~TxFragments();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber : public ydk::Entity
{
    public:
        TxJabber();
        ~TxJabber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs : public ydk::Entity
{
    public:
        TxBadFcs();
        ~TxBadFcs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30 : public ydk::Entity
{
    public:
        MacsecSecond30();
        ~MacsecSecond30();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30secyifs; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs
        class MacsecSecond30secyrxes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes
        class MacsecSecond30EtherS; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS
        class MacsecSecond30secytxes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs> macsec_second30secyifs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes> macsec_second30secyrxes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS> macsec_second30_ether_s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secytxes> macsec_second30secytxes;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs : public ydk::Entity
{
    public:
        MacsecSecond30secyifs();
        ~MacsecSecond30secyifs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30secyif; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif

        ydk::YList macsec_second30secyif;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif : public ydk::Entity
{
    public:
        MacsecSecond30secyif();
        ~MacsecSecond30secyif();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class InPktsUntagged; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsUntagged
        class InPktsNoTag; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsNoTag
        class InPktsBadTag; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsBadTag
        class InPktsUnknownSci; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsUnknownSci
        class InPktsNoSci; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsNoSci
        class InPktsOverrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsOverrun
        class InOctetsValidated; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InOctetsDecrypted
        class OutPktsUntagged; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutPktsUntagged
        class OutPktsTooLong; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutPktsTooLong
        class OutOctetsProtected; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutOctetsEncrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsUntagged> in_pkts_untagged;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsNoTag> in_pkts_no_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsBadTag> in_pkts_bad_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsUnknownSci> in_pkts_unknown_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsNoSci> in_pkts_no_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsOverrun> in_pkts_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InOctetsDecrypted> in_octets_decrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutPktsUntagged> out_pkts_untagged;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutPktsTooLong> out_pkts_too_long;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutOctetsEncrypted> out_octets_encrypted;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsUntagged : public ydk::Entity
{
    public:
        InPktsUntagged();
        ~InPktsUntagged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsUntagged


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsNoTag : public ydk::Entity
{
    public:
        InPktsNoTag();
        ~InPktsNoTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsNoTag


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsBadTag : public ydk::Entity
{
    public:
        InPktsBadTag();
        ~InPktsBadTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsBadTag


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsUnknownSci : public ydk::Entity
{
    public:
        InPktsUnknownSci();
        ~InPktsUnknownSci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsUnknownSci


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsNoSci : public ydk::Entity
{
    public:
        InPktsNoSci();
        ~InPktsNoSci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsNoSci


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsOverrun : public ydk::Entity
{
    public:
        InPktsOverrun();
        ~InPktsOverrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InPktsOverrun


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InOctetsValidated : public ydk::Entity
{
    public:
        InOctetsValidated();
        ~InOctetsValidated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InOctetsValidated


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InOctetsDecrypted : public ydk::Entity
{
    public:
        InOctetsDecrypted();
        ~InOctetsDecrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::InOctetsDecrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutPktsUntagged : public ydk::Entity
{
    public:
        OutPktsUntagged();
        ~OutPktsUntagged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutPktsUntagged


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutPktsTooLong : public ydk::Entity
{
    public:
        OutPktsTooLong();
        ~OutPktsTooLong();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutPktsTooLong


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutOctetsProtected : public ydk::Entity
{
    public:
        OutOctetsProtected();
        ~OutOctetsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutOctetsProtected


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutOctetsEncrypted : public ydk::Entity
{
    public:
        OutOctetsEncrypted();
        ~OutOctetsEncrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyifs::MacsecSecond30secyif::OutOctetsEncrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes : public ydk::Entity
{
    public:
        MacsecSecond30secyrxes();
        ~MacsecSecond30secyrxes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30secyrx; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx

        ydk::YList macsec_second30secyrx;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx : public ydk::Entity
{
    public:
        MacsecSecond30secyrx();
        ~MacsecSecond30secyrx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class InPktsUnchecked; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsUnchecked
        class InPktsDelayed; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsDelayed
        class InPktsLate; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsLate
        class InPktsOk; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsOk
        class InPktsInvalid; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsInvalid
        class InPktsNotValid; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsNotValid
        class InPktsNotUsingSa; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsNotUsingSa
        class InPktsUnusedSa; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsUnusedSa
        class InPktsUntaggedHit; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsUntaggedHit
        class InOctetsValidated; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InOctetsDecrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsUnchecked> in_pkts_unchecked;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsDelayed> in_pkts_delayed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsLate> in_pkts_late;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsOk> in_pkts_ok;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsInvalid> in_pkts_invalid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsNotValid> in_pkts_not_valid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsNotUsingSa> in_pkts_not_using_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsUnusedSa> in_pkts_unused_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsUntaggedHit> in_pkts_untagged_hit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InOctetsDecrypted> in_octets_decrypted;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsUnchecked : public ydk::Entity
{
    public:
        InPktsUnchecked();
        ~InPktsUnchecked();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsUnchecked


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsDelayed : public ydk::Entity
{
    public:
        InPktsDelayed();
        ~InPktsDelayed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsDelayed


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsLate : public ydk::Entity
{
    public:
        InPktsLate();
        ~InPktsLate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsLate


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsOk : public ydk::Entity
{
    public:
        InPktsOk();
        ~InPktsOk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsOk


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsInvalid : public ydk::Entity
{
    public:
        InPktsInvalid();
        ~InPktsInvalid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsInvalid


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsNotValid : public ydk::Entity
{
    public:
        InPktsNotValid();
        ~InPktsNotValid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsNotValid


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsNotUsingSa : public ydk::Entity
{
    public:
        InPktsNotUsingSa();
        ~InPktsNotUsingSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsNotUsingSa


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsUnusedSa : public ydk::Entity
{
    public:
        InPktsUnusedSa();
        ~InPktsUnusedSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsUnusedSa


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsUntaggedHit : public ydk::Entity
{
    public:
        InPktsUntaggedHit();
        ~InPktsUntaggedHit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InPktsUntaggedHit


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InOctetsValidated : public ydk::Entity
{
    public:
        InOctetsValidated();
        ~InOctetsValidated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InOctetsValidated


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InOctetsDecrypted : public ydk::Entity
{
    public:
        InOctetsDecrypted();
        ~InOctetsDecrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30secyrxes::MacsecSecond30secyrx::InOctetsDecrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS : public ydk::Entity
{
    public:
        MacsecSecond30EtherS();
        ~MacsecSecond30EtherS();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30Ether; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether

        ydk::YList macsec_second30_ether;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether : public ydk::Entity
{
    public:
        MacsecSecond30Ether();
        ~MacsecSecond30Ether();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class RxPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt
        class StatPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt
        class OctetStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat
        class OversizePktStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat
        class FcsErrorsStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat
        class LongFramesStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat
        class JabberStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat
        class Ether64Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets
        class Ether65127Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet
        class Ether128255Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet
        class Ether256511Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet
        class Ether5121023Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet
        class Ether10241518Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet
        class InUcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt
        class InMcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt
        class InBcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt
        class OutUcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt
        class OutBcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt
        class OutMcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt
        class TxPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt
        class IfInErrors; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors
        class IfInOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets
        class EtherStatMulticastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt
        class EtherStatBroadcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt
        class EtherStatUndersizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt
        class OutOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets
        class InPauseFrame; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame
        class InGoodBytes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes
        class In8021qFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021qFrames
        class InPkts1519MaxOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets
        class InGoodPkts; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts
        class InDropOverrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun
        class InDropAbort; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort
        class InDropInvalidVlan; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan
        class InDropInvalidDmac; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac
        class InDropInvalidEncap; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap
        class InDropOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther
        class InMibGiant; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant
        class InMibJabber; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber
        class InMibcrc; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc
        class InErrorCollisions; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions
        class InErrorSymbol; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol
        class OutGoodBytes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes
        class Out8021qFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021qFrames
        class OutPauseFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames
        class OutPkts1519MaxOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets
        class OutGoodPkts; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts
        class OutDropUnderrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun
        class OutDropAbort; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort
        class OutDropOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther
        class OutErrorOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther
        class InErrorGiant; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant
        class InErrorRunt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt
        class InErrorJabbers; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers
        class InErrorFragments; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments
        class InErrorOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther
        class InPkt64Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet
        class InPkts65To127Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets
        class InPkts128To255Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets
        class InPkts256To511Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets
        class InPkts512To1023Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets
        class InPkts1024To1518Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets
        class Outpkt64octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64octet
        class OutPkts65127Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets
        class OutPkts128255Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets
        class OutPkts256511Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets
        class OutPkts5121023Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets
        class OutPkts10241518Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets
        class RxUtil; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil
        class TxUtil; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil
        class TxUndersizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt
        class TxOversizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt
        class TxFragments; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments
        class TxJabber; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber
        class TxBadFcs; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt> rx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt> stat_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat> octet_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat> oversize_pkt_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat> fcs_errors_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat> long_frames_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat> jabber_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets> ether64_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet> ether65127_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet> ether128255_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet> ether256511_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet> ether5121023_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet> ether10241518_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt> in_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt> in_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt> in_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt> out_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt> out_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt> out_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt> tx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors> if_in_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets> if_in_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt> ether_stat_multicast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt> ether_stat_broadcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt> ether_stat_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets> out_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame> in_pause_frame;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes> in_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021qFrames> in8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets> in_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts> in_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun> in_drop_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort> in_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan> in_drop_invalid_vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac> in_drop_invalid_dmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap> in_drop_invalid_encap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther> in_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant> in_mib_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber> in_mib_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc> in_mibcrc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions> in_error_collisions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol> in_error_symbol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes> out_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021qFrames> out8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames> out_pause_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets> out_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts> out_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun> out_drop_underrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort> out_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther> out_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther> out_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant> in_error_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt> in_error_runt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers> in_error_jabbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments> in_error_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther> in_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet> in_pkt64_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets> in_pkts65_to127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets> in_pkts128_to255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets> in_pkts256_to511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets> in_pkts512_to1023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets> in_pkts1024_to1518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64octet> outpkt64octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets> out_pkts65127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets> out_pkts128255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets> out_pkts256511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets> out_pkts5121023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets> out_pkts10241518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil> rx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil> tx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt> tx_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt> tx_oversized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments> tx_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber> tx_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs> tx_bad_fcs;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt : public ydk::Entity
{
    public:
        RxPkt();
        ~RxPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt : public ydk::Entity
{
    public:
        StatPkt();
        ~StatPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat : public ydk::Entity
{
    public:
        OctetStat();
        ~OctetStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat

class PmSonetPathWidthEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf sts1;
        static const ydk::Enum::YLeaf sts3c_stm1;
        static const ydk::Enum::YLeaf sts12c_stm4;
        static const ydk::Enum::YLeaf sts24c;
        static const ydk::Enum::YLeaf sts48c_stm16;
        static const ydk::Enum::YLeaf sts192c_stm64;
        static const ydk::Enum::YLeaf sts768c_stm256;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "sts1") return 1;
            if (name == "sts3c-stm1") return 2;
            if (name == "sts12c-stm4") return 3;
            if (name == "sts24c") return 4;
            if (name == "sts48c-stm16") return 5;
            if (name == "sts192c-stm64") return 6;
            if (name == "sts768c-stm256") return 7;
            return -1;
        }
};

class PmPrbsStatusEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_applicable;
        static const ydk::Enum::YLeaf locked;
        static const ydk::Enum::YLeaf un_locked;

        static int get_enum_value(const std::string & name) {
            if (name == "not-applicable") return 0;
            if (name == "locked") return 1;
            if (name == "un-locked") return 2;
            return -1;
        }
};

class PmPrbsPatternEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prbs_none;
        static const ydk::Enum::YLeaf pn31;
        static const ydk::Enum::YLeaf pn23;
        static const ydk::Enum::YLeaf pn11;
        static const ydk::Enum::YLeaf inv_pn31;
        static const ydk::Enum::YLeaf inv_pn11;
        static const ydk::Enum::YLeaf pn15;

        static int get_enum_value(const std::string & name) {
            if (name == "prbs-none") return 0;
            if (name == "pn31") return 1;
            if (name == "pn23") return 2;
            if (name == "pn11") return 4;
            if (name == "inv-pn31") return 8;
            if (name == "inv-pn11") return 16;
            if (name == "pn15") return 32;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_0_ */

