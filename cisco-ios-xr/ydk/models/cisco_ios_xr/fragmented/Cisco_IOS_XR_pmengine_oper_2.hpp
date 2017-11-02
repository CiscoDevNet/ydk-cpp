#ifndef _CISCO_IOS_XR_PMENGINE_OPER_2_
#define _CISCO_IOS_XR_PMENGINE_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_0.hpp"
#include "Cisco_IOS_XR_pmengine_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::RxUtil


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUtil


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxUndersizedPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxOversizedPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxFragments


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxJabber


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24EtherS::MacsecHour24Ether::TxBadFcs


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs : public ydk::Entity
{
    public:
        MacsecHour24Secyifs();
        ~MacsecHour24Secyifs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24Secyif; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif> > macsec_hour24secyif;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif : public ydk::Entity
{
    public:
        MacsecHour24Secyif();
        ~MacsecHour24Secyif();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class InPktsUntagged; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUntagged
        class InPktsNoTag; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag
        class InPktsBadTag; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag
        class InPktsUnknownSci; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUnknownSci
        class InPktsNoSci; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci
        class InPktsOverrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsOverrun
        class InOctetsValidated; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted
        class OutPktsUntagged; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsUntagged
        class OutPktsTooLong; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsTooLong
        class OutOctetsProtected; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsEncrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUntagged> in_pkts_untagged;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag> in_pkts_no_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag> in_pkts_bad_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUnknownSci> in_pkts_unknown_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci> in_pkts_no_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsOverrun> in_pkts_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted> in_octets_decrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsUntagged> out_pkts_untagged;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsTooLong> out_pkts_too_long;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsEncrypted> out_octets_encrypted;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUntagged : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUntagged


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoTag


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsBadTag


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUnknownSci : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUnknownSci


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsNoSci


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsOverrun : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsOverrun


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsValidated


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InOctetsDecrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsUntagged : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsUntagged


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsTooLong : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsTooLong


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsProtected : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsProtected


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsEncrypted : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsEncrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes : public ydk::Entity
{
    public:
        MacsecHour24Secyrxes();
        ~MacsecHour24Secyrxes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24Secyrx; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx> > macsec_hour24secyrx;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx : public ydk::Entity
{
    public:
        MacsecHour24Secyrx();
        ~MacsecHour24Secyrx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class InPktsUnchecked; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnchecked
        class InPktsDelayed; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsDelayed
        class InPktsLate; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsLate
        class InPktsOk; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsOk
        class InPktsInvalid; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsInvalid
        class InPktsNotValid; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotValid
        class InPktsNotUsingSa; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotUsingSa
        class InPktsUnusedSa; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnusedSa
        class InPktsUntaggedHit; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUntaggedHit
        class InOctetsValidated; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsDecrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnchecked> in_pkts_unchecked;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsDelayed> in_pkts_delayed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsLate> in_pkts_late;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsOk> in_pkts_ok;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsInvalid> in_pkts_invalid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotValid> in_pkts_not_valid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotUsingSa> in_pkts_not_using_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnusedSa> in_pkts_unused_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUntaggedHit> in_pkts_untagged_hit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsDecrypted> in_octets_decrypted;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnchecked : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnchecked


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsDelayed : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsDelayed


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsLate : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsLate


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsOk : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsOk


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsInvalid : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsInvalid


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotValid : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotValid


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotUsingSa : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotUsingSa


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnusedSa : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnusedSa


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUntaggedHit : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUntaggedHit


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsValidated : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsValidated


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsDecrypted : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsDecrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes : public ydk::Entity
{
    public:
        MacsecHour24Secytxes();
        ~MacsecHour24Secytxes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24Secytx; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx> > macsec_hour24secytx;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx : public ydk::Entity
{
    public:
        MacsecHour24Secytx();
        ~MacsecHour24Secytx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class OutPktsProtected; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsProtected
        class OutPktsEncrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsEncrypted
        class OutOctetsProtected; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsEncrypted
        class OutPktsTooLong; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsTooLong

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsProtected> out_pkts_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsEncrypted> out_pkts_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsEncrypted> out_octets_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsTooLong> out_pkts_too_long;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsProtected : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsProtected


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsEncrypted : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsEncrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsProtected : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsProtected


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsEncrypted : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsEncrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsTooLong : public ydk::Entity
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

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsTooLong


class PerformanceManagement::HoVc : public ydk::Entity
{
    public:
        HoVc();
        ~HoVc();

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

        class HoVcPorts; //type: PerformanceManagement::HoVc::HoVcPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts> ho_vc_ports;
        
}; // PerformanceManagement::HoVc


class PerformanceManagement::HoVc::HoVcPorts : public ydk::Entity
{
    public:
        HoVcPorts();
        ~HoVcPorts();

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

        class HoVcPort; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort> > ho_vc_port;
        
}; // PerformanceManagement::HoVc::HoVcPorts


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort : public ydk::Entity
{
    public:
        HoVcPort();
        ~HoVcPort();

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
        class HoVcCurrent; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent> ho_vc_current;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent : public ydk::Entity
{
    public:
        HoVcCurrent();
        ~HoVcCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcHour24; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24
        class HoVcMinute15; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24> ho_vc_hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15> ho_vc_minute15;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24 : public ydk::Entity
{
    public:
        HoVcHour24();
        ~HoVcHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcHour24Paths; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths> ho_vc_hour24_paths;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths : public ydk::Entity
{
    public:
        HoVcHour24Paths();
        ~HoVcHour24Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcHour24Path; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path> > ho_vc_hour24_path;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path : public ydk::Entity
{
    public:
        HoVcHour24Path();
        ~HoVcHour24Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Path; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path
        class FePath; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path> path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath> fe_path;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_status; //type: int32
        class PathESs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs
        class PathEsRs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs
        class PathSeSs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs
        class PathSesRs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs
        class PathEBs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs
        class PathUaSs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs
        class PathBbEs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs
        class PathBbeRs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs> path_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs> path_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs> path_e_bs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs> path_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs> path_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs> path_bbe_rs;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs : public ydk::Entity
{
    public:
        PathESs();
        ~PathESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathESs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs : public ydk::Entity
{
    public:
        PathEsRs();
        ~PathEsRs();

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

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEsRs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs : public ydk::Entity
{
    public:
        PathSeSs();
        ~PathSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSeSs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs : public ydk::Entity
{
    public:
        PathSesRs();
        ~PathSesRs();

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

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathSesRs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs : public ydk::Entity
{
    public:
        PathEBs();
        ~PathEBs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathEBs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs : public ydk::Entity
{
    public:
        PathUaSs();
        ~PathUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathUaSs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs : public ydk::Entity
{
    public:
        PathBbEs();
        ~PathBbEs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbEs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs : public ydk::Entity
{
    public:
        PathBbeRs();
        ~PathBbeRs();

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

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::Path::PathBbeRs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath : public ydk::Entity
{
    public:
        FePath();
        ~FePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf far_end_path_e_ss; //type: uint32
        ydk::YLeaf far_end_path_se_ss; //type: uint32
        ydk::YLeaf far_end_path_c_vs; //type: uint32
        ydk::YLeaf far_end_path_ua_ss; //type: uint32

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcHour24::HoVcHour24Paths::HoVcHour24Path::FePath


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15 : public ydk::Entity
{
    public:
        HoVcMinute15();
        ~HoVcMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcMinute15Paths; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths> ho_vc_minute15_paths;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths : public ydk::Entity
{
    public:
        HoVcMinute15Paths();
        ~HoVcMinute15Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcMinute15Path; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path> > ho_vc_minute15_path;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path : public ydk::Entity
{
    public:
        HoVcMinute15Path();
        ~HoVcMinute15Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Path; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path
        class FePath; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path> path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath> fe_path;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_status; //type: int32
        class PathESs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs
        class PathEsRs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs
        class PathSeSs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs
        class PathSesRs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs
        class PathEBs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs
        class PathUaSs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs
        class PathBbEs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs
        class PathBbeRs; //type: PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs> path_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs> path_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs> path_e_bs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs> path_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs> path_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs> path_bbe_rs;
        
}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs : public ydk::Entity
{
    public:
        PathESs();
        ~PathESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathESs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs : public ydk::Entity
{
    public:
        PathEsRs();
        ~PathEsRs();

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

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEsRs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs : public ydk::Entity
{
    public:
        PathSeSs();
        ~PathSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSeSs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs : public ydk::Entity
{
    public:
        PathSesRs();
        ~PathSesRs();

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

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathSesRs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs : public ydk::Entity
{
    public:
        PathEBs();
        ~PathEBs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathEBs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs : public ydk::Entity
{
    public:
        PathUaSs();
        ~PathUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathUaSs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs : public ydk::Entity
{
    public:
        PathBbEs();
        ~PathBbEs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbEs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs : public ydk::Entity
{
    public:
        PathBbeRs();
        ~PathBbeRs();

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

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::Path::PathBbeRs


class PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath : public ydk::Entity
{
    public:
        FePath();
        ~FePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf far_end_path_e_ss; //type: uint32
        ydk::YLeaf far_end_path_se_ss; //type: uint32
        ydk::YLeaf far_end_path_c_vs; //type: uint32
        ydk::YLeaf far_end_path_ua_ss; //type: uint32

}; // PerformanceManagement::HoVc::HoVcPorts::HoVcPort::HoVcCurrent::HoVcMinute15::HoVcMinute15Paths::HoVcMinute15Path::FePath


class PerformanceManagement::Odu : public ydk::Entity
{
    public:
        Odu();
        ~Odu();

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

        class OduPorts; //type: PerformanceManagement::Odu::OduPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts> odu_ports;
        
}; // PerformanceManagement::Odu


class PerformanceManagement::Odu::OduPorts : public ydk::Entity
{
    public:
        OduPorts();
        ~OduPorts();

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

        class OduPort; //type: PerformanceManagement::Odu::OduPorts::OduPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort> > odu_port;
        
}; // PerformanceManagement::Odu::OduPorts


class PerformanceManagement::Odu::OduPorts::OduPort : public ydk::Entity
{
    public:
        OduPort();
        ~OduPort();

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
        class OduCurrent; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent> odu_current;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent : public ydk::Entity
{
    public:
        OduCurrent();
        ~OduCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15
        class OduHour24; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15> odu_minute15;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24> odu_hour24;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15 : public ydk::Entity
{
    public:
        OduMinute15();
        ~OduMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15Gfps; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps
        class OduMinute15Prbses; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses
        class OduMinute15Otns; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps> odu_minute15gfps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses> odu_minute15prbses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns> odu_minute15otns;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps : public ydk::Entity
{
    public:
        OduMinute15Gfps();
        ~OduMinute15Gfps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15Gfp; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp> > odu_minute15gfp;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp : public ydk::Entity
{
    public:
        OduMinute15Gfp();
        ~OduMinute15Gfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class RxBitErr; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr
        class RxInvTyp; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp
        class RxCrc; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc
        class RxLfd; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd
        class RxCsf; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr> rx_bit_err;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp> rx_inv_typ;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc> rx_crc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd> rx_lfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf> rx_csf;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr : public ydk::Entity
{
    public:
        RxBitErr();
        ~RxBitErr();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxBitErr


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp : public ydk::Entity
{
    public:
        RxInvTyp();
        ~RxInvTyp();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxInvTyp


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc : public ydk::Entity
{
    public:
        RxCrc();
        ~RxCrc();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCrc


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd : public ydk::Entity
{
    public:
        RxLfd();
        ~RxLfd();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxLfd


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf : public ydk::Entity
{
    public:
        RxCsf();
        ~RxCsf();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Gfps::OduMinute15Gfp::RxCsf


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses : public ydk::Entity
{
    public:
        OduMinute15Prbses();
        ~OduMinute15Prbses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15Prbs; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs> > odu_minute15prbs;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs : public ydk::Entity
{
    public:
        OduMinute15Prbs();
        ~OduMinute15Prbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf ebc; //type: uint64
        ydk::YLeaf found_count; //type: uint32
        ydk::YLeaf lost_count; //type: uint32
        ydk::YLeaf found_at_time; //type: uint64
        ydk::YLeaf lost_at_time; //type: uint64
        ydk::YLeaf conf_patt; //type: PmPrbsPatternEt
        class RcvPatt; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt
        class PrbsStatus; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt> rcv_patt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus> prbs_status;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt : public ydk::Entity
{
    public:
        RcvPatt();
        ~RcvPatt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf rcv_patt; //type: PmPrbsPatternEt

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::RcvPatt


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus : public ydk::Entity
{
    public:
        PrbsStatus();
        ~PrbsStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf prbs_status; //type: PmPrbsStatusEt

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Prbses::OduMinute15Prbs::PrbsStatus


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns : public ydk::Entity
{
    public:
        OduMinute15Otns();
        ~OduMinute15Otns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15Otn; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn> > odu_minute15otn;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn : public ydk::Entity
{
    public:
        OduMinute15Otn();
        ~OduMinute15Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class Lbc; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc
        class EsNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe
        class EsrNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe
        class SesNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe
        class SesrNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe
        class UasNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe
        class BbeNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe
        class BberNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe
        class FcNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe
        class EsFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe
        class EsrFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe
        class SesFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe
        class SesrFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe
        class UasFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe
        class BbeFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe
        class BberFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe
        class FcFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe> uas_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe> fc_fe;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc : public ydk::Entity
{
    public:
        Lbc();
        ~Lbc();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::Lbc


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe : public ydk::Entity
{
    public:
        EsNe();
        ~EsNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe : public ydk::Entity
{
    public:
        EsrNe();
        ~EsrNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe : public ydk::Entity
{
    public:
        SesNe();
        ~SesNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe : public ydk::Entity
{
    public:
        SesrNe();
        ~SesrNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe : public ydk::Entity
{
    public:
        UasNe();
        ~UasNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe : public ydk::Entity
{
    public:
        BbeNe();
        ~BbeNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe : public ydk::Entity
{
    public:
        BberNe();
        ~BberNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe : public ydk::Entity
{
    public:
        FcNe();
        ~FcNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe : public ydk::Entity
{
    public:
        EsFe();
        ~EsFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe : public ydk::Entity
{
    public:
        EsrFe();
        ~EsrFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::EsrFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe : public ydk::Entity
{
    public:
        SesFe();
        ~SesFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe : public ydk::Entity
{
    public:
        SesrFe();
        ~SesrFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::SesrFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe : public ydk::Entity
{
    public:
        UasFe();
        ~UasFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::UasFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe : public ydk::Entity
{
    public:
        BbeFe();
        ~BbeFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BbeFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe : public ydk::Entity
{
    public:
        BberFe();
        ~BberFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::BberFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe : public ydk::Entity
{
    public:
        FcFe();
        ~FcFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduMinute15::OduMinute15Otns::OduMinute15Otn::FcFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24 : public ydk::Entity
{
    public:
        OduHour24();
        ~OduHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24Prbses; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses
        class OduHour24Gfps; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps
        class OduHour24Otns; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses> odu_hour24prbses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps> odu_hour24gfps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns> odu_hour24otns;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses : public ydk::Entity
{
    public:
        OduHour24Prbses();
        ~OduHour24Prbses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24Prbs; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs> > odu_hour24prbs;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs : public ydk::Entity
{
    public:
        OduHour24Prbs();
        ~OduHour24Prbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf ebc; //type: uint64
        ydk::YLeaf found_count; //type: uint32
        ydk::YLeaf lost_count; //type: uint32
        ydk::YLeaf found_at_time; //type: uint64
        ydk::YLeaf lost_at_time; //type: uint64
        ydk::YLeaf conf_patt; //type: PmPrbsPatternEt
        class RcvPatt; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt
        class PrbsStatus; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt> rcv_patt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus> prbs_status;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt : public ydk::Entity
{
    public:
        RcvPatt();
        ~RcvPatt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf rcv_patt; //type: PmPrbsPatternEt

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::RcvPatt


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus : public ydk::Entity
{
    public:
        PrbsStatus();
        ~PrbsStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf prbs_status; //type: PmPrbsStatusEt

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Prbses::OduHour24Prbs::PrbsStatus


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps : public ydk::Entity
{
    public:
        OduHour24Gfps();
        ~OduHour24Gfps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24Gfp; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp> > odu_hour24gfp;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp : public ydk::Entity
{
    public:
        OduHour24Gfp();
        ~OduHour24Gfp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class RxBitErr; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr
        class RxInvTyp; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp
        class RxCrc; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc
        class RxLfd; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd
        class RxCsf; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr> rx_bit_err;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp> rx_inv_typ;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc> rx_crc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd> rx_lfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf> rx_csf;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr : public ydk::Entity
{
    public:
        RxBitErr();
        ~RxBitErr();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxBitErr


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp : public ydk::Entity
{
    public:
        RxInvTyp();
        ~RxInvTyp();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxInvTyp


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc : public ydk::Entity
{
    public:
        RxCrc();
        ~RxCrc();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCrc


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd : public ydk::Entity
{
    public:
        RxLfd();
        ~RxLfd();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxLfd


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf : public ydk::Entity
{
    public:
        RxCsf();
        ~RxCsf();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Gfps::OduHour24Gfp::RxCsf


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns : public ydk::Entity
{
    public:
        OduHour24Otns();
        ~OduHour24Otns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24Otn; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn> > odu_hour24otn;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn : public ydk::Entity
{
    public:
        OduHour24Otn();
        ~OduHour24Otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class Lbc; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc
        class EsNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe
        class EsrNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe
        class SesNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe
        class SesrNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe
        class UasNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe
        class BbeNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe
        class BberNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe
        class FcNe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe
        class EsFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe
        class EsrFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe
        class SesFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe
        class SesrFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe
        class UasFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe
        class BbeFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe
        class BberFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe
        class FcFe; //type: PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe> uas_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe> fc_fe;
        
}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc : public ydk::Entity
{
    public:
        Lbc();
        ~Lbc();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::Lbc


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe : public ydk::Entity
{
    public:
        EsNe();
        ~EsNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe : public ydk::Entity
{
    public:
        EsrNe();
        ~EsrNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe : public ydk::Entity
{
    public:
        SesNe();
        ~SesNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe : public ydk::Entity
{
    public:
        SesrNe();
        ~SesrNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe : public ydk::Entity
{
    public:
        UasNe();
        ~UasNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe : public ydk::Entity
{
    public:
        BbeNe();
        ~BbeNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe : public ydk::Entity
{
    public:
        BberNe();
        ~BberNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe : public ydk::Entity
{
    public:
        FcNe();
        ~FcNe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcNe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe : public ydk::Entity
{
    public:
        EsFe();
        ~EsFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe : public ydk::Entity
{
    public:
        EsrFe();
        ~EsrFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::EsrFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe : public ydk::Entity
{
    public:
        SesFe();
        ~SesFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe : public ydk::Entity
{
    public:
        SesrFe();
        ~SesrFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::SesrFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe : public ydk::Entity
{
    public:
        UasFe();
        ~UasFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::UasFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe : public ydk::Entity
{
    public:
        BbeFe();
        ~BbeFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BbeFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe : public ydk::Entity
{
    public:
        BberFe();
        ~BberFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::BberFe


class PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe : public ydk::Entity
{
    public:
        FcFe();
        ~FcFe();

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

}; // PerformanceManagement::Odu::OduPorts::OduPort::OduCurrent::OduHour24::OduHour24Otns::OduHour24Otn::FcFe


class PerformanceManagement::Otu : public ydk::Entity
{
    public:
        Otu();
        ~Otu();

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

        class OtuPorts; //type: PerformanceManagement::Otu::OtuPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts> otu_ports;
        
}; // PerformanceManagement::Otu


class PerformanceManagement::Otu::OtuPorts : public ydk::Entity
{
    public:
        OtuPorts();
        ~OtuPorts();

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

        class OtuPort; //type: PerformanceManagement::Otu::OtuPorts::OtuPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort> > otu_port;
        
}; // PerformanceManagement::Otu::OtuPorts


class PerformanceManagement::Otu::OtuPorts::OtuPort : public ydk::Entity
{
    public:
        OtuPort();
        ~OtuPort();

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
        class OtuCurrent; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent> otu_current;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent : public ydk::Entity
{
    public:
        OtuCurrent();
        ~OtuCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15
        class OtuSecond30; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30
        class OtuHour24; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15> otu_minute15;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30> otu_second30;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24> otu_hour24;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15 : public ydk::Entity
{
    public:
        OtuMinute15();
        ~OtuMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15Fecs; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs
        class OtuMinute15Otns; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns
        class OtuMinute15Prbses; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs> otu_minute15fecs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Otns> otu_minute15otns;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Prbses> otu_minute15prbses;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs : public ydk::Entity
{
    public:
        OtuMinute15Fecs();
        ~OtuMinute15Fecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuMinute15Fec; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec> > otu_minute15fec;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec : public ydk::Entity
{
    public:
        OtuMinute15Fec();
        ~OtuMinute15Fec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class EcBits; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits
        class UcWords; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords
        class PreFecBer; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer
        class PostFecBer; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer
        class Q; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q
        class Qmargin; //type: PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords> uc_words;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin> qmargin;
        
}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits : public ydk::Entity
{
    public:
        EcBits();
        ~EcBits();

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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::EcBits


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords : public ydk::Entity
{
    public:
        UcWords();
        ~UcWords();

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

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::UcWords


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer : public ydk::Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PreFecBer


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer : public ydk::Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::PostFecBer


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q : public ydk::Entity
{
    public:
        Q();
        ~Q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Q


class PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin : public ydk::Entity
{
    public:
        Qmargin();
        ~Qmargin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuMinute15::OtuMinute15Fecs::OtuMinute15Fec::Qmargin


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_2_ */

